// DartSim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

Person parse_names(string);
Event build(string, vector<Person>&);

int main()
{	
	int catcher;
	vector<Person> people;
	vector<Event> events;
	string istring, estring;
	ifstream mynames, myevents;

	//Open the file with basic person info
	mynames.open("Text.txt");
	if (!mynames.is_open()) {
		cout << "Error finding read-in file: Text.txt, exiting program " << endl;
		exit(0);
	}

	//read the strings into proper forms and store in a vector of people
	while (getline(mynames, istring, ';')) {
		people.insert(people.end(), parse_names(istring));
	}

	for (auto p : people)
		cout << p << endl;

	//Open the file with event info and people enrolled in given events
	myevents.open("Events.txt");
	if (!myevents.is_open()) {
		cout << "Error finding read-in file: Events.txt, exiting program " << endl;
		exit(0);
	}

	//read the strings into proper form and connect people to events
	while (getline(myevents, estring, ';')) {
		events.insert(events.end(), build(estring, people));
		for (auto p : people)
			cout << p << endl;
	}


	
	bool running = true;
	MasterClock clock;
	while (running) { //MAIN PROGRAM
		cout << "The time is " << clock.getHour() << "h" << " on day " <<
			clock.getDay() << endl;
		cout << "Press enter to advance 1 hour" << endl;
		cout << "Enter a number to advance that many hours" << endl;
		cout << "Enter \"next\" to advance a day" << endl;
		string input;
		getline(cin, input); 
		if (input == "")
		{
			clock.tick();
		}
		else if (input == "next" || input == "\"next\"")
		{
			clock.nextDay();
		}
		else if(atoi(input.c_str()) > 0)
		{
			clock.tickHours(atoi(input.c_str()));
		}

	}
	cout << people.front() << endl;
	cin >> catcher;

	return 0;
}

Person parse_names(string istring) {
	const char c = ',';
	string buff{ "" };
	vector<string> v;

	for (auto n : istring)
	{
		if (n != c) {
			buff += n;
		}
		else if (n == c && buff != "") {
			v.push_back(buff); 
			buff = ""; 
		}
	}
	if (buff != "") {
		v.push_back(buff);
	}

	Person indiv(v[0], v[1], stoi(v[2],nullptr, 10), stoi(v[3], nullptr, 10),
		stoi(v[4], nullptr, 10)); 

	return indiv;
}

Event build(string estring, vector<Person>& peeps) {
	int day_num;
	const char c = ',';
	string buff{ "" };
	vector<string> v;
	vector<DateAndTime> dts;

	for (auto n : estring)
	{
		if (n != c) buff += n; else
			if (n == c && buff != "") { v.push_back(buff); buff = ""; }
	}
	if (buff != "") v.push_back(buff);

	day_num = stoi(v[2], nullptr, 10);
	int i = 0;
	while (day_num > 0) {
		DateAndTime dt(stoi(v[3+i],nullptr,10),stoi(v[4+i],nullptr,10));
		dts.insert(dts.end(), dt);
		i += 2;
		--day_num;
	}

	Event vent(v[0], v[1], dts);
	
	for (int i = 0; i < peeps.size(); ++i){
		for (auto l : v) {
			if (l == peeps[i].getName()) {
				peeps[i].addEvent(vent);
			}
		}
	}
	return vent;
}