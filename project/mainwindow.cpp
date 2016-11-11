/**
 * @file mainwindow.cpp
 * @brief Implementación de la clase MainWindow
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @author Angely Azuaje (angiibri4@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
 */
#include "mainwindow.h"
#include "ui_mainwindow.h"

/**
 * @brief MainWindow::MainWindow
 * @param parent: padre de componentes
 */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
