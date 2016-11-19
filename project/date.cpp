/**
 @file date.cpp
 @brief Implementación de la clase Date
 @author Eduardo Perez (edujpp1@gmail.com)
 @version 1.0
 @date Noviembre, 2016
*/
#include "date.h"

Date::Date()
{
  this->day = 0;
  this->month = 0;
  this->year = 0;
}

Date::Date(const Date& date)
{
  this->day = date.day;
  this->month = date.month;
  this->year = date.year;
}

void Date::setDay(unsigned int day)
{
  this->day = day;
  return;
}

void Date::setMonth(unsigned int month)
{
  this->month = month;
  return;
}

void Date::setYear(unsigned int year)
{
  this->year = year;
  return;
}

void Date::fromString(string date)
{
  string aux;
  unsigned int day;
  unsigned int month;
  unsigned int year;

  aux = date.substr(0, date.find_first_of("/"));
  day = (unsigned int)atoi(aux.c_str());
  aux.clear();

  aux = date.substr(date.find_first_of("/")+1, date.rfind("/"));
  month = (unsigned int)atoi(aux.c_str());
  aux.clear();

  aux = date.substr((date.find_last_of("/"))+1, date.rfind('\n'));
  year = (unsigned int)atoi(aux.c_str());

  this->day = day;
  this->month = month;
  this->year = year;
}

string Date::toString()
{
  string date;
  date = Uint2String(this->day)+'/'+Uint2String(this->month)+'/'+
      Uint2String(this->year);
  return(date);
}

int Date::cmpDate(const Date& date) const
{
  if(this->year != date.year )
    return(this->year - date.year);

  else if(this->month != date.month)
    return(this->month - date.month);

  return(this->day - date.day);
}

void Date::assign(unsigned int day, unsigned int month, unsigned int year)
{
  this->day = day;
  this->month = month;
  this->year = year;
  return;
}

Date Date::operator=(const Date& date)
{
 this->day = date.day;
 this->month = date.month;
 this->year = date.year;
 return(date);
}

int Date::operator==(const Date& date){
  if (this->day==date.day && this->month==date.month && this->year==date.year)
    return(1);
  return(0);
}

int operator<(const Date& date1, const Date& date2)
{
  if(date1.cmpDate(date2)<0)
    return(1);
  return(0);
}

int operator>(const Date& date1, const Date& date2)
{
  if(date1.cmpDate(date2)>0)
    return(1);
  return(0);
}

int operator<=(const Date& date1, const Date& date2)
{
  if(date1.cmpDate(date2)<0 || date1.cmpDate(date2)==0)
    return(1);
  return(0);
}

int operator>=(const Date& date1, const Date& date2)
{
  if(date1.cmpDate(date2)>0 || date1.cmpDate(date2)==0)
    return(1);
  return(0);
}

ostream& operator<<(ostream& date, const Date& p)
{
  date << p.getDay() << "/";
  date << p.getMonth() << "/";
  date << p.getYear();
  return(date);
}

istream& operator>>(istream& date, Date &aux)
{
  string dateAux;
  unsigned int day = 0;
  unsigned int month = 0;
  unsigned int year = 0;

  getline(date, dateAux, '/');
  if(!date.fail())
    day = (unsigned int)atoi(dateAux.c_str());

  getline(date, dateAux, '/');
  if(!date.fail())
    month = (unsigned int)atoi(dateAux.c_str());

  getline(date, dateAux);
  if(!date.fail())
    year = (unsigned int)atoi(dateAux.c_str());

  aux.assign(day, month, year);
  return(date);
}
