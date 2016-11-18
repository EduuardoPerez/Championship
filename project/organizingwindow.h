/**
 * @file organizingwindow.h
 * @brief Clase OrganizingWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
*/
#ifndef ORGANIZINGWINDOW_H
#define ORGANIZINGWINDOW_H

#include <QDialog>
#include <QStyle>
#include <QDesktopWidget>
#include <QMessageBox>
#include "event.h"
#include "regeventwindow.h"
#include "modeventwindow.h"

namespace Ui {
  class OrganizingWindow;
}

/**
 * @brief Clase OrganizingWindow
 */
class OrganizingWindow : public QDialog
{
  Q_OBJECT

public:
  /**
   * @brief OrganizingWindow
   * @param parent padre de componentes
   */
  explicit OrganizingWindow(DynSetTree<Event, Avl_Tree>& eventTree,
                            DynSetTree<string, Avl_Tree>& nameTree,
                            QWidget *parent = 0);
  DynSetTree<string, Avl_Tree>* nameTree;
  DynSetTree<Event, Avl_Tree>* eventTree;
  ~OrganizingWindow();

private slots:
  void on_pbRegistrar_clicked();

  void on_pbModificar_clicked();

  void on_pbEliminar_clicked();

private:
  Ui::OrganizingWindow *ui;
};

#endif // ORGANIZINGWINDOW_H
