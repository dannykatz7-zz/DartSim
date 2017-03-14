#include "stdafx.h"
#include "Game.h"


Game::Game(Team t, string opp, string name1, string loc1, vector<DateAndTime> dts)
{
	team = t;
	opponents = opp;
	set_event_name(name1);
	set_event_location(loc1);
	set_event_times(dts);
}


Game::~Game()
{
}

Team Game::get_team() {
	return team;
}

string Game::get_opponents() {
	return opponents;
}