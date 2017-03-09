#pragma once
#include "stdafx.h"

class Location
{
public:
	Location();
	Location(string);
	~Location();
	void set_name(string);
	string get_name();

private:
	string name;
};

