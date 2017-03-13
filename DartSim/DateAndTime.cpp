#include "stdafx.h"
#include "DateAndTime.h"


DateAndTime::DateAndTime()
{
}


DateAndTime::~DateAndTime()
{
}

int DateAndTime::getDay() const
{
	return day;
}

void DateAndTime::setDay(int day1) {
	day = day1;
}

int DateAndTime::getHour() const
{
	return hour;
}

void DateAndTime::setHour(int hour1) {
	hour = hour1;
}