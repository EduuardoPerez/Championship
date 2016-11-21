/**
 * @file participant.h
 * @brief Clase Participant
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
*/
#ifndef PARTICIPANT_H
#define PARTICIPANT_H

#include <fstream>
#include "date.h"

/**
 * @brief Clase Participant
 */
class Participant
{
  unsigned int id;
  string name;
  string lastName;
  Date bornDate;
  unsigned int age;
  string category;
  Date inscriptionDate;
  string eventName;
  string picture;

public:

  Participant();

  /**
   * @brief Constructor por copia de la clase Participant
   */
  Participant(const Participant&);

  ~Participant(){}

  /**
   * @brief Observador getId
   * @return this->id
   */
  inline unsigned int getId() const
  {
      return(this->id);
  }

  /**
   * @brief Observador getName
   * @return this->name
   */
  inline string getName() const
  {
      return(this->name);
  }

  /**
   * @brief Observador getLastName
   * @return this->lastName
   */
  inline string getLastName() const
  {
      return(this->lastName);
  }

  /**
   * @brief Observador getBornDate
   * @return this->bornDate
   */
  inline Date getBornDate() const
  {
      return(this->bornDate);
  }

  /**
   * @brief Observador getAge
   * @return this->age
   */
  inline unsigned int getAge() const
  {
      return(this->age);
  }

  /**
   * @brief Observador getCategory
   * @return this->category
   */
  inline string getCategory() const
  {
      return(this->category);
  }

  /**
   * @brief Observador getInscriptionDate
   * @return this->inscriptionDate
   */
  inline Date getInscriptionDate() const
  {
      return(this->inscriptionDate);
  }

  /**
   * @brief Observador getEventName
   * @return dirección lógica de this->picture
   */
  inline string getEventName() const
  {
      return(this->eventName);
  }

  /**
   * @brief Observador getPicture
   * @return dirección lógica de this->picture
   */
  inline string getPicture() const
  {
      return(this->picture);
  }

  /**
   * @brief Modificador setId
   */
  void setId(const unsigned int&);

  /**
   * @brief Modificador setName
   */
  void setName(const string&);

  /**
   * @brief Modificador setLastName
   */
  void setLastName(const string&);

  /**
   * @brief Modificador setBornDate
   */
  void setBornDate(const Date&);

  /**
   * @brief Modificador setAge
   */
  void setAge(const unsigned int&);

  /**
   * @brief Modificador setCategory
   */
  void setCategory(const string&);

  /**
   * @brief Modificador setInscriptionDate
   */
  void setInscriptionDate(const Date&);

  /**
   * @brief Modificador setEventName
   */
  void setEventName(const string&);

  /**
   * @brief Modificador setPicture
   */
  void setPicture(const string&);

  /**
   * @brief Método assign
   */
  void assign(unsigned int,string,string,Date,unsigned int,string,Date,string,
              string);

  /**
   * @brief operator =
   * @return Participant participant
   */
  Participant operator=(const Participant&);

  /**
   * @brief operator ==
   * @return true si this es igual a participant, fasle de lo contrario.
   */
  bool operator==(const Participant&);
};

/**
 * @brief operator <
 * @return true si this es menor a event, fasle de lo contrario.
 */
bool operator<(const Participant&, const Participant&);

/**
 * @brief operator >
 * @return true si this es menor a event, fasle de lo contrario.
 */
bool operator>(const Participant&, const Participant&);

/**
 * @brief operator <<
 * @return ostream& participant
 */
ostream& operator<<(ostream&, const Participant&);

/**
 * @brief operator >>
 * @return istream& participant
 */
istream& operator>>(istream&, Participant&);

/**
 * @brief calculateAge
 * @return Años comprendidos entre dos fechas,
 * 0 si se ingresan fechas erróneas.
 */
/**
 * @brief calculateAge
 * @return Años entre bornDate y currDate, 0 si las fechas son erróneas.
 */
unsigned int calculateAge(Date, Date);

#endif // PARTICIPANT_H
