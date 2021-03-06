/**
 * @file event.h
 * @brief Clase Event
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
*/
#ifndef EVENT_H
#define EVENT_H

#include <fstream>
#include "date.h"

/**
 * @brief Clase Event
 */
class Event
{
  string eventName;
  Date dateBegEv;
  Date dateFinEv;
  float inscripValue;
  string eventHour;
  string eventPlace;
  Date dateBegMate;
  Date dateFinMate;
  string hourBegMate;
  string hourFinMate;
  string matePlace;
  string description;
  string picture;

public:
  Event();
  /**
   * @brief Constructor por copia de la clase Event
   */
  Event(const Event&);
  ~Event(){}

  /**
   * @brief Observador getEventName
   * @return this->eventName
   */
  inline string getEventName() const
  {
    return(this->eventName);
  }

  /**
   * @brief Observador getDateBegEv
   * @return fecha inicio de this
   */
  inline Date getDateBegEv() const
  {
    return(this->dateBegEv);
  }

  /**
   * @brief Observador getDateFinEv
   * @return fecha fin de this
   */
  inline Date getDateFinEv() const
  {
    return(this->dateFinEv);
  }

  /**
   * @brief Observador getInscripValue
   * @return valor incripción de this
   */
  inline float getInscripValue() const
  {
    return(this->inscripValue);
  }

  /**
   * @brief Observador getEventHour
   * @return hora inicio de this
   */
  inline string getEventHour() const
  {
    return(this->eventHour);
  }

  /**
   * @brief Observador getEventPlace
   * @return lugar donde se realizará this
   */
  inline string getEventPlace() const
  {
    return(this->eventPlace);
  }

  /**
   * @brief Observador getDateBegMate
   * @return fecha inicio entrega del material para this
   */
  inline Date getDateBegMate() const
  {
    return(this->dateBegMate);
  }

  /**
   * @brief Observador getDateFinMate
   * @return fecha fin entrega del material para this
   */
  inline Date getDateFinMate() const
  {
    return(this->dateFinMate);
  }

  /**
   * @brief Observador getHourIniMate
   * @return hora inicio entrega del material para this
   */
  inline string getHourBegMate() const
  {
    return(this->hourBegMate);
  }

  /**
   * @brief Observador getHourFinMate
   * @return hora fin entrega del material para this
   */
  inline string getHourFinMate() const
  {
    return(this->hourFinMate);
  }

  /**
   * @brief Observador getMatePlace
   * @return lugar donde se realizará this
   */
  inline string getMatePlace() const
  {
    return(this->matePlace);
  }

  /**
   * @brief Observador getDescription
   * @return descripción de this
   */
  inline string getDescription() const
  {
    return(this->description);
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
   * @brief Modificador setEventName
   */
  void setEventName(const string&);

  /**
   * @brief Modificador setDateBegEv
   */
  void setDateBegEv(const Date&);

  /**
   * @brief Modificador setDateFinEv
   */
  void setDateFinEv(const Date&);

  /**
   * @brief Modificador setInscripValue
   */
  void setInscripValue(const float&);

  /**
   * @brief Modificador setEventHour
   */
  void setEventHour(const string&);

  /**
   * @brief Modificador setEventPlace
   */
  void setEventPlace(const string&);

  /**
   * @brief Modificador setDateBegMate
   */
  void setDateBegMate(const Date&);

  /**
   * @brief Modificador setDateFinMate
   */
  void setDateFinMate(const Date&);

  /**
   * @brief Modificador setHourIniMate
   */
  void setHourBegMate(const string&);

  /**
   * @brief Modificador setHourFinMate
   */
  void setHourFinMate(const string&);

  /**
   * @brief Modificador setMatePlace
   */
  void setMatePlace(const string&);

  /**
   * @brief Modificador setDescription
   */
  void setDescription(const string&);

  /**
   * @brief Modificador setPicture
   */
  void setPicture(const string &);

  /**
   * @brief Método assign
   */
  void assign(string, Date, Date, float, string, string, Date, Date, string,
              string, string, string, string);

  /**
   * @brief operator =
   * @return Event event
   */
  Event operator=(const Event &);

  /**
   * @brief operator ==
   * @return true si this es igual a event, false de lo contrario.
   */
  bool operator==(const Event &);

};

/**
 * @brief operator <
 * @return true si this es menor a event, false de lo contrario.
 */
bool operator<(const Event&, const Event&);

/**
 * @brief operator >
 * @return true si this es mayor a event, false de lo contrario.
 */
bool operator>(const Event&, const Event&);

/**
 * @brief operator <<
 * @return ostream& event
 */
ostream& operator<<(ostream&, const Event&);

/**
 * @brief operator >>
 * @return istream& event
 */
istream& operator>>(istream&, Event&);

/**
 * @brief float2String
 * @return tipo float convertido a string
 */
string float2String(float);

#endif // EVENT_H
