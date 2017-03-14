#include "stdafx.h"
#include "Event.h"
#include "Professor.h"
class Course :
	public Event
{
public:
	Course(string, string, vector<DateAndTime>, Professor);
	~Course();
	Professor getProf();

private:
	Professor professor;
	string department;
};
