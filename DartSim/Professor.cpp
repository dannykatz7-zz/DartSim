#include "stdafx.h"
#include "Professor.h"


Professor::Professor(string fullName, string mGender, int bYear, int bMonth, int bDate, string dptmt)
{
	this->setName(fullName);
	this->setGender(mGender);
	this->setBirthday(bYear, bMonth, bDate);
	department = dptmt;
}


Professor::~Professor()
{
}

ostream& operator<<(std::ostream& os, const Professor prof) {
	os << "Name: Professor " << prof.getName() << endl;
	os << "Department: " << prof.department << endl;
	os << "Gender: " << prof.getGender() << endl;
	os << "Birthdate: " << prof.getBirthday() << endl;
	os << "Events: ";
	for (Event vents : prof.getEvents()) {
		os << vents;
	}
	os << "Current location: " << prof.getLocation() << endl;
	return os;
}

string Professor::get_Department() {
	return department;
}

void Professor::set_Department(string dptmt) {
	department = dptmt;
}