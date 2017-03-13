#include "stdafx.h"
#include "Person.h"
#include <string>
#include <iostream>
using namespace std;

Person::Person()
{

}

Person::Person(string *fullName, string *mGender, int bYear, int bMonth, int bDate)
{
	name = fullName;
	gender = mGender;
	birthYear = bYear;
	birthMonth = bMonth;
	birthYear = bYear;
}

Event* Person::getEvents()
{
	return events;
}

void Person::setInfo(string *fullName, int bYear, int bMonth, int bDate)
{
	name = fullName;
	birthYear = bYear;
	birthMonth = bMonth;
	birthYear = bYear;
}

void Person::onClock()
{
	Event e;
	//for each event in events
	{
		//if(e.get_event_time().getDay() == ) not sure how exactly to implement here yet
	}
}

string Person::getBirthday()
{
	string bDay = to_string(birthMonth) + "/" + to_string(birthDate) + "/" + to_string(birthYear);
	return bDay;
}

string Person::getName()
{
	string n = *Person::name; //TODO: this might return a pointer
	cout << n << endl;
	return n;
}

Person::~Person()
{
}
