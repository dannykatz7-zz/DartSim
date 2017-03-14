#include "stdafx.h"
#include "Course.h"


Course::Course(string nam, string loc, vector<DateAndTime> dts, Professor prof)
{
	professor = prof;
	set_event_name(nam);
	set_event_location(loc);
	set_event_times(dts);
}


Course::~Course()
{
}

Professor Course::getProf() {
	return professor;
}