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
//#include <QFileDialog>

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
   * @param parent padre de componentes
   */
  explicit RegEventWindow(QWidget *parent = 0);
  ~RegEventWindow();

private slots:
  void on_pbRegresar_clicked();

  void on_pbRegistrar_clicked();

private:
  Ui::RegEventWindow *ui;
};

#endif // REGEVENTWINDOW_H
