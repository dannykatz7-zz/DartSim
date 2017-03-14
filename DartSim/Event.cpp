#include "stdafx.h"


Event::Event()
{
	event_name;
	location;
	date_and_times;
}

Event::Event(string name1, string loc1, vector<DateAndTime> dts)
{
	event_name = name1;
	location = loc1;
	date_and_times = dts;
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

vector<DateAndTime> Event::get_event_times() const{
	return date_and_times;
}

void Event::set_event_times(vector<DateAndTime> d)
{
	date_and_times = d;
}

vector<int> Event::get_days() const{
	vector<int> days;
	for (DateAndTime dt : date_and_times) {
		vector<int>::iterator it = days.end();
		days.insert(it, dt.getDay());
	}
	return days;
}
/*
vector<int> Event::get_hours() const{
	vector<int> times;
	for (DateAndTime dt : date_and_times) {
		vector<int>::iterator it = times.end();
		times.insert(it, dt.getHour());
	}
	return times;
}
*/

string Event::get_location() const {
	return location;
}

void Event::set_event_location(string loc) {
	location = loc;
}

ostream& operator<<(std::ostream& os, const Event evnt) {
	os << endl << evnt.event_name << ", " << evnt.location << endl
		<< "Times:" << endl;
	for (auto dt : evnt.date_and_times) {
		os << "	Day: " << dt.getDay() << " Time: " << dt.getHour() << ":00" << endl;
	}

	return os;
}

vector<string>::iterator Event::addPerson(string pers) {
	//Make an iterator for the end of the loop because insert takes an iter
	vector<string>::iterator it = people.end();
	//Insert the event into the end of the vectors
	people.insert(it, pers);
	//return the position 
	return it;
}

vector<string> Event::getPeople()
{
	//Return event vector
	return people;
}