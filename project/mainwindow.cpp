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
    if(file_isempty(fileIn))
    {
      msj.setText("\n\tAviso\nNo existen eventos registrados\n");
      msj.exec();
    }
    else
    {
      while(!fileIn.eof() && fileIn>>event)
        if(event.getDateBegEv() > currDate)
          eventTree.insert_dup(event);
      fileIn.close();
    }
  }
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pbDeportista_clicked()
{
  sporty_i = new SportyWindow(eventTree, this);
  sporty_i->setModal(false);
  sporty_i->show();
}

void MainWindow::on_pbOrganizador_clicked()
{
  organizing_i = new OrganizingWindow(eventTree, this);
  organizing_i->setModal(false);
  organizing_i->show();
}

bool file_isempty(ifstream& file)
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


*/
