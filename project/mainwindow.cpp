/**
 * @file mainwindow.cpp
 * @brief Implementación de la clase MainWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
 */
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  ui->deCurrDate->hide();
  ui->deCurrDate->setDate(QDate::currentDate());

  //centrar la ventana
  this->setGeometry(
        QStyle::alignedRect(
          Qt::LeftToRight,
          Qt::AlignCenter,
          this->size(),
          qApp->desktop()->availableGeometry()
      )
  );

  QMessageBox msj;
  ifstream fileIn;
  Event event;
  Date currDate;

  currDate.fromString((ui->deCurrDate->text()).toStdString());

  fileIn.open("../BD/eventos.txt");

  if(!fileIn.good())
  {
    msj.setText("\tERROR(1)\nEl programa no funcionará correctamente\n");
    msj.exec();
  }
  else
  {
    if(is_emptyFile(fileIn))
    {
      msj.setText("\n\tAviso\nNo existen eventos registrados\n");
      msj.exec();
    }
    else
    {
      while(!fileIn.eof() && fileIn>>event)
        if(event.getDateBegEv() >= currDate)
        {
          this->eventTree.insert(event);
          this->nameTree.insert(event.getEventName());
        }
      fileIn.close();
    }
  }


  /*
    activeTimer = new QTimer(this);
    activeTimer->setInterval(2*60*1000);
    activeTimer->setSingleShot(true);
    connect(activeTimer, SIGNAL(timeout()), this, SLOT(activateAutoClick()));
    activeTimer->start();
  */
  /*
    this->thread = new QThread(this);
    QTimer* timer = new QTimer(0);
    timer->setInterval(1);
    timer->moveToThread(this->thread);
    connect(timer, SIGNAL(timeout()), this, SLOT(backup()));
    this->thread->start();
  */
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pbDeportista_clicked()
{
  sporty_i = new SportyWindow(this->eventTree, this);
  sporty_i->setModal(false);
  sporty_i->show();
}

void MainWindow::on_pbOrganizador_clicked()
{
  organizing_i = new OrganizingWindow(this->eventTree, this->nameTree, this);
  organizing_i->setModal(false);
  organizing_i->show();
}

void MainWindow::on_pbSalir_clicked()
{
  QMessageBox msj;
  ofstream fileOut;

  fileOut.open("../BD/eventos.txt");
  if(!fileOut.good())
  {
    msj.setText("\tERROR(2)\nLos cambios que realizó no se guardaron\n");
    msj.exec();
  }
  else
  {
    for(auto it=this->eventTree.begin(); it.has_curr(); it.next())
      fileOut << it.get_curr();
    fileOut.close();
  }
}

/*
void MainWindow::backup()
{
    qDebug()<<"haciendo backup desde el thread";
    QMessageBox msj;
    ofstream fileOut;

    fileOut.open("../BD/eventos.txt");
    if(!fileOut.good())
    {
      msj.setText("\tERROR(2)\nEl programa no funcionará correctamente\n");
      msj.exec();
    }
    else
    {
      for(auto it=this->eventTree.begin(); it.has_curr(); it.next())
        fileOut << it.get_curr();
      fileOut.close();
    }
}
*/

bool is_emptyFile(ifstream& file)
{
  return(file.peek() == std::ifstream::traits_type::eof());
}

/*TENER EN CUENTA PARA CUANDO VAYA A HACER EL AUTO-BACKUP

  QMessageBox msj;
  ifstream fileIn;
  ofstream fileOut;

  fileIn.open("../BD/eventos.txt");
  if(!fileIn.good())
  {
    msj.setText("\tERROR(1)\nOcurrió un error interno\nNo se han podido cargar"
                " los eventos disponibles\n");
    msj.exec();
  }

  else
  {
    DynSetTree<Event, Avl_Tree> eventTree;
    Event event;
    Date currDate;
    int row=0;

    currDate.fromString((ui->deCurrDate->text()).toStdString());

    while(!fileIn.eof() && fileIn>>event)
      if(event.getDateBegEv() > currDate)
        eventTree.insert(event);
    fileIn.close();

    fileOut.open("../BD/eventos.txt");
    if(!fileOut.good())
    {
      msj.setText("\tERROR(2)\nOcurrió un error interno");
      msj.exec();
    }
    else
    {
      for(auto it=eventTree.begin(); it.has_curr(); it.next())
        fileOut << it.get_curr();
      fileOut.close();
    }

    //////////////////////////////////////////////////////////////////////////

    ifstream fileIn;
    ofstream fileOut;
    fileIn.open("../BD/eventos.txt");

    if(!fileIn.good())
      msj.setText("\tERROR\nOcurrió un error interno\nNo se ha podido registrar"
                  " el evento\n");

    else
    {
      Event aux;
      DynSetTree<Event, Avl_Tree> eventTree;
      DynSetTree<string, Avl_Tree> nameTree;

      while(!fileIn.eof() && fileIn>>aux)
      {
        eventTree.insert(aux);
        nameTree.insert_dup(aux.getEventName());
      }
      fileIn.close();

      if(nameTree.exist(event.getEventName()))
      {
        nameTree.empty();
        msj.setText("\t\tERROR\nYa se ha registrado un evento con el nombre que"
                    " usted ha ingresado, utilice un nombre diferente\n");
      }

      else
      {
        eventTree.insert_dup(event);
        nameTree.empty();

        fileOut.open("../BD/eventos.txt");

        if(!fileOut.good())
          msj.setText("\tERROR\nOcurrió un error interno\nNo se ha podido "
                      "registrar el evento\n");
        else
        {
          for(auto it=eventTree.begin(); it.has_curr(); it.next())
          {
            fileOut << it.get_curr();
          }
          fileOut.close();
          msj.setText("\nEl evento fue registrado exitosamente\n");
        }
      }
    }
  }
  msj.exec();

*/
