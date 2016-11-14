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
   * @param parent padre de componentes
   */
  explicit ModEventWindow(QWidget *parent = 0);
  ~ModEventWindow();

private slots:
  void on_pbRegresar_clicked();

private:
  Ui::ModEventWindow *ui;
};

#endif // MODEVENTWINDOW_H
