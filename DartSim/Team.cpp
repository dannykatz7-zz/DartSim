#include "stdafx.h"
#include "Team.h"


Team::Team()
{
	sport = "undefined";
	members;
}

Team::Team(string sportName)
{
	sport = sportName;
	members;
}


Team::~Team()
{
}

vector<Student>::iterator Team::addMember(Student student) {
	//Make an iterator for the end of the loop because insert takes an iterator
	vector<Student>::iterator it = members.end();
	//Insert the event into the end of the vector
	members.insert(it, student);
	//return the position 
	return it;
}

vector<Student> Team::getMembers()
{
	//Return event vector
	return members;
}