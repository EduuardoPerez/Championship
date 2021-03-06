/**
 * @file participant.cpp
 * @brief Implementación de la clase Participant
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
 */
#include "participant.h"

Participant::Participant()
{
  this->id = 0;
  this->name = "";
  this->lastName = "";
  this->bornDate.assign(0, 0, 0);
  this->age = 0;
  this->category = "";
  this->inscriptionDate.assign(0, 0, 0);
  this->eventName = "";
  this->picture = "";
}

Participant::Participant(const Participant& participant)
{
  this->id = participant.id;
  this->name = participant.name;
  this->lastName = participant.lastName;
  this->bornDate = participant.bornDate;
  this->age = participant.age;
  this->category = participant.category;
  this->inscriptionDate = participant.inscriptionDate;
  this->eventName = participant.eventName;
  this->picture = participant.picture;
}

void Participant::setId(const unsigned int &id)
{
  this->id = id;
  return;
}

void Participant::setName(const string &name)
{
    this->name = name;
    return;
}

void Participant::setLastName(const string &lastName)
{
  this->lastName = lastName;
  return;
}

void Participant::setBornDate(const Date &bornDate)
{
  this->bornDate = bornDate;
  return;
}

void Participant::setAge(const unsigned int &age)
{
  this->age = age;
  return;
}

void Participant::setCategory(const string &category)
{
  this->category = category;
  return;
}

void Participant::setInscriptionDate(const Date &inscriptionDate)
{
  this->inscriptionDate = inscriptionDate;
  return;
}

void Participant::setEventName(const string &eventName)
{
  this->eventName = eventName;
  return;
}

void Participant::setPicture(const string &picture)
{
  this->picture = picture;
  return;
}

void Participant::assign(unsigned int id, string name, string lastName,
                         Date bornDate, unsigned int age, string category,
                         Date inscriptionDate, string eventName, string picture)
{
  this->id = id;
  this->name = name;
  this->lastName = lastName;
  this->bornDate = bornDate;
  this->age = age;
  this->category = category;
  this->inscriptionDate = inscriptionDate;
  this->eventName = eventName;
  this->picture = picture;
}

Participant Participant::operator=(const Participant& participant)
{
  this->id = participant.id;
  this->name = participant.name;
  this->lastName = participant.lastName;
  this->bornDate = participant.bornDate;
  this->age = participant.age;
  this->category = participant.category;
  this->inscriptionDate = participant.inscriptionDate;
  this->eventName = participant.eventName;
  this->picture = participant.picture;
  return(participant);
}

bool Participant::operator==(const Participant& participant)
{
  if(this->id==participant.id)
    return(true);
  return(false);
}

bool operator<(const Participant& p1, const Participant& p2)
{
  if(p1.getBornDate() < p2.getBornDate())
    return(true);
  else if(p1.getBornDate() == p2.getBornDate() && p1.getId() < p2.getId())
    return(true);
  else if(p1.getBornDate() == p2.getBornDate() && p1.getId() == p2.getId() &&
          p1.getEventName() < p2.getEventName())
    return(true);
  return(false);
}

bool operator>(const Participant& p1, const Participant& p2)
{
  if(p1.getBornDate() > p2.getBornDate())
    return(true);
  else if(p1.getBornDate() == p2.getBornDate() && p1.getId() > p2.getId())
    return(true);
  else if(p1.getBornDate() == p2.getBornDate() && p1.getId() == p2.getId() &&
          p1.getEventName() > p2.getEventName())
    return(true);
  return(false);
}

ostream& operator<<(ostream& participant, const Participant& p)
{
  participant << p.getId() << "|";
  participant << p.getName() << "|";
  participant << p.getLastName() << "|";
  participant << p.getBornDate() << "|";
  participant << p.getAge() << "|";
  participant << p.getCategory() << "|";
  participant << p.getInscriptionDate() << "|";
  participant << p.getEventName() << "|";
  participant << p.getPicture() << '\n';
  return(participant);
}

istream& operator>>(istream& participant, Participant &aux)
{
  string stringAux;
  unsigned int id = 0;
  string name;
  string lastName;
  Date bornDate;
  unsigned int age = 0;
  string category;
  Date inscriptionDate;
  string eventName;
  string picture;

  getline(participant, stringAux, '|');
  if(!participant.fail())
    id = (unsigned int)atoi(stringAux.c_str());

  getline(participant, stringAux, '|');
  if(!participant.fail())
    name = stringAux;

  getline(participant, stringAux, '|');
  if(!participant.fail())
    lastName = stringAux;

  getline(participant, stringAux, '|');
  if(!participant.fail())
    bornDate.fromString(stringAux);

  getline(participant, stringAux, '|');
  if(!participant.fail())
    age = (unsigned int)atoi(stringAux.c_str());

  getline(participant, stringAux, '|');
  if(!participant.fail())
    category = stringAux;

  getline(participant, stringAux, '|');
  if(!participant.fail())
    inscriptionDate.fromString(stringAux);

  getline(participant, stringAux, '|');
  if(!participant.fail())
    eventName = stringAux;

  getline(participant, stringAux);
  if(!participant.fail())
    picture = stringAux;

  aux.assign(id,name,lastName,bornDate,age,category,inscriptionDate,eventName,
             picture);
  return(participant);
}

unsigned int calculateAge(Date bornDate, Date currDate)
{
  unsigned int bornDay = bornDate.getDay();
  unsigned int bornMonth = bornDate.getMonth();
  unsigned int bornYear = bornDate.getYear();
  unsigned int currDay = currDate.getDay();
  unsigned int currMonth = currDate.getMonth();
  unsigned int currYear = currDate.getYear();

  if(currDay>=1 && bornDay>=1 && currDay<=31 && bornDay<=31 && currMonth>=1
     && bornMonth>=1 && currMonth<=12 && bornMonth<=12 && currYear>bornYear)
  {
    if(currDay >= bornDay);
    else
    {
      currMonth = currMonth - 1;
      currDay = currDay + 30;
    }

    if(currMonth>=bornMonth);
    else
    {
      currYear = currYear - 1;
      currMonth = currMonth + 12;
    }
    return(currYear - bornYear);
  }
  return(0);
}
