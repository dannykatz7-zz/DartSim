#pragma once
#include "Person.h"
#include "stdafx.h"
class Student :
	public Person
{
public:
	Student();
	Student(string *fullName, string *mGender, int bYear, int bMonth, int bDay);
	~Student();
private:
	int classYear;
};

