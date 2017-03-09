#pragma once
#include "stdafx.h"
#include <string>
#include "Location.h"
using namespace std;
class Event
{
public:
	Event();
	~Event();
private:
	string name;
	Location location;
};

