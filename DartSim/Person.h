#pragma once

#include <string>
using namespace std;
class Person
{
public:
	Person(string *fullName, string *mGender, int bYear, int bMonth, int bDate);
	string getName();
	string getBirthday(); //returns formatted Birthday ie 08/29/1993 (my birthday)
	~Person();
private:
	string *name;
	string *gender;
	int birthYear;
	int birthMonth; //NOT zero indexed, i.e. 1 = January
	int birthDate; //also NOT zero indexed
};

