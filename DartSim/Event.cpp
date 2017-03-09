#include "stdafx.h"


Event::Event()
{
	event_name;
	location;
	dt;
}

Event::Event(string name1, Location loc1, DateAndTime dt1)
{
	event_name = name1;
	location = loc1;
	dt = dt1;
}

Event::Event(string ev_name, string loc_name, int day, int hour) 
{
	event_name = ev_name;
	location.set_name(loc_name);
	dt.setDay(day);
	dt.setHour(hour);
}

Event::~Event()
{
}

string Event::get_event_name() {
	return event_name;
}

void Event::set_event_name(string ev_name) {
	event_name = ev_name;
}