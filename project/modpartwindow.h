#ifndef MODPARTWINDOW_H
#define MODPARTWINDOW_H

#include <QDialog>
#include <QFileDialog>
#include "vieweventwindow.h"
#include "definition.h"

namespace Ui {
  class ModPartWindow;
}

/**
 * @brief Clase ModPartWindow
 */
class ModPartWindow : public QDialog
{
  Q_OBJECT

public:
  /**
   * @brief ModPartWindow
   * @param eventTree árbol para administrar los eventos
   * @param nmEvTree árbol para administrar los nombres de los eventos
   * @param partTree árbol para administrar los participantes
   * @param evPartTree árbol auxiliar para administrar los participantes
   * @param event event del cual se cargarán los datos en la ventana
   * @param participant participant a modificar
   * @param parent padre de componentes
   */
  explicit ModPartWindow(DynSetTree<Event, Avl_Tree> *eventTree,
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
   * @brief participant participant a modificar
   */
  Participant participant;

  ~ModPartWindow();

private slots:
  void on_pbRegresar_clicked();
  void on_pbExaminar_clicked();
  void on_pbGuardar_clicked();

private:
  Ui::ModPartWindow *ui;
};

#endif // MODPARTWINDOW_H
