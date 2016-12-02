/**
 * @file mainwindow.cpp
 * @brief Implementación de la clase MainWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
 */
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  ui->deCurrDate->hide();
  ui->deCurrDate->setDate(QDate::currentDate());
  this->thread = new QThread;

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
  ofstream fileOut;
  Event event;
  Participant participant;
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
          this->nmEvTree.insert(event.getEventName());
        }
    }
    fileIn.close();
  }

  fileOut.open("../BD/eventos.txt");
  if(!fileOut.good())
  {
    msj.setText("\tERROR(2)\nHa ocurrido un error interno\n");
    msj.exec();
  }
  else
  {
    for(auto it=this->eventTree.begin(); it.has_curr(); it.next())
      fileOut << it.get_curr();
    fileOut.close();
  }

  fileIn.open("../BD/participantes.txt");
  if(!fileIn.good())
  {
    msj.setText("\tERROR(3)\nEl programa no funcionará correctamente\n");
    msj.exec();
  }
  else
  {
    if(not(is_emptyFile(fileIn)))
      while(!fileIn.eof() && fileIn>>participant)
        if(this->nmEvTree.exist(participant.getEventName()))
        {
          unsigned int id = participant.getId();
          string evName = participant.getEventName();

          Pair evPart = make_pair(id, evName);

          this->evPartTree.insert(evPart);
          this->partTree.insert(participant);
        }
    fileIn.close();
  }

  fileOut.open("../BD/participantes.txt");
  if(!fileOut.good())
  {
    msj.setText("\tERROR(4)\nHa ocurrido un error interno\n");
    msj.exec();
  }
  else
  {
    for(auto it=this->partTree.begin(); it.has_curr(); it.next())
      fileOut << it.get_curr();
    fileOut.close();
  }

  this->thread->start();
  Backup *backup = new Backup(this->eventTree, this->partTree);
  connect(this->thread, SIGNAL(started()), backup, SLOT(start()));
  backup->moveToThread(this->thread);
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pbDeportista_clicked()
{
  sporty_i = new SportyWindow(this->eventTree, this->nmEvTree, this->partTree,
                              this->evPartTree, this);
  sporty_i->setModal(false);
  sporty_i->show();
}

void MainWindow::on_pbOrganizador_clicked()
{
  organizing_i = new OrganizingWindow(this->eventTree, this->nmEvTree, this);
  organizing_i->setModal(false);
  organizing_i->show();
}

bool is_emptyFile(ifstream& file)
{
  return(file.peek() == std::ifstream::traits_type::eof());
}
