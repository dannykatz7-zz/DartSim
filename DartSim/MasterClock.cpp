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
	hour = +numHours;
	if (hour > 23)
	{
		hour -= 24;
		day++;
	}
}

void MasterClock::nextDay()
{
	day++;
	hour = 9;
}