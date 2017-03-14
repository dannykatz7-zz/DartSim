
#include "Event.h"
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
