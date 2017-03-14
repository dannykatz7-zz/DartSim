#pragma once

#include <string>
#include "MasterClock.h"
using namespace std;

class Person
{
public:
	Person(); 
	Person(string fullName, string mGender, int bYear, int bMonth, int bDate);
	string getName();
	string getBirthday() const; //returns formatted Birthday ie 07/12/1995 
	vector<Event>::iterator addEvent(Event&);
	vector<Event> getEvents();
	void onClock(MasterClock clock);
	string getLocation(); 
	friend ostream& operator<<(std::ostream& os, const Person); 
	~Person();

private:
	string name;
	string gender;
	string home;
	int birthYear;
	int birthMonth; //NOT zero indexed, i.e. 1 = January
	int birthDate; //also NOT zero indexed
	vector<Event> events;
	string location; 
};

