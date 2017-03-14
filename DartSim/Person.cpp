#include "stdafx.h"

using namespace std;

Person::Person()
{
	//Create generic details for undefined Person
	name = "John Doe";
	gender = "Unknown";
	birthYear = 0;
	birthMonth = 0;
	birthYear = 0;
}

Person::Person(string fullName, string mGender, int bYear, int bMonth, int bDate)
{
	name = fullName;
	gender = mGender;
	birthYear = bYear;
	birthMonth = bMonth;
	birthYear = bYear;
	string home = "home";
	//location = home.c_str(); //need to set location here
}

vector<Event>::iterator Person::addEvent(Event &evnt) {
	//Make an iterator for the end of the loop because insert takes an iter
	vector<Event>::iterator it = events.end();
	//Insert the event into the end of the vectors
	events.insert(events.end(), evnt);
	evnt.addPerson(name);
	//return the position 
	return it;
}

vector<Event> Person::getEvents()
{
	//Return event vector
	return events;
}

void Person::onClock(MasterClock clock)
{
	//Create an iterator and set to start of vector
	vector<Event>::iterator it;

	//for each event in events
	for (it = events.begin(); it != events.end(); ++it)
	{
		for (DateAndTime dt : it->get_event_times()) {
			if (dt.getDay() == clock.getDay()) {
				if (dt.getHour() == clock.getHour()) {
					location = it->get_location();
				}
			}
		}
	}
}

string Person::getBirthday() const
{
	const string bDay = to_string(birthMonth) + "/" + to_string(birthDate) + "/" + to_string(birthYear);
	return bDay;
}

string Person::getLocation()
{
	return location;
}

string Person::getName()
{
	return name;
}

ostream& operator<<(std::ostream& os, Person pers) {
	os << "Name: " << pers.name << endl;
	os << "Gender: " << pers.gender << endl;
	os << "Birthdate: " << pers.getBirthday() << endl;
	os << "Events: ";
	for (Event vents : pers.events) {
		os << vents;
	}
	os << "Current location: " << pers.location << endl; 
	return os;
}

Person::~Person()
{
}
