#ifndef BYDATEWINDOW_H
#define BYDATEWINDOW_H

#include <QDialog>
#include "vieweventwindow.h"

namespace Ui {
  class ByDateWindow;
}

/**
 * @brief Clase ByDateWindow
 */
class ByDateWindow : public QDialog
{
  Q_OBJECT

public:
  /**
   * @brief ByDateWindow
   * @param eventTree árbol para administrar los eventos
   * @param nmEvTree árbol para administrar los nombres de los eventos
   * @param partTree árbol para administrar los participantes
   * @param evPartTree árbol auxiliar para administrar los participantes
   * @param event event del cual se cargarán los datos en la ventana
   * @param dateBeg dateBeg date inicio del rango de fechas
   * @param dateFin dateFin date fin del rango de fechas
   * @param parent padre de componentes
   */
  explicit ByDateWindow(DynSetTree<Event, Avl_Tree> *eventTree,
                        DynSetTree<string, Avl_Tree> *nmEvTree,
                        DynSetTree<Participant, Avl_Tree> *partTree,
                        DynSetTree<Pair, Avl_Tree> *evPartTree,
                        const Event &event, const Date &dateBeg,
                        const Date &dateFin, QWidget *parent = 0);

  /**
   * @brief eventTree árbol para administrar los eventos
   */
  DynSetTree<Event, Avl_Tree> *eventTree;

  /**
   * @brief nmEvTree árbol para administrar los nombres de los eventos
   */
  DynSetTree<string, Avl_Tree> *nmEvTree;

  /**
   * @brief partTree árbol para administrar los participantes
   */
  DynSetTree<Participant, Avl_Tree> *partTree;

  /**
   * @brief evPartTree árbol auxiliar para administrar los participantes
   */
  DynSetTree<Pair, Avl_Tree> *evPartTree;

  /**
   * @brief event event del cual se cargarán los datos en la ventana
   */
  Event event;

  /**
   * @brief dateBeg date inicio del rango de fechas
   */
  Date dateBeg;

  /**
   * @brief dateFin date fin del rango de fechas
   */
  Date dateFin;

  ~ByDateWindow();

private slots:
  void on_pbRegresar_clicked();
  void on_pbDescargar_clicked();

private:
  Ui::ByDateWindow *ui;
};

#endif // BYDATEWINDOW_H
