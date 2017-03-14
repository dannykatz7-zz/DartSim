#include "stdafx.h"
#include "Affiliation.h"


Affiliation::Affiliation()
{
}


Affiliation::~Affiliation()
{
}

string Affiliation::getName()
{
	return name;
}

vector<string> Affiliation::getMembers()
{
	return members;
}

void Affiliation::setName(string n)
{
	name = n;
}

void Affiliation::setMembers(vector<string> mems)
{
	members = mems;
}
