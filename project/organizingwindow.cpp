/**
 * @file organizingwindow.cpp
 * @brief Implementación de la clase OrganizingWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
 */
#include "organizingwindow.h"
#include "ui_organizingwindow.h"
#include <QDebug>

OrganizingWindow::OrganizingWindow(DynSetTree<Event, Avl_Tree>& eventTree, QWidget *parent) :
  QDialog(parent),
  ui(new Ui::OrganizingWindow)
{
  ui->setupUi(this);

  QDate auxDate = QDate::currentDate();
  ui->deCurrDate->setDate(auxDate);
  ui->deCurrDate->hide();

  this->setGeometry(
        QStyle::alignedRect(
          Qt::LeftToRight,
          Qt::AlignCenter,
          this->size(),
          qApp->desktop()->availableGeometry()
      )
  );

  QHeaderView *header = ui->qtEventList->horizontalHeader();
  header->setSectionResizeMode(QHeaderView::Stretch);

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

    ui->qtEventList->setColumnCount(2);
    ui->qtEventList->setRowCount(eventTree.size());

    for(auto it=eventTree.begin(); it.has_curr(); it.next())
    {
      QTableWidgetItem *cell1 = ui->qtEventList->item(row, 0);
      QTableWidgetItem *cell2 = ui->qtEventList->item(row, 1);

      if(!cell1)
      {
        cell1 = new QTableWidgetItem;
        cell1->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
        ui->qtEventList->setItem(row, 0, cell1);
      }
      if(!cell2)
      {
        cell2 = new QTableWidgetItem;
        cell2->setFlags(Qt::ItemIsEnabled);
        ui->qtEventList->setItem(row, 1, cell2);
      }

      auto aux1=QString::fromStdString(it.get_curr().getEventName());
      auto aux2=QString::fromStdString(it.get_curr().getDateBegEv().toString());
      cell1->setText(aux1);
      cell2->setText(aux2);

      ++row;
    }
    eventTree.empty();
  }
}

OrganizingWindow::~OrganizingWindow()
{
  delete ui;
}

void OrganizingWindow::on_pbRegistrar_clicked()
{
  RegEventWindow *regEvent_i;
  regEvent_i = new RegEventWindow(this);
  regEvent_i->setModal(false);
  regEvent_i->show();
}

void OrganizingWindow::on_pbModificar_clicked()
{
  ModEventWindow *modEvent_i;
  modEvent_i = new ModEventWindow(this);
  modEvent_i->setModal(false);
  modEvent_i->show();
}

void OrganizingWindow::on_pbEliminar_clicked()
{
  QMessageBox msj;
  ifstream fileIn;
  ofstream fileOut;
  int row=0;

  fileIn.open("../BD/eventos.txt");

  if(!fileIn.good())
  {
    msj.setText("\tERROR(1)\nOcurrió un error interno\nNo se han podido cargar"
                " los datos de los eventos disponibles\n");
    msj.exec();
  }
  else
  {
    string aux;
    getline(fileIn, aux);

    if(aux=="")
    {
      msj.setText("\tERROR(2)\nNo hay eventos disponibles\n");
      msj.exec();
    }
    else
    {
      QItemSelectionModel *selected = ui->qtEventList->selectionModel();
      QModelIndexList selectedCells = selected->selectedIndexes();

      if(selectedCells.size()==0)
      {
        msj.setText("\nDebe seleccionar el evento que desea eliminar\t\n");
        msj.exec();
      }
      else if(selectedCells.size()>1)
      {
        msj.setText("\nSolo puede eliminar 1 evento a la vez\t\n");
        msj.exec();
      }
      else
      {
        QModelIndex currIndex = ui->qtEventList->currentIndex();
        DynSetTree<Event, Avl_Tree> eventTree;
        Event event;
        string evName;
        evName=ui->qtEventList->item(currIndex.row(),0)->text().toStdString();

        while(!fileIn.eof() && fileIn>>event)
          if(event.getEventName() != evName)
            eventTree.insert(event);
        fileIn.close();

        fileOut.open("../BD/eventos.txt");
        if(!fileOut.good())
        {
          msj.setText("\tERROR(3)\nOcurrió un error interno");
          msj.exec();
        }
        else
        {
          for(auto it=eventTree.begin(); it.has_curr(); it.next())
            fileOut << it.get_curr();
          fileOut.close();

          msj.setText("\nEl evento se ha eliminado con exito\t\n");
          msj.exec();
        }

        ui->qtEventList->setColumnCount(2);
        ui->qtEventList->setRowCount(eventTree.size());

        for(auto it=eventTree.begin(); it.has_curr(); it.next())
        {
          QTableWidgetItem *cell1 = ui->qtEventList->item(row, 0);
          QTableWidgetItem *cell2 = ui->qtEventList->item(row, 1);

          if(!cell1)
          {
            cell1 = new QTableWidgetItem;
            cell1->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
            ui->qtEventList->setItem(row, 0, cell1);
          }
          else if(!cell2)
          {
            cell2 = new QTableWidgetItem;
            cell2->setFlags(Qt::ItemIsEnabled);
            ui->qtEventList->setItem(row, 1, cell2);
          }

          auto aux1=QString::fromStdString(it.get_curr().getEventName());
          auto aux2=QString::fromStdString(
                it.get_curr().getDateBegEv().toString());
          cell1->setText(aux1);
          cell2->setText(aux2);

          ++row;
        }
        eventTree.empty();
      }
    }
  }
}
