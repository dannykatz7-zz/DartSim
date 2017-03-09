#pragma once
#include "stdafx.h"

class location
{
private:
	string name;

public:
	string get_name();
	location(string);
	~location();
};

