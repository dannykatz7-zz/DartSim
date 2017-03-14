#pragma once
class MasterClock
{
public:
	MasterClock();
	~MasterClock();
	void tick();
	void tickHours(int hours);
	void nextDay(); //resets to 9am the next day
	int getHour();
	int getDay();
	DateAndTime getDT();
private:
	int hour;
	int day;
};

