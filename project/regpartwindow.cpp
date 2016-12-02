#include "regpartwindow.h"
#include "ui_regpartwindow.h"

RegPartWindow::RegPartWindow(DynSetTree<Event, Avl_Tree> *eventTree,
                             DynSetTree<string, Avl_Tree> *nmEvTree,
                             DynSetTree<Participant, Avl_Tree> *partTree,
                             DynSetTree<Pair, Avl_Tree> *evPartTree,
                             const Event &event, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::RegPartWindow)
{
  ui->setupUi(this);
  this->eventTree = eventTree;
  this->nmEvTree = nmEvTree;
  this->partTree = partTree;
  this->evPartTree = evPartTree;
  this->event = event;

  ui->deCurrDate->hide();
  ui->deCurrDate->setDate(QDate::currentDate());
  ui->leDirPic->hide();
  ui->lePicture->hide();
  ui->lePicture->setFixedWidth(200);
  ui->lePicture->setFixedHeight(200);
  ui->deDateBegEv->setReadOnly(true);
  ui->leEventName->setText(QString::fromStdString(this->event.getEventName()));

  auto dateBegEv = QString::fromStdString(event.getDateBegEv().toString());
  ui->deDateBegEv->setDate(QDate::fromString(dateBegEv, "d/M/yyyy"));

  this->setGeometry(
        QStyle::alignedRect(
          Qt::LeftToRight,
          Qt::AlignCenter,
          this->size(),
          qApp->desktop()->availableGeometry()
      )
  );
}

RegPartWindow::~RegPartWindow()
{
  delete ui;
}

void RegPartWindow::on_pbRegresar_clicked()
{
  ViewEventWindow *viewEv_i;
  viewEv_i = new ViewEventWindow(this->eventTree, this->nmEvTree,
                                 this->partTree, this->evPartTree, event, this);
  viewEv_i->setModal(false);
  viewEv_i->show();
}

void RegPartWindow::on_pbExaminar_clicked()
{
  QString picture = QFileDialog::getOpenFileName(this,tr("Abrir Archivo"),
                                                tr("/home/eduuardoperez"),
                                                 tr("Imagenes(*.png *.gif *.jpg"
                                                    " *.xpm)"));
  ui->leDirPic->setText(picture);
  ui->lePicture->setPixmap(picture);

  if(picture != "")
    ui->lePicture->show();
}

void RegPartWindow::on_pbInscribir_clicked()
{
  QMessageBox msj;
  unsigned int id = ui->leId->text().toUInt();
  string name = ui->leName->text().toStdString();
  string lastName = ui->leLastName->text().toStdString();
  unsigned int age;
  string category;
  string picture = ui->leDirPic->text().toStdString();
  string eventName = this->event.getEventName();
  Date bornDate, inscripDate;

  bornDate.fromString(ui->deBornDate->text().toStdString());
  inscripDate.fromString(ui->deCurrDate->text().toStdString());
  age = calculateAge(bornDate, this->event.getDateBegEv());

  if(id == 0 || name == "\0" || lastName == "\0")
     msj.setText("\tERROR\nFaltan campos por completar o ingresó un dato"
                 "erróneo");
  else if(bornDate > inscripDate)
    msj.setText("\tERROR\nVerifique su fecha de nacimiento");
  else
  {
    Pair evPart = make_pair(id, eventName);

    if(this->evPartTree->insert(evPart) == nullptr)
      msj.setText("\n\t\tERROR\nYa se ha registrado un participante con el "
                  "numero de cédula que usted ha ingresado\n");
    else
    {
      ofstream fileOut;

      fileOut.open("../BD/participantes.txt");
      if(!fileOut.good())
        msj.setText("\tERROR\nNo se ha podido realizar la inscripción\n");
      else
      {
        if(age<15)
          category="Infantil";
        else if(age>=15 && age<=19)
          category="Juvenil";
        else if(age>=20 && age<=29)
          category="Libre";
        else if(age>=30 && age<=39)
          category="Sub Master";
        else if(age>=40 && age<=44)
          category="Master A";
        else if(age>=45 && age<=49)
          category="Master B";
        else if(age>=50 && age<=54)
          category="Master C";
        else if(age>=55 && age<=59)
          category="Master D";
        else if(age>=60)
          category="Master E";

        Participant participant;
        participant.assign(id, name, lastName, bornDate, age, category,
                           inscripDate, eventName, picture);

        this->partTree->insert(participant);
        for(auto it=this->partTree->begin(); it.has_curr(); it.next())
          fileOut << it.get_curr();
        fileOut.close();

        auto evDtBeg=QString::fromStdString(event.getDateBegEv().toString());
        auto evDtFin=QString::fromStdString(event.getDateBegEv().toString());
        auto evPlace=QString::fromStdString(event.getEventPlace());
        auto mateDtB=QString::fromStdString(event.getDateBegMate().toString());
        auto mateDtF=QString::fromStdString(event.getDateFinMate().toString());
        auto mateHrB=QString::fromStdString(event.getHourBegMate());
        auto mateHrF=QString::fromStdString(event.getHourFinMate());
        auto matePlc=QString::fromStdString(event.getMatePlace());
        auto categor=QString::fromStdString(category);

        msj.setText("\n\tINSCRIPCIÓN REALIZADA CON ÉXITO\n\n"
                    "Fecha de realización del evento: "+evDtBeg+" - "+evDtFin+
                    '\n'+"Lugar: "+evPlace+'\n'+
                    "Fecha de entrega del material necesario para el evento: "+
                    mateDtB+" - "+mateDtF+'\n'+
                    "Horario de entrega del material: "+mateHrB+" - "+mateHrF+
                    '\n'+"Lugar de entrega del material: "+matePlc+"\n\n"+
                  "La categoría en la que usted quedó inscrito/a es: "+categor);
      }
    }
  }
  msj.exec();
}
