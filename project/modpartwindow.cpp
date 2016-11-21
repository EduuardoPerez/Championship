#include "modpartwindow.h"
#include "ui_modpartwindow.h"
#include <QDebug>

ModPartWindow::ModPartWindow(DynSetTree<Event, Avl_Tree> *eventTree,
                             DynSetTree<string, Avl_Tree> *nmEvTree,
                             DynSetTree<Participant, Avl_Tree> *partTree,
                             DynSetTree<Pair, Avl_Tree> *evPartTree,
                             const Event &event, const Participant &participant,
                             QWidget *parent) :
  QDialog(parent),
  ui(new Ui::ModPartWindow)
{
  ui->setupUi(this);
  this->eventTree = eventTree;
  this->nmEvTree = nmEvTree;
  this->partTree = partTree;
  this->evPartTree = evPartTree;
  this->event = event;
  this->participant = participant;

  ui->deCurrDate->hide();
  ui->deCurrDate->setDate(QDate::currentDate());
  ui->leDirPic->hide();
  ui->lePicture->hide();
  ui->lePicture->setFixedWidth(200);
  ui->lePicture->setFixedHeight(200);
  ui->deDateBegEv->setReadOnly(true);
  ui->leEventName->setText(QString::fromStdString(event.getEventName()));
  ui->leId->setText(QString::fromStdString(Uint2String(participant.getId())));
  ui->leName->setText(QString::fromStdString(participant.getName()));
  ui->leLastName->setText(QString::fromStdString(participant.getLastName()));
  ui->leDirPic->setText(QString::fromStdString(participant.getPicture()));
  ui->lePicture->setPixmap(QString::fromStdString(participant.getPicture()));

  auto dateBegEv=QString::fromStdString(event.getDateBegEv().toString());
  auto bornDate=QString::fromStdString(participant.getBornDate().toString());

  ui->deDateBegEv->setDate(QDate::fromString(dateBegEv, "d/M/yyyy"));
  ui->deBornDate->setDate(QDate::fromString(bornDate, "d/M/yyyy"));

  if(QString::fromStdString(participant.getPicture()) != "")
    ui->lePicture->show();

  this->setGeometry(
        QStyle::alignedRect(
          Qt::LeftToRight,
          Qt::AlignCenter,
          this->size(),
          qApp->desktop()->availableGeometry()
      )
  );
}

ModPartWindow::~ModPartWindow()
{
  delete ui;
}

void ModPartWindow::on_pbRegresar_clicked()
{
  ViewEventWindow *viewEv_i;
  viewEv_i = new ViewEventWindow(this->eventTree, this->nmEvTree,
                                 this->partTree, this->evPartTree, event, this);
  viewEv_i->setModal(false);
  viewEv_i->show();
}

void ModPartWindow::on_pbExaminar_clicked()
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

void ModPartWindow::on_pbGuardar_clicked()
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
    ofstream fileOut;
    Pair evPart = make_pair(id, eventName);

    if(this->participant.getId() == id)
    {
      fileOut.open("../BD/participantes.txt");
      if(!fileOut.good())
        msj.setText("\tERROR\nNo se han podido realizar los cambios\n");
      else
      {
        auto auxCategory = this->participant.getCategory();
        this->partTree->remove(this->participant);

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

        this->participant.assign(id, name, lastName, bornDate, age, category,
                           inscripDate, eventName, picture);
        this->partTree->insert(this->participant);

        for(auto it=this->partTree->begin(); it.has_curr(); it.next())
          fileOut << it.get_curr();
        fileOut.close();

        if(auxCategory == category)
          msj.setText("\nLos cambios realizados en sus datos fueron guardados "
                      "con éxito");
        else
          msj.setText("\nLos cambios realizados en sus datos fueron "
                              "guardados con éxito.\n\nUsted ahora está "
                              "inscrito en la categoría: "+
                              QString::fromStdString(category));
      }
    }
    else if(this->evPartTree->insert(evPart) == nullptr)
      msj.setText("\n\t\tERROR\nYa se ha registrado un participante con el "
                  "numero de cédula que usted ha ingresado\n");
    else
    {
      fileOut.open("../BD/participantes.txt");
      if(!fileOut.good())
        msj.setText("\tERROR\nNo se han podido realizar los cambios\n");
      else
      {
        auto auxCategory = this->participant.getCategory();
        this->partTree->remove(this->participant);

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

        this->participant.assign(id, name, lastName, bornDate, age, category,
                           inscripDate, eventName, picture);
        this->partTree->insert(this->participant);

        for(auto it=this->partTree->begin(); it.has_curr(); it.next())
          fileOut << it.get_curr();
        fileOut.close();

        if(auxCategory == category)
          msj.setText("Los cambios realizados en sus datos fueron guardados con"
                      " éxito");
        else
          msj.setText("Los cambios realizados en sus datos fueron "
                              "guardados con éxito.\n\nUsted ahora está "
                              "inscrito en la categoría: "+
                              QString::fromStdString(category));
      }
    }
  }
  msj.exec();
}
