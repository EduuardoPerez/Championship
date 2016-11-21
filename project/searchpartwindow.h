#ifndef SEARCHPARTWINDOW_H
#define SEARCHPARTWINDOW_H

#include <QDialog>
#include <QPrinter>
#include "vieweventwindow.h"
#include "definition.h"

namespace Ui {
  class SearchPartWindow;
}

/**
 * @brief Clase SearchPartWindow
 */
class SearchPartWindow : public QDialog
{
  Q_OBJECT

public:
  /**
   * @brief SearchPartWindow
   * @param eventTree árbol para administrar los eventos
   * @param nmEvTree árbol para administrar los nombres de los eventos
   * @param partTree árbol para administrar los participantes
   * @param evPartTree árbol auxiliar para administrar los participantes
   * @param event event del cual se cargarán los datos en la ventana
   * @param participant participant del cual se cargarán los datos en la ventana
   * @param parent padre de componentes
   */
  explicit SearchPartWindow(DynSetTree<Event, Avl_Tree> *eventTree,
                            DynSetTree<string, Avl_Tree> *nmEvTree,
                            DynSetTree<Participant, Avl_Tree> *partTree,
                            DynSetTree<Pair, Avl_Tree> *evPartTree,
                            const Event& event, const Participant &participant,
                            QWidget *parent = 0);

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

  /**
   * @brief participant participant del cual se cargarán los datos en la ventana
   */
  Participant participant;

  ~SearchPartWindow();

private slots:
  void on_pbRegresar_clicked();

  void on_pbDescargar_clicked();

private:
  Ui::SearchPartWindow *ui;
};

#endif // SEARCHPARTWINDOW_H
