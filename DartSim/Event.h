#pragma once
#include "stdafx.h"

class Event
{
private:
	string event_name;
	string location;
	DateAndTime dt;

public:
	Event();
	Event(string, string, DateAndTime);
	Event(string, string, int, int);
	~Event();
	string get_event_name() const;
	void set_event_name(string);
	DateAndTime get_event_time() const;
	int get_day() const;
	int get_hour() const;
	string get_location() const;
	friend ostream& operator<<(std::ostream& os, const Event);
};

