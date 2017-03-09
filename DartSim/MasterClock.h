#pragma once
class MasterClock
{
public:
	MasterClock();
	~MasterClock();
	void tick();
	void tickHours(int hours);
	void nextDay(); //resets to 9am the next day
private:
	int hour;
	int day;
};

