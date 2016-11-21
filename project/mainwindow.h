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
#include <QTimer>
#include <QThread>
#include "sportywindow.h"
#include "organizingwindow.h"
#include "definition.h"

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

    /**
     * @brief eventTree árbol para administrar los eventos
     */
    DynSetTree<Event, Avl_Tree> eventTree;

    /**
     * @brief nmEvTree árbol para administrar los nombres de los eventos
     */
    DynSetTree<string, Avl_Tree> nmEvTree;

    /**
     * @brief partTree árbol para administrar los participantes
     */
    DynSetTree<Participant, Avl_Tree> partTree;

    /**
     * @brief evPartTree árbol auxiliar para administrar los participantes
     */
    DynSetTree<Pair, Avl_Tree> evPartTree;
    //QThread *thread;

    ~MainWindow();

private slots:
  void on_pbDeportista_clicked();
  void on_pbOrganizador_clicked();
  void on_pbSalir_clicked();
  //void backup();

private:
    Ui::MainWindow *ui;
    SportyWindow *sporty_i;
    OrganizingWindow *organizing_i;
};

/**
 * @brief Método is_emptyFile
 * @return true si file esta vacio, false de lo contrario
 */
bool is_emptyFile(ifstream&);
//void backup(const string&, const DynSetTree<Event, Avl_Tree>& eventTree);

#endif // MAINWINDOW_H
