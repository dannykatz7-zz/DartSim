#include "stdafx.h"
#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

Person::Person()
{

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

vector<Event>::iterator Person::addEvent(Event evnt) {
	//Make an iterator for the end of the loop because insert takes an iterator
	vector<Event>::iterator it = events.end();
	//Insert the event into the end of the vector
	events.insert(it, evnt);
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
		//if current day == event day
		//if current hour == event hour
		//go to event
		if ((*it).get_day == clock.getDay()) {
			if ((*it).get_hour() == clock.getHour()) {
				/*TODO: Whatever the hell you wanted to do here 
				to access the member the iterator is referring to see above (*it) */
			}
		}
	}
}

string Person::getBirthday()
{
	string bDay = to_string(birthMonth) + "/" + to_string(birthDate) + "/" + to_string(birthYear);
	return bDay;
}

string Person::getName()
{
	/*cout << name << endl;*/   // Not a fan of printing within this method, overload the << operator
	return name;
}

Person::~Person()
{
}
