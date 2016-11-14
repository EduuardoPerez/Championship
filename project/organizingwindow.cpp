/**
 * @file organizingwindow.cpp
 * @brief Implementación de la clase OrganizingWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
 */
#include "organizingwindow.h"
#include "ui_organizingwindow.h"

OrganizingWindow::OrganizingWindow(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::OrganizingWindow)
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

  QHeaderView *header = ui->qtEventList->horizontalHeader();
  header->setSectionResizeMode(QHeaderView::Stretch);
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
