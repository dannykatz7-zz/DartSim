#include "stdafx.h"


Event::Event()
{
	event_name;
	location;
	dt;
}

Event::Event(string name1, string loc1, DateAndTime dt1)
{
	event_name = name1;
	location = loc1;
	dt = dt1;
}

Event::Event(string ev_name, string loc_name, int day, int hour) 
{
	event_name = ev_name;
	location = (loc_name);
	dt.setDay(day);
	dt.setHour(hour);
}

Event::~Event()
{
}

string Event::get_event_name() const{
	return event_name;
}

void Event::set_event_name(string ev_name) {
	event_name = ev_name;
}

DateAndTime Event::get_event_time() const{
	return dt;
}

void Event::set_event_time(DateAndTime d)
{
	dt = d;
}

int Event::get_day() const{
	return dt.getDay();
}

int Event::get_hour() const{
	return dt.getHour();
}

string Event::get_location() const {
	return location;
}

void Event::set_event_location(string loc) {
	location = loc;
}

ostream& operator<<(std::ostream& os, const Event evnt) {
	os << evnt.event_name << ", " << evnt.location << ", " 
		<< evnt.dt.getDay() << " " << evnt.dt.getHour() << ":00" << endl;
	return os;
}