/**
 * @file modeventwindow.cpp
 * @brief Implementación de la clase ModEventWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
 */
#include "modeventwindow.h"
#include "ui_modeventwindow.h"

ModEventWindow::ModEventWindow(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::ModEventWindow)
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

ModEventWindow::~ModEventWindow()
{
  delete ui;
}

void ModEventWindow::on_pbRegresar_clicked()
{
  OrganizingWindow *window = new OrganizingWindow(this);
  window->setModal(false);
  window->show();
}
