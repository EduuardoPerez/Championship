/**
 * @file sportywindow.cpp
 * @brief Implementación de la clase SportyWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
 */
#include "sportywindow.h"
#include "ui_sportywindow.h"

SportyWindow::SportyWindow(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::SportyWindow)
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

  //Ajustar el ancho de las columnas de la tabla
  QHeaderView *header = ui->qtEventList->horizontalHeader();
  header->setSectionResizeMode(QHeaderView::Stretch);
}

SportyWindow::~SportyWindow()
{
  delete ui;
}

void SportyWindow::on_pbSelEvento_clicked()
{

}

/*
TENER EN CUENTA PARA LLENAR LA TABLA

//crear nueva fila
ui->qtEventList->insertRow(ui->qtEventList->rowCount());

//seleccionar una celda de la tabla
QTableWidgetItem *cell = ui->qtEventList->item(0, 0);

QString line = "hola";

if(!cell) //si no hay celda
{
  //crea la celda
  cell = new QTableWidgetItem;
  ui->qtEventList->setItem(0, 0, cell);
}
//se agrega texto a la celda
cell->setText(line);
*/
