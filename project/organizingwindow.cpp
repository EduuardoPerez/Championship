/**
 * @file organizingwindow.cpp
 * @brief Implementación de la clase OrganizingWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
 */
#include "organizingwindow.h"
#include "ui_organizingwindow.h"

OrganizingWindow::OrganizingWindow(DynSetTree<Event, Avl_Tree>& eventTree,
                                   DynSetTree<string, Avl_Tree>& nmEvTree,
                                   QWidget *parent) :
  QDialog(parent),
  ui(new Ui::OrganizingWindow)
{
  ui->setupUi(this);
  this->eventTree = &eventTree;
  this->nmEvTree = &nmEvTree;

  ui->deCurrDate->hide();
  ui->deCurrDate->setDate(QDate::currentDate());

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

  ui->qtEventList->setColumnCount(2);
  ui->qtEventList->setRowCount(this->eventTree->size());

  int row=0;
  for(auto it=this->eventTree->begin(); it.has_curr(); it.next())
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
}

OrganizingWindow::~OrganizingWindow()
{
  delete ui;
}

void OrganizingWindow::on_pbRegistrar_clicked()
{
  RegEventWindow *regEvent_i;
  regEvent_i = new RegEventWindow(this->eventTree, this->nmEvTree, this);
  regEvent_i->setModal(false);
  regEvent_i->show();
}

void OrganizingWindow::on_pbModificar_clicked()
{
  QMessageBox msj;
  Event event, eventAux;
  Date dateBegEv, currDate;
  string eventName, aux;

  if(not(this->eventTree->is_empty()))
  {
    QItemSelectionModel *selected = ui->qtEventList->selectionModel();
    QModelIndexList selectedCells = selected->selectedIndexes();

    if(selectedCells.size()==0)
    {
      msj.setText("\nDebe seleccionar el evento que desea modificar\t\n");
      msj.exec();
    }
    else if(selectedCells.size()>1)
    {
      msj.setText("\nSolo puede modificar 1 evento a la vez\t\n");
      msj.exec();
    }
    else
    {
      QModelIndex currIndex = ui->qtEventList->currentIndex();

      currDate.fromString((ui->deCurrDate->text()).toStdString());
      eventName=ui->qtEventList->item(currIndex.row(),0)->text().toStdString();
      aux=ui->qtEventList->item(currIndex.row(),1)->text().toStdString();
      dateBegEv.fromString(aux);

      if(currDate == dateBegEv)
      {
        msj.setText("\nNo se pueden modificar eventos que se realizarán el día "
                    "de hoy\t\n");
        msj.exec();
      }
      else
      {
        eventAux.setEventName(eventName);
        eventAux.setDateBegEv(dateBegEv);

        event = *(this->eventTree->search(eventAux));
        this->close();

        ModEventWindow *modEvent_i;
        modEvent_i=new ModEventWindow(this->eventTree, this->nmEvTree,event,
                                      this);
        modEvent_i->setModal(false);
        modEvent_i->show();
      }
    }
  }
}

void OrganizingWindow::on_pbEliminar_clicked()
{
  QMessageBox msj;

  if(not(this->eventTree->is_empty()))
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
      ofstream fileOut;

      fileOut.open("../BD/eventos.txt");
      if(!fileOut.good())
      {
        msj.setText("\tERROR\nha ocurrido un error interno, no podrá eliminar "
                    "el evento\n");
        msj.exec();
      }
      else
      {
        QModelIndex currIndx = ui->qtEventList->currentIndex();
        Date dateBegEv;
        Event eventAux;
        string eventName, aux;

        eventName=ui->qtEventList->item(currIndx.row(),0)->text().toStdString();
        aux=ui->qtEventList->item(currIndx.row(),1)->text().toStdString();
        dateBegEv.fromString(aux);
        eventAux.setEventName(eventName);
        eventAux.setDateBegEv(dateBegEv);

        this->nmEvTree->remove(eventAux.getEventName());
        this->eventTree->remove(eventAux);
        msj.setText("\nEl evento se ha eliminado con exito\t\n");
        msj.exec();

        ui->qtEventList->setColumnCount(2);
        ui->qtEventList->setRowCount(this->eventTree->size());

        int row=0;
        for(auto it=this->eventTree->begin(); it.has_curr(); it.next())
        {
          fileOut << it.get_curr();

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
          auto aux2=QString::fromStdString(it.get_curr().getDateBegEv().
                                           toString());
          cell1->setText(aux1);
          cell2->setText(aux2);
          ++row;
        }
        fileOut.close();
      }
    }
  }
}
