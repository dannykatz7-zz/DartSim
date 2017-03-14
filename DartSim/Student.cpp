#include "stdafx.h"
#include "Student.h"


Student::Student() 
{
	//Empty Student
}
Student::Student(string fullName, string mGender, int bYear, int bMonth, int bDay, int classYr)
{
	this->setName(fullName);
	this->setGender(mGender);
	this->setBirthday(bYear, bMonth, bDay);
	classYear = classYr;
}

Student::Student(vector<string> v) {
	this->setName(v[1]);
	this->setGender(v[2]);
	this->setBirthday(stoi(v[3], nullptr, 10), stoi(v[4], nullptr, 10),
		stoi(v[5], nullptr, 10));
	classYear = stoi(v[6], nullptr, 10);
}

Student::~Student()
{
}

ostream& operator<<(std::ostream& os, const Student stud) {
	os << "Name: " << stud.getName() << endl;
	os << "Class Year: " << stud.classYear << endl;
	os << "Gender: " << stud.getGender() << endl;
	os << "Birthdate: " << stud.getBirthday() << endl;
	os << "Events: ";
	for (Event vents : stud.getEvents()) {
		os << vents;
	}
	os << "Current location: " << stud.getLocation() << endl;
	return os;
}