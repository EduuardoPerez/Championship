#include "viewevent.h"
#include "ui_viewevent.h"

ViewEvent::ViewEvent(DynSetTree<Event, Avl_Tree> *eventTree, const Event &event,
                     QWidget *parent) :
  QDialog(parent),
  ui(new Ui::ViewEvent)
{
  ui->setupUi(this);
  this->eventTree = eventTree;
  this->event = event;
  ui->lePicture->setFixedWidth(250);
  ui->lePicture->setFixedHeight(250);

  this->setGeometry(
        QStyle::alignedRect(
          Qt::LeftToRight,
          Qt::AlignCenter,
          this->size(),
          qApp->desktop()->availableGeometry()
      )
  );
}

ViewEvent::~ViewEvent()
{
  delete ui;
}

void ViewEvent::on_pbRegresar_clicked()
{
  SportyWindow *window = new SportyWindow(*this->eventTree, this);
  window->setModal(false);
  window->show();
}
