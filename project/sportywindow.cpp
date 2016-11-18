/**
 * @file sportywindow.cpp
 * @brief Implementación de la clase SportyWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
 */
#include "sportywindow.h"
#include "ui_sportywindow.h"
#include <QDebug>

SportyWindow::SportyWindow(DynSetTree<Event, Avl_Tree>& eventTree,
                           QWidget *parent) :
  QDialog(parent),
  ui(new Ui::SportyWindow)
{
  ui->setupUi(this);
  this->eventTree = &eventTree;

  this->setGeometry(
        QStyle::alignedRect(
          Qt::LeftToRight,
          Qt::AlignCenter,
          this->size(),
          qApp->desktop()->availableGeometry()
      )
  );

  //Ajustar el ancho de las columnas de la tabla
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

SportyWindow::~SportyWindow()
{
  delete ui;
}

void SportyWindow::on_pbVerEvento_clicked()
{

}
