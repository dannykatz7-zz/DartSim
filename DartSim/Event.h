#pragma once
#include "stdafx.h"
#include "Location.h"

class Event
{
private:
	string event_name;
	Location location;
	DateAndTime dt;

public:
	Event();
	Event(string, Location, DateAndTime);
	Event(string, string, int, int);
	~Event();
	string get_event_name();
	void set_event_name(string);
	DateAndTime get_event_time();
};

