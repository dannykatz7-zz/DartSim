#pragma once
#include "stdafx.h"

class Sports_Complex :
	public location
{
private:
	string sport;
	Event event;

public:
	Sports_Complex(string, string, Event);
	~Sports_Complex();
};

