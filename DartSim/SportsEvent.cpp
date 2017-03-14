#include "stdafx.h"
#include "SportsEvent.h"


SportsEvent::SportsEvent()
{
}

SportsEvent::SportsEvent(string eventName, Team teamVec, string loc, DateAndTime dateTime)
{
	set_event_name(eventName);
	set_event_time(dateTime);
	set_event_location(loc);
	team = teamVec;
}


SportsEvent::~SportsEvent()
{
}
