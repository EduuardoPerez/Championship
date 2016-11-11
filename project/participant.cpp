/**
 * @file participant.cpp
 * @brief Implementación de la clase Participant
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @author Angely Azuaje (angiibri4@gmail.com)
 * @version 3.0
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
  this->picture = participant.picture;
}

void Participant::setId(unsigned int id)
{
  this->id = id;
  return;
}

void Participant::setName(string name)
{
    this->name = name;
    return;
}

void Participant::setLastName(string lastName)
{
  this->lastName = lastName;
  return;
}

void Participant::setBornDate(Date bornDate)
{
  this->bornDate = bornDate;
  return;
}

void Participant::setAge(unsigned int age)
{
  this->age = age;
  return;
}

void Participant::setCategory(string category)
{
  this->category = category;
  return;
}

void Participant::setInscriptionDate(Date inscriptionDate)
{
  this->inscriptionDate = inscriptionDate;
  return;
}

void Participant::setPicture(string picture)
{
  this->picture = picture;
  return;
}

void Participant::assign(unsigned int id, string name, string lastName,
                         Date bornDate, unsigned int age, string category,
                         Date inscriptionDate)
{
  this->id = id;
  this->name = name;
  this->lastName = lastName;
  this->bornDate = bornDate;
  this->age = age;
  this->category = category;
  this->inscriptionDate = inscriptionDate;
}

void Participant::assign(unsigned int id, string name, string lastName,
                         Date bornDate, unsigned int age, string category)
{
  this->id = id;
  this->name = name;
  this->lastName = lastName;
  this->bornDate = bornDate;
  this->age = age;
  this->category = category;
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
  this->picture = participant.picture;
  return(participant);
}

int Participant::operator==(const Participant& participant)
{
  if(this->id==participant.id)
    return(1);
  return(0);
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
  participant << p.getPicture() << '\n';
  return(participant);
}

istream& operator>>(istream& participant, Participant &aux)
{
  string cadenaAuxiliar;
  unsigned int id = 0;
  string name;
  string lastName;
  Date bornDate;
  unsigned int age = 0;
  string category;
  Date inscriptionDate;
  string picture;

  getline(participant, cadenaAuxiliar, '|');
  if(!participant.fail())
    id = (unsigned int)atoi(cadenaAuxiliar.c_str());

  getline(participant, cadenaAuxiliar, '|');
  if(!participant.fail())
    name = cadenaAuxiliar;

  getline(participant, cadenaAuxiliar, '|');
  if(!participant.fail())
    lastName = cadenaAuxiliar;

  getline(participant, cadenaAuxiliar, '|');
  if(!participant.fail())
    bornDate.fromString(cadenaAuxiliar);

  getline(participant, cadenaAuxiliar, '|');
  if(!participant.fail())
    age = (unsigned int)atoi(cadenaAuxiliar.c_str());

  getline(participant, cadenaAuxiliar, '|');
  if(!participant.fail())
    category = cadenaAuxiliar;

  getline(participant, cadenaAuxiliar, '|');
  if(!participant.fail())
    inscriptionDate.fromString(cadenaAuxiliar);

  getline(participant, cadenaAuxiliar);
  if(!participant.fail())
    picture = cadenaAuxiliar;

  aux.assign(id, name, lastName, bornDate, age, category, inscriptionDate);
  aux.setPicture(picture);
  return(participant);
}

unsigned int calculateAge(unsigned int bornDay,unsigned int bornMonth,
                          unsigned int bornYear,unsigned int currDay,
                          unsigned int currMonth,unsigned int currYear)
{
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
