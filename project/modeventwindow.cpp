/**
 * @file modeventwindow.cpp
 * @brief Implementación de la clase ModEventWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
 */
#include "modeventwindow.h"
#include "ui_modeventwindow.h"
#include <QDebug>

ModEventWindow::ModEventWindow(DynSetTree<Event, Avl_Tree> *eventTree,
                               DynSetTree<string, Avl_Tree> *nameTree,
                               const Event& event,
                               QWidget *parent) :
  QDialog(parent),
  ui(new Ui::ModEventWindow)
{
  ui->setupUi(this);
  this->eventTree = eventTree;
  this->nameTree = nameTree;
  this->event = event;
  ui->lPicture->setFixedWidth(80);
  ui->lPicture->setFixedHeight(80);
  ui->lePicture->hide();
  ui->deCurrDate->hide();
  ui->deCurrDate->setDate(QDate::currentDate());

  auto eventName = QString::fromStdString(event.getEventName());
  auto inscripValue = QString::number(event.getInscripValue());
  auto eventPlace = QString::fromStdString(event.getEventPlace());
  auto matePlace = QString::fromStdString(event.getMatePlace());
  auto picture = QString::fromStdString(event.getPicture());
  auto description = QString::fromStdString(event.getDescription());
  auto aux = QString::fromStdString(event.getDateBegEv().toString());
  auto dateBegEv = QDate::fromString(aux, "d/M/yyyy");
  aux.clear();
  aux = QString::fromStdString(event.getDateFinEv().toString());
  auto dateFinEv = QDate::fromString(aux, "d/M/yyyy");
  aux.clear();
  aux = QString::fromStdString(event.getDateBegMate().toString());
  auto dateBegMate = QDate::fromString(aux, "d/M/yyyy");
  aux.clear();
  aux = QString::fromStdString(event.getDateFinMate().toString());
  auto dateFinMate = QDate::fromString(aux, "d/M/yyyy");
  aux.clear();
  aux = QString::fromStdString(event.getEventHour());
  auto eventHour = QTime::fromString(aux, "hh:mm");
  aux.clear();
  aux = QString::fromStdString(event.getHourBegMate());
  auto hourBegMate = QTime::fromString(aux, "hh:mm");
  aux.clear();
  aux = QString::fromStdString(event.getHourFinMate());
  auto hourFinMate = QTime::fromString(aux, "hh:mm");

  ui->leEventName->setText(eventName);
  ui->leInscripValue->setText(inscripValue);
  ui->txeEventPlace->setText(eventPlace);
  ui->txeMatePlace->setText(matePlace);
  ui->lePicture->setText(picture);
  ui->lPicture->setPixmap(picture);
  ui->txeDescription->setText(description);
  ui->deDateBegEv->setDate(dateBegEv);
  ui->deDateFinEv->setDate(dateFinEv);
  ui->deDateBegMate->setDate(dateBegMate);
  ui->deDateFinMate->setDate(dateFinMate);
  ui->teEventHour->setTime(eventHour);
  ui->teHourBegMate->setTime(hourBegMate);
  ui->teHourFinMate->setTime(hourFinMate);

  this->setGeometry(
        QStyle::alignedRect(
          Qt::LeftToRight,
          Qt::AlignCenter,
          this->size(),
          qApp->desktop()->availableGeometry()
      )
  );
}

ModEventWindow::~ModEventWindow()
{
  delete ui;
}

void ModEventWindow::on_pbRegresar_clicked()
{
  OrganizingWindow *window = new OrganizingWindow(*this->eventTree,
                                                  *this->nameTree, this);
  window->setModal(false);
  window->show();
}

void ModEventWindow::on_pbGuardar_clicked()
{
  QMessageBox msj;
  string name = ui->leEventName->text().toStdString();
  float inscripValue = ui->leInscripValue->text().toFloat();
  string eventHour = ui->teEventHour->text().toStdString();
  string eventPlace = ui->txeEventPlace->toPlainText().toStdString();
  string hourBegMate = ui->teHourBegMate->text().toStdString();
  string hourFinMate = ui->teHourFinMate->text().toStdString();
  string matePlace = ui->txeMatePlace->toPlainText().toStdString();
  string description = ui->txeDescription->toPlainText().toStdString();
  string picture = ui->lePicture->text().toStdString();
  QTime hbMate = ui->teHourBegMate->time();
  QTime hfMate = ui->teHourFinMate->time();
  Date dateBegEv, dateFinEv, dateBegMate, dateFinMate, currDate;

  currDate.fromString((ui->deCurrDate->text()).toStdString());
  dateBegEv.fromString((ui->deDateBegEv->text()).toStdString());
  dateFinEv.fromString((ui->deDateFinEv->text()).toStdString());
  dateBegMate.fromString((ui->deDateBegMate->text()).toStdString());
  dateFinMate.fromString((ui->deDateFinMate->text()).toStdString());

  if(name=="\0" || eventHour=="\0" || eventPlace=="\0" || hourBegMate=="\0" ||
     hourFinMate=="\0" || matePlace=="\0" || description=="\0")
    msj.setText("\n               ERROR\nFaltan campos por completar\n");

  else if(inscripValue==0)
    msj.setText("\tERROR\nIngreso un dato erróneo, debe darle un precio a la "
                  "inscripción\n");

  else if(dateBegEv == currDate)
    msj.setText("\t\tERROR\nLa fecha que seleccionó como fecha de inicio del "
                "evento no puede ser el día actual\n");

  else if(dateBegEv < currDate)
    msj.setText("\t\tERROR\nLa fecha que seleccionó como fecha de inicio del "
                "evento ya ha pasado\n");

  else if(dateBegEv > dateFinEv)
    msj.setText("\t\tERROR\nLa fecha que seleccionó como fecha final del evento"
                  " es mas reciente que la fecha de inicio del evento\n");

  else if(dateBegMate > dateFinMate)
    msj.setText("\t\tERROR\nLa fecha que seleccionó como fecha fin de la "
                  "entrega de material es mas reciente que la fecha de inicio"
                  " de la entrega del material\n");

  else if(dateBegMate > dateBegEv)
    msj.setText("\t\tERROR\nLa fecha que seleccionó como fecha de entrega del "
                "material es mas reciente que la fecha de inicio del evento\n");

  else if(hbMate > hfMate)
    msj.setText("\t\tERROR\nLa hora que seleccionó como hora de inicio de la "
                "entrega del material es mas tardía que la hora de finalización"
                " de la entrega del material\n");

  else{
    Event event;
    string originalNm = this->event.getEventName();
    Date originalDt = this->event.getDateBegEv();

    qDebug()<<QString::fromStdString(originalNm);
    qDebug()<<QString::fromStdString(originalDt.toString());


    event.assign(name, dateBegEv, dateFinEv, inscripValue, eventHour,
                 eventPlace, dateBegMate, dateFinMate, hourBegMate, hourFinMate,
                 matePlace, description, picture);

    for(auto it=this->eventTree->begin(); it.has_curr(); it.next())
      if(it.get_curr().getEventName() == originalNm &&
         it.get_curr().getDateBegEv() == originalDt)
      {
        qDebug()<<"dentro de la eliminacion";
        //idea para eliminar: no buscar directamente el dato sino buscarlo por su posicion y ahi si borrar
        this->eventTree->remove(it.get_curr());
        this->nameTree->remove(originalNm);
        it.reset_last();
      }

    if(this->nameTree->insert(name) == nullptr)
      msj.setText("\t\tERROR\nYa se ha registrado un evento con el nombre que"
                  " usted ha ingresado, utilice un nombre diferente\n");
    else
    {
      ofstream fileOut;

      fileOut.open("../BD/eventos.txt");
      if(!fileOut.good())
      {
        this->nameTree->remove(name);
        msj.setText("\tERROR\nNo se pudieron guardar las modificaciones\n");
        this->close();

        OrganizingWindow *window = new OrganizingWindow(*this->eventTree,
                                                        *this->nameTree, this);
        window->setModal(false);
        window->show();
      }
      else
      {
        this->eventTree->insert_dup(event);

        for(auto it=this->eventTree->begin(); it.has_curr(); it.next())
          fileOut << it.get_curr();
        fileOut.close();

        msj.setText("\nLos cambios fueron relizados con exito\n");
        this->close();

        OrganizingWindow *window = new OrganizingWindow(*this->eventTree,
                                                        *this->nameTree, this);
        window->setModal(false);
        window->show();
      }
    }
  }
  msj.exec();
}

void ModEventWindow::on_pbExaminar_clicked()
{
  QString picture = QFileDialog::getOpenFileName(this,tr("Abrir Archivo"),
                                                tr("/home/eduuardoperez"),
                                                 tr("Imagenes(*.png *.gif *.jpg"
                                                    " *.xpm)"));
  ui->lePicture->setText(picture);
  ui->lPicture->setPixmap(picture);
}
