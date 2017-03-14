#include "Course.h"
#include "stdafx.h"

Course::Course() {
	professor = "Unknown";
	set_event_location("Unknown");
	set_event_name("Unkown");
	DateAndTime dt(0, 0);
	vector<DateAndTime> dts;
	dts.insert(dts.end(), dt);
	set_event_times(dts);
}

Course::Course(string nam, string loc, vector<DateAndTime> dts, string prof)
{
	professor = prof;
	set_event_name(nam);
	set_event_location(loc);
	set_event_times(dts);
}


Course::~Course()
{
}

string Course::getProf() {
	return professor;
}