#include "stdafx.h"
#include "Event.h"
#include "Professor.h"
class Course :
	public Event
{
public:
	Course();
	Course(string, string, vector<DateAndTime>, string);
	~Course();
	Professor getProf();

private:
	Professor professor;
	string department;
};
