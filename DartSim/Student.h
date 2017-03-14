#pragma once
#include "Person.h"
#include "stdafx.h"
class Student :
	public Person
{
public:
	Student();
	Student(string fullName, string mGender, int bYear, int bMonth, int bDay, int classYr); 
	friend ostream& operator<<(std::ostream& os, const Student);
	~Student();
	int get_classYear();
	void set_classYear(int);

private:
	int classYear;
};

