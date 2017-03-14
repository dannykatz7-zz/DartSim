#pragma once
#include "Person.h"
#include "stdafx.h"
class Student :
	public Person
{
public:
	Student();
	Student(string fullName, string mGender, int bYear, int bMonth, int bDay, int classYr); 
	Student(vector<string>);
	friend ostream& operator<<(std::ostream& os, const Student);
	~Student();
private:
	int classYear;
};

