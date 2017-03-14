#include "Course.h"
#include "stdafx.h"


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