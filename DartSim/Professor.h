#pragma once
#include "Person.h"
#include "stdafx.h"
class Professor :
	public Person
{
public:
	Professor();
	~Professor();
private:
	string department;
};

