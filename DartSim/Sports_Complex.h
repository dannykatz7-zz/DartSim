#pragma once
#include "stdafx.h"

class Sports_Complex :
	public Location
{
private:
	string sport;
	Event event;

public:
	Sports_Complex(string, string, Event);
	~Sports_Complex();
	string get_sport();
	void set_sport(string);
};

