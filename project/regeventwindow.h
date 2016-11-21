/**
 * @file regeventwindow.h
 * @brief Clase RegEventWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
*/
#ifndef REGEVENTWINDOW_H
#define REGEVENTWINDOW_H

#include <QDialog>
#include <QStyle>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QFileDialog>
#include <ahSort.H>
#include <tpl_dynSetTree.H>
#include "organizingwindow.h"

namespace Ui {
  class RegEventWindow;
}

/**
 * @brief Clase RegEventWindow
 */
class RegEventWindow : public QDialog
{
  Q_OBJECT

public:
  /**
   * @brief RegEventWindow
   * @param eventTree árbol para administrar los eventos
   * @param nmEvTree árbol para administrar los nombres de los eventos
   * @param parent padre de componentes
   */
  explicit RegEventWindow(DynSetTree<Event, Avl_Tree> *eventTree,
                          DynSetTree<string, Avl_Tree> *nmEvTree,
                          QWidget *parent = 0);

  /**
   * @brief eventTree árbol para administrar los eventos
   */
  DynSetTree<Event, Avl_Tree> *eventTree;

  /**
   * @brief nmEvTree árbol para administrar los nombres de los eventos
   */
  DynSetTree<string, Avl_Tree> *nmEvTree;

  ~RegEventWindow();

private slots:
  void on_pbRegresar_clicked();
  void on_pbRegistrar_clicked();
  void on_pbExaminar_clicked();

private:
  Ui::RegEventWindow *ui;
};

#endif // REGEVENTWINDOW_H
