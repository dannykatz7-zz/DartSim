#pragma once
#include <vector>

class Event
{
private:
	string event_name;
	string location;
	vector<DateAndTime> date_and_times;
	vector<string> people;

public:
	Event();
	Event(string, string, vector<DateAndTime>);
	~Event();
	string get_event_name() const;
	void set_event_name(string);
	vector<DateAndTime> get_event_times() const;
	void set_event_times(vector<DateAndTime>);
	vector<int> get_days() const;
	//vector<int> get_hours() const;
	string get_location() const;
	void set_event_location(string);
	friend ostream& operator<<(std::ostream& os, const Event);
	vector<string>::iterator addPerson(string);
	vector<string> getPeople();
};

