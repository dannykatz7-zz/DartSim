#pragma once
#include "stdafx.h"

class Event
{
private:
	string event_name;
	string location;
	DateAndTime dt;
	vector<Person> people;

public:
	Event();
	Event(string, string, DateAndTime);
	Event(string, string, int, int);
	~Event();
	string get_event_name() const;
	void set_event_name(string);
	DateAndTime get_event_time() const;
	void set_event_time(DateAndTime);
	int get_day() const;
	int get_hour() const;
	string get_location() const;
	void set_event_location(string);
	friend ostream& operator<<(std::ostream& os, const Event);
};

