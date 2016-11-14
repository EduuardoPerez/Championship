/**
 * @file regeventwindow.cpp
 * @brief Implementación de la clase RegEventWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
 */
#include "regeventwindow.h"
#include "ui_regeventwindow.h"
#include <QDebug>

RegEventWindow::RegEventWindow(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::RegEventWindow)
{
  ui->setupUi(this);

  this->setGeometry(
        QStyle::alignedRect(
          Qt::LeftToRight,
          Qt::AlignCenter,
          this->size(),
          qApp->desktop()->availableGeometry()
      )
  );
}

RegEventWindow::~RegEventWindow()
{
  delete ui;
}

void RegEventWindow::on_pbRegresar_clicked()
{
  OrganizingWindow *window = new OrganizingWindow(this);
  window->setModal(false);
  window->show();
}

void RegEventWindow::on_pbRegistrar_clicked()
{
  QMessageBox msj;
  string name = ui->leEventName->text().toStdString();
  float inscripValue = ui->leInscripValue->text().toFloat();
  string eventHour = ui->teEventHour->text().toStdString();
  string eventPlace = ui->leEventPlace->text().toStdString();
  string hourBegMate = ui->teHourBegMate->text().toStdString();
  string hourFinMate = ui->teHourFinMate->text().toStdString();
  string matePlace = ui->leMatePlace->text().toStdString();
  string description = ui->leDescription->text().toStdString();
  string picture = ui->lePicture->text().toStdString();
  Date dateBegEv, dateFinEv, dateBegMate, dateFinMate;

  dateBegEv.fromString((ui->deDateBegEv->text()).toStdString());
  dateFinEv.fromString((ui->deDateFinEv->text()).toStdString());
  dateBegMate.fromString((ui->deDateBegMate->text()).toStdString());
  dateFinMate.fromString((ui->deDateFinMate->text()).toStdString());

  if(name=="\0" || eventHour=="\0" || eventPlace=="\0" || hourBegMate=="\0" ||
     hourFinMate=="\0" || matePlace=="\0" || description=="\0")
    msj.setText("\tERROR\nFaltan campos por completar\n");

  else if(inscripValue==0)
    msj.setText("\tERROR\nIngreso un dato erróneo, debe darle un precio a la "
                  "inscripción\n");

  else if(dateBegEv.cmpDate(dateFinEv)>0)
    msj.setText("\t\tERROR\nLa fecha que seleccionó como fecha fin del evento"
                  " es mas reciente que la fecha de inicio del evento\n");


  else if(dateBegMate.cmpDate(dateFinMate)>0)
    msj.setText("\t\tERROR\nLa fecha que seleccionó como fecha fin de la "
                  "entrega de material es mas reciente que la fecha de inicio"
                  " de la entrega del material\n");

  else{
    Event event;
    event.assign(name, dateBegEv, dateFinEv, inscripValue, eventHour,
                 eventPlace, dateBegMate, dateFinMate, hourBegMate, hourFinMate,
                   matePlace, description, picture);

    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("../BD/eventos.txt", ios::in);

    if(!fileIn.good())
      msj.setText("\tERROR\nOcurrió un error interno\nNo se ha podido registrar "
                  "el evento\n");

    else
    {
      Event aux;
      DynSetTree<Event, Avl_Tree> eventTree;
      DynSetTree<string, Avl_Tree> nameTree;

      while(!fileIn.eof() && fileIn>>aux)
      {
        eventTree.insert(aux);
        nameTree.insert(aux.getEventName());
      }
      fileIn.close();

      if(nameTree.exist(event.getEventName()))
      {
        msj.setText("\t\tERROR\nYa se ha registrado un evento con el nombre que "
                    "usted ha ingresado, utilice un nombre diferente\n");
        nameTree.empty();
      }

      else
      {
        nameTree.empty();
        eventTree.insert(event);
        qDebug() << QString::fromStdString(event.getEventName());
        fileOut.open("../BD/eventos.txt", ios::out);

        eventTree.for_each_preorder([] (const auto& item)
        {
          qDebug() << QString::fromStdString(item.getDateBegEv().toString());
        });

        if(!fileOut.good())
          msj.setText("\tERROR\nOcurrió un error interno\nNo se ha podido "
                      "registrar el evento\n");
        else
        {
          eventTree.for_each_preorder([&fileOut] (const auto& item)
          {
            fileOut << item;
            //qDebug() << QString::fromStdString(item.getDateBegEv().toString());
          });
          fileOut.close();
          msj.setText("\nEl evento fue registrado exitosamente\n");
        }
      }

    }

    /*
    cout << "Preorden: \n\t";
    tree.for_each_preorder([] (auto & item)
    {
      cout << item << ',';
    });;
    cout << endl;
    */
    /*
    else{
        Evento aux = evento;

        if(BuscarEvento(archivo_entrada, nombre_evento, aux)){
            archivo_entrada.close();
            return(2);
        }
        else{
            archivo_entrada.close();
            archivo_salida.open(nombre_archivo.c_str(), ios::out | ios::app);

            if(!archivo_salida.good())
                return(1);
            else{
                archivo_salida << evento;
                archivo_salida.close();
                return(3);
            }
        }
    }
  */

    /*
      int auxInt = registrarEvento("eventos.txt", nombre, evento);
        switch(auxInt){
            case 1:

                break;
            case 2:
                informacion.setText("\t\tERROR\nYa se ha registrado un evento con el nombre que usted ha ingresado\n");
                break;
            case 3:
                informacion.setText("\nEl evento fue registrado exitosamente\n");
                break;
        }*/

    /*

  bool BuscarEvento(ifstream& archivo_entrada, string nombre, Evento& evento){

      bool encontro = false;

      while(!archivo_entrada.eof() && !encontro && archivo_entrada>>evento)
          if(nombre == evento.verNombre())
              encontro = true;

      return (encontro);
  }
  */
    }
    msj.exec();
}
