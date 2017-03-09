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


Person::~Person()
{
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


