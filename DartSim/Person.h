#pragma once

#include <string>
using namespace std;

class Person
{
public:
	Person();
	Person(string *fullName, string *mGender, int bYear, int bMonth, int bDate);
	string getName();
	string getBirthday(); //returns formatted Birthday ie 07/12/1995 (my birthday)
	Event* getEvents();
	void setInfo(string *fullName, int year, int month, int day);
	void onClock();
	~Person();
private:
	string *name;
	string *gender;
	int birthYear;
	int birthMonth; //NOT zero indexed, i.e. 1 = January
	int birthDate; //also NOT zero indexed
	Event *events;
};

