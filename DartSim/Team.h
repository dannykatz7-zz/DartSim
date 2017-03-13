#pragma once
#include "stdafx.h"
#include "Student.h"
class Team
{
public:
	Team();
	Team(string);
	~Team();
	vector<Student>::iterator addMember(Student);
	vector<Student> getMembers();
private:
	string sport;
	vector<Student> members;
};

