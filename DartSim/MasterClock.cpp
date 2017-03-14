#include "stdafx.h"
#include "MasterClock.h"


MasterClock::MasterClock()
{
	hour = 0;
	day = 0;
}


MasterClock::~MasterClock()
{
}

void MasterClock::tick()
{
	hour++;
	if (hour > 23)
	{
		hour -= 24;
		day++;
	}
}

void MasterClock::tickHours(int hours)
{
	int numDays = hours / 24;
	int numHours = hours % 24;
	day += numDays;
	hour += numHours;
	if (hour > 23)
	{
		hour -= 24;
		day++;
	}
}

void MasterClock::nextDay()
{
	day++;
	if (day == 7) {
		day = 0;
	}
	hour = 9;
}

int MasterClock::getHour()
{
	return hour;
}

int MasterClock::getDay()
{
	return day;
}

DateAndTime MasterClock::getDT() {
	DateAndTime dt(getDay(), getHour());
	return dt;
}