/**
 * @file sportywindow.h
 * @brief Clase SportyWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
*/
#ifndef SPORTYWINDOW_H
#define SPORTYWINDOW_H

#include <QDialog>
#include <QStyle>
#include <QDesktopWidget>
#include <QMessageBox>
#include <ahSort.H>
#include <tpl_dynSetTree.H>
#include "participant.h"
#include "event.h"
#include "vieweventwindow.h"
#include "definition.h"

namespace Ui {
  class SportyWindow;
}

/**
 * @brief Clase SportyWindow
 */
class SportyWindow : public QDialog
{
  Q_OBJECT

public:
  /**
   * @brief SportyWindow
   * @param eventTree árbol para administrar los eventos
   * @param nmEvTree árbol para administrar los nombres de los eventos
   * @param partTree árbol para administrar los participantes
   * @param evPartTree árbol auxiliar para administrar los participantes
   * @param parent padre de componentes
   */
  explicit SportyWindow(DynSetTree<Event, Avl_Tree> &eventTree,
                        DynSetTree<string, Avl_Tree> &nmEvTree,
                        DynSetTree<Participant, Avl_Tree> &partTree,
                        DynSetTree<Pair, Avl_Tree> &evPartTree,
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

  ~SportyWindow();

private slots:
  void on_pbVerEvento_clicked();

private:
  Ui::SportyWindow *ui;
};

#endif // SPORTYWINDOW_H
