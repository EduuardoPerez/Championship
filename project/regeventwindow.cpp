/**
 * @file regeventwindow.cpp
 * @brief Implementación de la clase RegEventWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
 */
#include "regeventwindow.h"
#include "ui_regeventwindow.h"

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
