/**
 @file backup.cpp
 @brief Implementación de la clase Backup
 @author Eduardo Perez (edujpp1@gmail.com)
 @version 1.0
 @date Diciembre, 2016
*/
#include "backup.h"

Backup::Backup(DynSetTree<Event, Avl_Tree> &eventTree,
               DynSetTree<Participant, Avl_Tree> &partTree,
               QObject *parent) :
  QObject(parent)
{
  this->eventTree = &eventTree;
  this->partTree = &partTree;
  timer = new QTimer(this);

  connect(timer, SIGNAL(timeout()), this, SLOT(makeBackup()));
  timer->start(60000);
}

void Backup::makeBackup()
{
  QMessageBox msj;
  ofstream fileOut;

  fileOut.open("../BD/eventos.txt~");
  if(!fileOut.good())
  {
    msj.setText("\tERROR(2.1)\nHa ocurrido un error interno\n");
    msj.exec();
  }
  else
  {
    for(auto it=this->eventTree->begin(); it.has_curr(); it.next())
      fileOut << it.get_curr();
    fileOut.close();
  }

  fileOut.open("../BD/participantes.txt~");
  if(!fileOut.good())
  {
    msj.setText("\tERROR(4.1)\nHa ocurrido un error interno\n");
    msj.exec();
  }
  else
  {
    for(auto it=this->partTree->begin(); it.has_curr(); it.next())
      fileOut << it.get_curr();
    fileOut.close();
  }

  sleep(1);
}
