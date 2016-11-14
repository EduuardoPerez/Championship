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
   * @param parent padre de componentes
   */
  explicit SportyWindow(QWidget *parent = 0);
  ~SportyWindow();

private slots:

  void on_pbVerEvento_clicked();

private:
  Ui::SportyWindow *ui;
};

#endif // SPORTYWINDOW_H
