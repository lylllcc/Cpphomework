#include "date.h"
#include <iostream>
using namespace std;
void Date::setDate(int year,int month,int day)
{
	this->_year = year;
	this->_month = month;
	this->_day = day;
}
void Date::showDate()
{
	cout<<this->_year<<"-"<<this->_month<<"-"<<this->_day<<endl;
}