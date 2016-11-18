/**
 * @file mainwindow.h
 * @brief Clase MainWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QStyle>
#include <QDesktopWidget>
#include "sportywindow.h"
#include "organizingwindow.h"

namespace Ui {
class MainWindow;
}

/**
 * @brief Clase MainWindow
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief MainWindow
     * @param parent padre de componentes
     */
    explicit MainWindow(QWidget *parent = 0);
    DynSetTree<Event, Avl_Tree> eventTree;
    ~MainWindow();

private slots:
  void on_pbDeportista_clicked();

  void on_pbOrganizador_clicked();

private:
    Ui::MainWindow *ui;
    SportyWindow *sporty_i;
    OrganizingWindow *organizing_i;
};

bool file_isempty(ifstream&);

#endif // MAINWINDOW_H
