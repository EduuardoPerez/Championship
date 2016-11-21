#include "vieweventwindow.h"
#include "ui_vieweventwindow.h"
#include <QDebug>

ViewEventWindow::ViewEventWindow(DynSetTree<Event, Avl_Tree> *eventTree,
                                 DynSetTree<string, Avl_Tree> *nmEvTree,
                                 DynSetTree<Participant, Avl_Tree> *partTree,
                                 DynSetTree<Pair, Avl_Tree> *evPartTree,
                                 const Event &event, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::ViewEventWindow)
{
  ui->setupUi(this);
  this->eventTree = eventTree;
  this->nmEvTree = nmEvTree;
  this->partTree = partTree;
  this->evPartTree = evPartTree;
  this->event = event;

  ui->deCurrDate->hide();
  ui->deCurrDate->setDate(QDate::currentDate());
  ui->lePicture->hide();
  ui->lePicture->setFixedWidth(250);
  ui->lePicture->setFixedHeight(200);
  ui->tbInfo->setFixedWidth(250);
  ui->deDateBeg->setDate(QDate::currentDate());
  ui->deDateFin->setDate(QDate::currentDate());

  ui->deDateBegEv->setReadOnly(true);
  ui->deDateFinEv->setReadOnly(true);

  auto eventName = this->event.getEventName();
  auto picture = this->event.getPicture();
  auto dateBegEv=QString::fromStdString(this->event.getDateBegEv().toString());
  auto dateFinEv=QString::fromStdString(this->event.getDateBegEv().toString());
  auto description = QString::fromStdString(this->event.getDescription());
  auto value = float2String(this->event.getInscripValue());
  auto inscripValue = QString::fromStdString(value);
  auto eventHour = QString::fromStdString(this->event.getEventHour());
  auto eventPlace = QString::fromStdString(this->event.getEventPlace());

  ui->leEventName->setText(QString::fromStdString(eventName));
  ui->lePicture->setPixmap(QString::fromStdString(picture));
  ui->deDateBegEv->setDate(QDate::fromString(dateBegEv, "d/M/yyyy"));
  ui->deDateFinEv->setDate(QDate::fromString(dateFinEv, "d/M/yyyy"));
  ui->tbInfo->setText("Lugar donde se realizará el evento:\n"+eventPlace+"\n\n"+
                      "A partir de las: "+eventHour+" horas\n\n"+
                      "Valor de la inscripción: Bs. "+inscripValue+"\n\n"+
                      "Descripción del Evento: \n"+description);

  if(this->event.getPicture() != "")
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

ViewEventWindow::~ViewEventWindow()
{
  delete ui;
}

void ViewEventWindow::on_pbRegresar_clicked()
{
  SportyWindow *window = new SportyWindow(*this->eventTree, *this->nmEvTree,
                                        *this->partTree,*this->evPartTree,this);
  window->setModal(false);
  window->show();
}

void ViewEventWindow::on_pbInscribirse_clicked()
{
  QMessageBox msj;
  Date currDate, dateBegEv;

  currDate.fromString((ui->deCurrDate->text()).toStdString());
  dateBegEv = this->event.getDateBegEv();

  if(currDate < dateBegEv)
  {
    this->close();
    RegPartWindow *window = new RegPartWindow(this->eventTree, this->nmEvTree,
                                              this->partTree, this->evPartTree,
                                              this->event, this);
    window->setModal(false);
    window->show();
  }
  else
  {
    msj.setText("\nNo se pueden realizar inscripciones, la fecha limite ha"
                " pasado\t\n");
    msj.exec();
  }

}

void ViewEventWindow::on_pbModificar_clicked()
{
  QMessageBox msj;
  Participant participant;
  Date currDate, dateBegEv;

  currDate.fromString((ui->deCurrDate->text()).toStdString());
  dateBegEv = this->event.getDateBegEv();

  if(currDate < dateBegEv)
  {
    unsigned int id = ui->leModificar->text().toUInt();

    if (ui->leModificar->text() == "\0")
    {
        msj.setText("\n\t\tERROR\nEl campo está vacío\nDebe introducir el "
                    "número de cédula del participante que desea modificar\n");
        msj.exec();
    }
    else if(id == 0)
    {
      ui->leModificar->clear();
      msj.setText("\nLa información que proporcionó como cédula de identidad"
                    " es errónea\n");
      msj.exec();

    }
    else
    {
      for(auto it=this->partTree->begin(); it.has_curr(); it.next())
      {
        unsigned int partId = it.get_curr().getId();
        string evName = it.get_curr().getEventName();

        if(id == partId && this->event.getEventName() == evName)
        {
          participant = it.get_curr();
          it.reset_last();
        }
      }

      if(participant.getName() == "")
      {
        ui->leModificar->clear();
        msj.setText("\n\t\tERROR\nLa cédula que ingresó no pertenece a ningún "
                    "participante inscrito");
        msj.exec();
      }
      else
      {
        this->close();
        ModPartWindow *window = new ModPartWindow(this->eventTree,
                                                 this->nmEvTree, this->partTree,
                                                  this->evPartTree, this->event,
                                                  participant, this);
        window->setModal(false);
        window->show();
      }
    }
  }
  else
  {
    msj.setText("\nNo se pueden realizar modificaciones, la fecha limite ha"
                " pasado\t\n");
    msj.exec();
  }
}

void ViewEventWindow::on_pbBuscar_clicked()
{
  QMessageBox msj;
  Participant participant;
  unsigned int id = ui->leBuscar->text().toUInt();

  if (ui->leBuscar->text() == "\0")
  {
      msj.setText("\n\t\tERROR\nEl campo está vacío\nDebe introducir el "
                  "número de cédula del participante que desea buscar\n");
      msj.exec();
  }
  else if(id == 0)
  {
    ui->leBuscar->clear();
    msj.setText("\nLa información que proporcionó como cédula de identidad"
                  " es errónea\n");
    msj.exec();

  }
  else
  {
    for(auto it=this->partTree->begin(); it.has_curr(); it.next())
    {
      unsigned int partId = it.get_curr().getId();
      string evName = it.get_curr().getEventName();

      if(id == partId && this->event.getEventName() == evName)
      {
        participant = it.get_curr();
        it.reset_last();
      }
    }

    if(participant.getName() == "")
    {
      ui->leBuscar->clear();
      msj.setText("\n\t\tERROR\nLa cédula que ingresó no pertenece a ningún "
                  "participante inscrito");
      msj.exec();
    }
    else
    {
      this->close();
      SearchPartWindow *window = new SearchPartWindow(this->eventTree,
                                                 this->nmEvTree, this->partTree,
                                                 this->evPartTree, this->event,
                                                 participant, this);
      window->setModal(false);
      window->show();
    }
  }
}

void ViewEventWindow::on_pbVerPer_clicked()
{
  QMessageBox msj;
  string evName;

  for(auto it=this->partTree->begin(); it.has_curr(); it.next())
    if(it.get_curr().getEventName() == this->event.getEventName())
    {
      evName = it.get_curr().getEventName();
      it.reset_last();

    }

  if(evName == this->event.getEventName())
  {
    this->close();
    PeopleRegWindow *window = new PeopleRegWindow(this->eventTree,
                                                  this->nmEvTree,this->partTree,
                                                  this->evPartTree, this->event,
                                                  this);
    window->setModal(false);
    window->show();
  }
  else
  {
    msj.setText("\nNo hay participantes inscritos\t\n");
    msj.exec();
  }
}

void ViewEventWindow::on_pbVer_clicked()
{
  QMessageBox msj;
  Date dateBeg, dateFin;
  string evName;

  dateBeg.fromString(ui->deDateBeg->text().toStdString());
  dateFin.fromString(ui->deDateFin->text().toStdString());

  for(auto it=this->partTree->begin(); it.has_curr(); it.next())
    if(it.get_curr().getEventName() == this->event.getEventName())
    {
      evName = it.get_curr().getEventName();
      it.reset_last();

    }

  if(evName == this->event.getEventName())
  {
    if(dateBeg <= dateFin)
    {
      this->close();
      ByDateWindow *window = new ByDateWindow(this->eventTree, this->nmEvTree,
                                              this->partTree, this->evPartTree,
                                            this->event, dateBeg, dateFin,this);
      window->setModal(false);
      window->show();
    }
    else
    {
      msj.setText("\nSeleccione un rango de fechas válido\t\n");
      msj.exec();
    }
  }
  else
  {
    msj.setText("\nNo hay participantes inscritos\t\n");
    msj.exec();
  }
}
