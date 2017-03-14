#include "stdafx.h"
#include "Event.h"
#include "Professor.h"
class Course :
	public Event
{
public:
	Course(string, string, vector<DateAndTime>, string);
	~Course();
	string getProf();

private:
	string professor;
	string department;
};
