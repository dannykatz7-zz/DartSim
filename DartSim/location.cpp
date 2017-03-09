#include "stdafx.h"
#include "Location.h"


Location::Location()
{
	name;
}

Location::Location(string word)
{
	name = word;
}
    

Location::~Location()
{
}

void Location::set_name(string word) {
	name = word;
}

string Location::get_name() {
	return name;
}