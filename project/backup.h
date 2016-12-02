/**
 * @file backup.h
 * @brief Clase Backup
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Diciembre, 2016
*/
#ifndef BACKUP_H
#define BACKUP_H

#include <QTimer>
#include <QObject>
#include <QMessageBox>
#include <ahSort.H>
#include <tpl_dynSetTree.H>
#include "event.h"
#include "participant.h"

/**
 * @brief Clase Backup
 */
class Backup : public QObject
{
  Q_OBJECT

public:
  /**
   * @brief Backup
   * @param eventTree árbol para administrar los eventos
   * @param partTree árbol para administrar los participantes
   * @param parent padre de componentes
   */
  explicit Backup(DynSetTree<Event, Avl_Tree> &eventTree,
                  DynSetTree<Participant, Avl_Tree> &partTree,
                  QObject *parent = 0);

public slots:
    /**
     * @brief makeBackup slot que autoguarda la información
     */
    void makeBackup();

private:
  QTimer *timer;
  DynSetTree<Event, Avl_Tree> *eventTree;
  DynSetTree<Participant, Avl_Tree> *partTree;
};

#endif // BACKUP_H
