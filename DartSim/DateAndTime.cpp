#include "stdafx.h"
#include "DateAndTime.h"


DateAndTime::DateAndTime()
{
}


DateAndTime::~DateAndTime()
{
}

int DateAndTime::getDay()
{
	return day;
}

void DateAndTime::setDay(int day1) {
	day = day1;
}

int DateAndTime::getHour()
{
	return hour;
}

void DateAndTime::setHour(int hour1) {
	hour = hour1;
}