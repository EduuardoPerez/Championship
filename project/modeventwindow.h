/**
 * @file modeventwindow.h
 * @brief Clase ModEventWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
*/
#ifndef MODEVENTWINDOW_H
#define MODEVENTWINDOW_H

#include <QDialog>
#include <QStyle>
#include <QDesktopWidget>
#include "organizingwindow.h"

namespace Ui {
  class ModEventWindow;
}

/**
 * @brief Clase ModEventWindow
 */
class ModEventWindow : public QDialog
{
  Q_OBJECT

public:
  /**
   * @brief ModEventWindow
   * @param eventTree árbol para administrar los eventos
   * @param event event del cual se cargarán los datos en la ventana
   * @param parent padre de componentes
   */
  explicit ModEventWindow(DynSetTree<Event, Avl_Tree> *eventTree,
                          const Event& event, QWidget *parent = 0);

  /**
   * @brief eventTree árbol para administrar los eventos
   */
  DynSetTree<Event, Avl_Tree> *eventTree;

  /**
   * @brief event event del cual se cargarán los datos en la ventana
   */
  Event event;

  ~ModEventWindow();

private slots:
  void on_pbRegresar_clicked();
  void on_pbGuardar_clicked();
  void on_pbExaminar_clicked();

private:
  Ui::ModEventWindow *ui;
};

#endif // MODEVENTWINDOW_H
