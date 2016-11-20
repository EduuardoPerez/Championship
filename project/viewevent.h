#ifndef VIEWEVENT_H
#define VIEWEVENT_H

#include <QDialog>
#include "sportywindow.h"

namespace Ui {
  class ViewEvent;
}

/**
 * @brief Clase ViewEvent
 */
class ViewEvent : public QDialog
{
  Q_OBJECT

public:
  /**
   * @brief ViewEvent
   * @param eventTree árbol para administrar los eventos
   * @param event event del cual se cargarán los datos en la ventana
   * @param parent padre de componentes
   */
  explicit ViewEvent(DynSetTree<Event, Avl_Tree> *eventTree, const Event& event,
                     QWidget *parent = 0);
  /**
   * @brief eventTree árbol para administrar los eventos
   */
  DynSetTree<Event, Avl_Tree> *eventTree;

  /**
   * @brief event event del cual se cargarán los datos en la ventana
   */
  Event event;

  ~ViewEvent();

private slots:
  void on_pbRegresar_clicked();

private:
  Ui::ViewEvent *ui;
};

#endif // VIEWEVENT_H
