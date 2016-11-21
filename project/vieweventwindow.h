#ifndef VIEWEVENTWINDOW_H
#define VIEWEVENTWINDOW_H

#include <QDialog>
#include "sportywindow.h"
#include "regpartwindow.h"
#include "modpartwindow.h"
#include "searchpartwindow.h"
#include "peopleregwindow.h"
#include "bydatewindow.h"
#include "definition.h"

namespace Ui {
  class ViewEventWindow;
}

/**
 * @brief Clase ViewEventWindow
 */
class ViewEventWindow : public QDialog
{
  Q_OBJECT

public:
  /**
   * @brief ViewEventWindow
   * @param eventTree árbol para administrar los eventos
   * @param nmEvTree árbol para administrar los nombres de los eventos
   * @param partTree árbol para administrar los participantes
   * @param evPartTree árbol auxiliar para administrar los participantes
   * @param event event del cual se cargarán los datos en la ventana
   * @param parent padre de componentes
   */
  explicit ViewEventWindow(DynSetTree<Event, Avl_Tree> *eventTree,
                           DynSetTree<string, Avl_Tree> *nmEvTree,
                           DynSetTree<Participant, Avl_Tree> *partTree,
                           DynSetTree<Pair, Avl_Tree> *evPartTree,
                           const Event& event, QWidget *parent = 0);

  /**
   * @brief eventTree árbol para administrar los eventos
   */
  DynSetTree<Event, Avl_Tree> *eventTree;

  /**
   * @brief nmEvTree árbol para administrar los nombres de los eventos
   */
  DynSetTree<string, Avl_Tree> *nmEvTree;

  /**
   * @brief partTree árbol para administrar los participantes
   */
  DynSetTree<Participant, Avl_Tree> *partTree;

  /**
   * @brief evPartTree árbol auxiliar para administrar los participantes
   */
  DynSetTree<Pair, Avl_Tree> *evPartTree;

  /**
   * @brief event event del cual se cargarán los datos en la ventana
   */
  Event event;

  ~ViewEventWindow();

private slots:
  void on_pbRegresar_clicked();
  void on_pbInscribirse_clicked();
  void on_pbModificar_clicked();
  void on_pbBuscar_clicked();
  void on_pbVerPer_clicked();

  void on_pbVer_clicked();

private:
  Ui::ViewEventWindow *ui;
};

#endif // VIEWEVENTWINDOW_H
