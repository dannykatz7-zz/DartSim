#pragma once
#include "Event.h"
#include "stdafx.h"
#include "Team.h"
class SportsEvent :
	public Event
{
public:
	SportsEvent();
	SportsEvent(string, Team, string, DateAndTime);
	~SportsEvent();
private:
	Team team;
};

