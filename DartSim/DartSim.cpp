// DartSim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

Person parse_names(string);
Event build(string, vector<Person>&);
vector<string> ParseStrings(string);

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
	while (getline(mynames, istring)) {
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
	string day;
	while (running) { //MAIN PROGRAM
		switch (clock.getDay()) {
		case 0: day = "Sunday";
			break;
		case 1: day = "Monday";
			break;
		case 2: day = "Tuesday";
			break;
		case 3: day = "Wednesday";
			break;
		case 4: day = "Thursday";
			break;
		case 5: day = "Friday";
			break;
		case 6: day = "Saturday";
		default:
			day = "undefined";
			break;
		}
		cout << "The time is " << clock.getHour() << ":00" << " on day " <<
			day << endl;
		cout << "Press enter to advance 1 hour" << endl;
		cout << "Enter a number to advance that many hours" << endl;
		cout << "Enter \"next\" to advance a day" << endl;
		string input;
		getline(cin, input); 
		if (input == "")
			clock.tick();
		else if (input == "next" || input == "\"next\"")
			clock.nextDay();
		else if(atoi(input.c_str()) > 0)
			clock.tickHours(atoi(input.c_str()));
		else {}

		for (Person p : people) {
			p.onClock(clock);
			p.toString();
		}
		cout << endl;


	}
	cout << people.front() << endl;
	cin >> catcher;

	return 0;
}

Person parse_names(string istring) {
	vector<string> v;
	Student stud;

	v = ParseStrings(istring);

	if (v[0] == "s") {
		Student stud(v);
		return stud;
	}
	else if (v[0] == "p") {
		Professor prof(v);
		return prof;
	}
	else {
		Person indiv(v);
		return indiv;
	}
}

Event build(string estring, vector<Person>& peeps) {
	int day_num;
	vector<string> v,d;
	vector<DateAndTime> dts;

	v = ParseStrings(estring);

	day_num = stoi(v[3], nullptr, 10);
	int i = 0;
	while (day_num > 0) {
		DateAndTime dt(stoi(v[4+i],nullptr,10),stoi(v[5+i],nullptr,10));
		dts.insert(dts.end(), dt);
		i += 2;
		--day_num;
	}
	
	if (v[0] == "e") {
		Event vent(v[1], v[2], dts);
		for (int i = 0; i < peeps.size(); ++i) {
			for (auto s : v) {
				if (s == peeps[i].getName()) 
					peeps[i].addEvent(vent);
			}
		}
		return vent;
		i += 2;
	}
	else if (v[0] == "c") {
		Course crse(v[1], v[2], dts, v[4 + stoi(v[3], nullptr, 10)*2]);
		for (int i = 0; i < peeps.size(); ++i) {
			for (auto s : v) {
				if (s == peeps[i].getName() )
					peeps[i].addEvent(crse);
			}
		}
		return crse;
	}
	else if (v[0] == "g") {

	}
	else {

	}
}

vector<string> ParseStrings(string istring) {
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

	return v;
}