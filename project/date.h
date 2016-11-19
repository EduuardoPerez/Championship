/**
 * @file date.h
 * @brief Clase Date
 * @author Eduardo Perez (edujpp1@gmail.com)
 * @version 1.0
 * @date Noviembre, 2016
*/
#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;

/**
 * @brief Clase Date
 */
class Date
{
  unsigned int day;
  unsigned int month;
  unsigned int year;

public:

  Date();

  /**
   * @brief Constructor por copia de la clase Date
   **/
  Date(const Date&);

  ~Date(){}

  /**
   * @brief Observador getDay
   * @return this->day
   */
  inline unsigned int getDay() const
  {
      return(this->day);
  }

  /**
   * @brief Observador getMonth
   * @return this->month
   */
  inline unsigned int getMonth() const
  {
      return(this->month);
  }

  /**
   * @brief Observador getYear
   * @return this->year
   */
  inline unsigned int getYear() const
  {
   return(this->year);
  }

  /**
   * @brief Modificador setDay
   */
  void setDay(unsigned int);

  /**
   * @brief Modificador setMonth
   */
  void setMonth(unsigned int);

  /**
   * @brief Modificador setYear
   */
  void setYear(unsigned int);

  /**
   * @brief Método fromString
   */
  void fromString(string);

  /**
   * @brief Método toString
   * @return tipo Date convertido a string
   */
  string toString();

  /**
   * @brief Método cmpDate
   * @return entero negativo si this es menor que date, 0 si this es igual a
   * date, entero positivo si this es mayor que date.
   */
  int cmpDate(const Date&) const;

  /**
   * @brief Método assign
   */
  void assign(unsigned int, unsigned int, unsigned int);

  /**
   * @brief operator =
   * @return Date date
   */
  Date operator=(const Date&);

  /**
   * @brief operator ==
   * @return 1 si this es igual a date, 0 si no lo es.
   */
  int operator ==(const Date&);
};

/**
 * @brief operator <
 * @return 1 si this es menor a date, 0 si no lo es.
 */
int operator<(const Date&, const Date&);

/**
 * @brief operator >
 * @return 1 si this es mayor a date, 0 si no lo es.
 */
int operator>(const Date&, const Date&);

/**
 * @brief operator <=
 * @return 1 si this es menor o igual a date, 0 si no lo es.
 */
int operator<=(const Date&, const Date&);

/**
 * @brief operator >=
 * @return 1 si this es mayor o igual a date, 0 si no lo es.
 */
int operator>=(const Date&, const Date&);

/**
 * @brief operator <<
 * @return ostream& date
 */
ostream& operator <<(ostream&,const Date&);

/**
 * @brief operator >>
 * @return istream& date
 */
istream& operator >>(istream&, Date&);

/**
 * @brief Método Uint2String
 * @return tipo int convertido a string
 */
string Uint2String(unsigned int);

#endif // DATE_H
