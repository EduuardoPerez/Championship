/**
 @file event.cpp
 @brief Implementación de la clase Event
 @author Eduardo Perez (edujpp1@gmail.com)
 @version 1.0
 @date Noviembre, 2016
*/
#include "event.h"

Event::Event()
{
  this->eventName = "";
  this->dateBegEv.assign(0, 0, 0);
  this->dateFinEv.assign(0, 0, 0);
  this->inscripValue = 0;
  this->eventHour = "0:0:0";
  this->eventPlace = "";
  this->dateBegMate.assign(0, 0, 0);
  this->dateFinMate.assign(0, 0, 0);
  this->hourIniMate = "0:0:0";
  this->hourFinMate = "0:0:0";
  this->matePlace = "";
  this->description = "";
  this->picture = "";
}

Event::Event(const Event& Event)
{
  this->eventName = Event.eventName;
  this->dateBegEv = Event.dateBegEv;
  this->dateFinEv = Event.dateFinEv;
  this->inscripValue = Event.inscripValue;
  this->eventHour = Event.eventHour;
  this->eventPlace = Event.eventPlace;
  this->dateBegMate = Event.dateBegMate;
  this->dateFinMate = Event.dateFinMate;
  this->hourIniMate = Event.hourIniMate;
  this->hourFinMate = Event.hourFinMate;
  this->matePlace = Event.matePlace;
  this->description = Event.description;
  this->picture = Event.picture;
}

void Event::setEventName(string eventName)
{
  this->eventName = eventName;
  return;
}

void Event::setDateBegEv(Date dateBegEv)
{
  this->dateBegEv = dateBegEv;
  return;
}

void Event::setDateFinEv(Date dateFinEv)
{
  this->dateFinEv = dateFinEv;
  return;
}

void Event::setInscripValue(float inscripValue)
{
  this->inscripValue = inscripValue;
  return;
}

void Event::setEventHour(string eventHour)
{
  this->eventHour = eventHour;
  return;
}

void Event::setEventPlace(string eventPlace)
{
  this->eventPlace = eventPlace;
  return;
}

void Event::setDateBegMate(Date dateBegMate)
{
  this->dateBegMate = dateBegMate;
  return;
}

void Event::setDateFinMate(Date dateFinMate)
{
  this->dateFinMate = dateFinMate;
  return;
}

void Event::setHourIniMate(string hourIniMate)
{
  this->hourIniMate = hourIniMate;
  return;
}

void Event::setHourFinMate(string hourFinMate)
{
  this->hourFinMate = hourFinMate;
  return;
}

void Event::setMatePlace(string matePlace)
{
  this->matePlace = matePlace;
  return;
}

void Event::setDescription(string description)
{
  this->description = description;
  return;
}

void Event::setPicture(string picture)
{
  this->picture = picture;
  return;
}

void Event::assign(string eventName, Date dateBegEv, Date dateFinEv,
                   float inscripValue, string eventHour, string eventPlace,
                   Date dateBegMate, Date dateFinMate, string hourIniMate,
                   string hourFinMate, string matePlace, string description)
{
  this->eventName = eventName;
  this->dateBegEv = dateBegEv;
  this->dateFinEv = dateFinEv;
  this->inscripValue = inscripValue;
  this->eventHour = eventHour;
  this->eventPlace = eventPlace;
  this->dateBegMate = dateBegMate;
  this->dateFinMate = dateFinMate;
  this->hourIniMate = hourIniMate;
  this->hourFinMate = hourFinMate;
  this->matePlace = matePlace;
  this->description = description;
}

Event Event::operator=(const Event& event)
{
  this->eventName = event.eventName;
  this->dateBegEv = event.dateBegEv;
  this->dateFinEv = event.dateFinEv;
  this->inscripValue = event.inscripValue;
  this->eventHour = event.eventHour;
  this->eventPlace = event.eventPlace;
  this->dateBegMate = event.dateBegMate;
  this->dateFinMate = event.dateFinMate;
  this->hourIniMate = event.hourIniMate;
  this->hourFinMate = event.hourFinMate;
  this->matePlace = event.matePlace;
  this->description = event.description;
  this->picture = event.picture;
  return(event);
}

int Event::operator==(const Event& event)
{
  if(this->eventName==event.eventName)
      return(1);
  return(0);
}

ostream& operator<<(ostream& event, const Event& e)
{
  event << e.getEventName() << "|";
  event << e.getDateBegEv() << "|";
  event << e.getDateFinEv() << "|";
  event << e.getInscripValue() << "|";
  event << e.getEventHour() << "|";
  event << e.getEventPlace() << "|";
  event << e.getDateBegMate() << "|";
  event << e.getDateFinMate() << "|";
  event << e.getHourIniMate() << "|";
  event << e.getHourFinMate() << "|";
  event << e.getMatePlace() << "|";
  event << e.getDescription() << "|";
  event << e.getPicture() << "\n";
  return(event);
}

istream& operator>>(istream& event, Event &aux){

  string cadenaAuxiliar;
  string eventName;
  Date dateBegEv;
  Date dateFinEv;
  float inscripValue = 0;
  string eventHour;
  string eventPlace;
  Date dateBegMate;
  Date dateFinMate;
  string hourIniMate;
  string hourFinMate;
  string matePlace;
  string description;
  string picture;

  getline(event, cadenaAuxiliar, '|');
  if(!event.fail())
    eventName = cadenaAuxiliar;

  getline(event, cadenaAuxiliar, '|');
  if(!event.fail())
    dateBegEv.fromString(cadenaAuxiliar);

  getline(event, cadenaAuxiliar, '|');
  if(!event.fail())
    dateFinEv.fromString(cadenaAuxiliar);

  getline(event, cadenaAuxiliar, '|');
  if(!event.fail())
    inscripValue = (float)atof(cadenaAuxiliar.c_str());

  getline(event, cadenaAuxiliar, '|');
  if(!event.fail())
    eventHour = cadenaAuxiliar;

  getline(event, cadenaAuxiliar, '|');
  if(!event.fail())
    eventPlace = cadenaAuxiliar;

  getline(event, cadenaAuxiliar, '|');
  if(!event.fail())
    dateBegMate.fromString(cadenaAuxiliar);

  getline(event, cadenaAuxiliar, '|');
  if(!event.fail())
    dateFinMate.fromString(cadenaAuxiliar);

  getline(event, cadenaAuxiliar, '|');
  if(!event.fail())
    hourIniMate = cadenaAuxiliar;

  getline(event, cadenaAuxiliar, '|');
  if(!event.fail())
    hourFinMate = cadenaAuxiliar;

  getline(event, cadenaAuxiliar, '|');
  if(!event.fail())
    matePlace = cadenaAuxiliar;

  getline(event, cadenaAuxiliar, '|');
  if(!event.fail())
    description = cadenaAuxiliar;

  getline(event, cadenaAuxiliar);
  if(!event.fail())
    picture = cadenaAuxiliar;

  aux.assign(eventName, dateBegEv, dateFinEv, inscripValue, eventHour,
             eventPlace, dateBegMate, dateFinMate, hourIniMate, hourFinMate,
             matePlace, description);
  aux.setPicture(picture);
  return(event);
}
