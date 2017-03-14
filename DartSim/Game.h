#pragma once
#include "stdafx.h"
#include "Event.h"
#include "Team.h"
class Game :
	public Event
{
public:
	Game(Team, string, string, string, vector<DateAndTime>);
	~Game();
	Team get_team();
	string get_opponents();
private:
	Team team;
	string opponents;
};

