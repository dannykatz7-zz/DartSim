#pragma once

#include <string>
#include "MasterClock.h"
using namespace std;

class Person
{
public:
	Person(); 
	Person(string fullName, string mGender, int bYear, int bMonth, int bDate);
	Person(vector<string>);
	string getName() const;
	string getGender() const;
	string getBirthday() const; //returns formatted Birthday ie 07/12/1995 
	vector<Event>::iterator addEvent(Event&);
	vector<Event> getEvents() const;
	void onClock(MasterClock clock);
	string getLocation() const; 
	friend ostream& operator<<(std::ostream& os, const Person); 
	void setName(string);
	void setGender(string);
	void setBirthday(int, int, int);
	void toString();
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
	string eventName;
	Event currEvent;
};

