#pragma once
#include "Person.h"
class Student :
	public Person
{
public:
	Student(string *fullName, string *mGender, int bYear, int bMonth, int bDay);
	~Student();
private:
	int classYear;
	Schedule schedule;
	Organization *organizations; //arraylist of affiliations
};

