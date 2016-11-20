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
#include "event.h"
#include "viewevent.h"

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
   * @param parent padre de componentes
   */
  explicit SportyWindow(DynSetTree<Event, Avl_Tree>& eventTree,
                        QWidget *parent = 0);

  /**
   * @brief eventTree árbol para administrar los eventos
   */
  DynSetTree<Event, Avl_Tree>* eventTree;

  ~SportyWindow();

private slots:
  void on_pbVerEvento_clicked();

private:
  Ui::SportyWindow *ui;
};

#endif // SPORTYWINDOW_H
