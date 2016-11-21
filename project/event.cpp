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
  this->hourBegMate = "0:0:0";
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
  this->hourBegMate = Event.hourBegMate;
  this->hourFinMate = Event.hourFinMate;
  this->matePlace = Event.matePlace;
  this->description = Event.description;
  this->picture = Event.picture;
}

void Event::setEventName(const string &eventName)
{
  this->eventName = eventName;
  return;
}

void Event::setDateBegEv(const Date &dateBegEv)
{
  this->dateBegEv = dateBegEv;
  return;
}

void Event::setDateFinEv(const Date &dateFinEv)
{
  this->dateFinEv = dateFinEv;
  return;
}

void Event::setInscripValue(const float &inscripValue)
{
  this->inscripValue = inscripValue;
  return;
}

void Event::setEventHour(const string &eventHour)
{
  this->eventHour = eventHour;
  return;
}

void Event::setEventPlace(const string &eventPlace)
{
  this->eventPlace = eventPlace;
  return;
}

void Event::setDateBegMate(const Date &dateBegMate)
{
  this->dateBegMate = dateBegMate;
  return;
}

void Event::setDateFinMate(const Date &dateFinMate)
{
  this->dateFinMate = dateFinMate;
  return;
}

void Event::setHourBegMate(const string &hourBegMate)
{
  this->hourBegMate = hourBegMate;
  return;
}

void Event::setHourFinMate(const string &hourFinMate)
{
  this->hourFinMate = hourFinMate;
  return;
}

void Event::setMatePlace(const string &matePlace)
{
  this->matePlace = matePlace;
  return;
}

void Event::setDescription(const string &description)
{
  this->description = description;
  return;
}

void Event::setPicture(const string &picture)
{
  this->picture = picture;
  return;
}

void Event::assign(string eventName, Date dateBegEv, Date dateFinEv,
                   float inscripValue, string eventHour, string eventPlace,
                   Date dateBegMate, Date dateFinMate, string hourBegMate,
                   string hourFinMate, string matePlace, string description,
                   string picture)
{
  this->eventName = eventName;
  this->dateBegEv = dateBegEv;
  this->dateFinEv = dateFinEv;
  this->inscripValue = inscripValue;
  this->eventHour = eventHour;
  this->eventPlace = eventPlace;
  this->dateBegMate = dateBegMate;
  this->dateFinMate = dateFinMate;
  this->hourBegMate = hourBegMate;
  this->hourFinMate = hourFinMate;
  this->matePlace = matePlace;
  this->description = description;
  this->picture = picture;
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
  this->hourBegMate = event.hourBegMate;
  this->hourFinMate = event.hourFinMate;
  this->matePlace = event.matePlace;
  this->description = event.description;
  this->picture = event.picture;
  return(event);
}

bool Event::operator==(const Event& event)
{
  if(this->eventName==event.eventName)
      return(true);
  return(false);
}

bool operator<(const Event& event1, const Event& event2)
{
  if(event1.getDateBegEv() < event2.getDateBegEv())
    return(true);
  else if(event1.getDateBegEv() == event2.getDateBegEv() &&
          event1.getEventName() < event2.getEventName())
    return(true);
  return(false);
}

bool operator>(const Event& event1, const Event& event2)
{
  if(event1.getDateBegEv() > event2.getDateBegEv())
    return(true);
  else if(event1.getDateBegEv() == event2.getDateBegEv() &&
          event1.getEventName() > event2.getEventName())
    return(true);
  return(false);
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
  event << e.getHourBegMate() << "|";
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
  string hourBegMate;
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
    hourBegMate = cadenaAuxiliar;

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
             eventPlace, dateBegMate, dateFinMate, hourBegMate, hourFinMate,
             matePlace, description, picture);
  return(event);
}

string float2String(float num)
{
  stringstream flux;
  flux << num;
  return(flux.str());
}
