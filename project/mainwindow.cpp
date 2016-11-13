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

  //centrar la ventana
  this->setGeometry(
        QStyle::alignedRect(
          Qt::LeftToRight,
          Qt::AlignCenter,
          this->size(),
          qApp->desktop()->availableGeometry()
      )
  );
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::on_pbDeportista_clicked()
{
  sporty_i = new SportyWindow(this);
  sporty_i->setModal(false);
  sporty_i->show();
}

void MainWindow::on_pbOrganizador_clicked()
{
  organizing_i = new OrganizingWindow(this);
  organizing_i->setModal(false);
  organizing_i->show();
}
