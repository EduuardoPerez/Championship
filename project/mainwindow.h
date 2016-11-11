/**
 * @file mainwindow.h
 * @brief Clase MainWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @author Angely Azuaje (angiibri4@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
*/
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
