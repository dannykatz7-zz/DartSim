// DartSim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

Person parse_names(string);
vector<Event> build(string, vector<Person>&);

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

	//Open the file with event info and people enrolled in given events
	myevents.open("Events.txt");
	if (!myevents.is_open()) {
		cout << "Error finding read-in file: Events.txt, exiting program " << endl;
		exit(0);
	}

	//read the strings into proper form and connect people to events
	while (getline(myevents, estring, ';')) {
		events = build(estring, people);
	}
	
	cout << people.front() << endl;
	cin >> catcher;
	/*
	MasterClock clock;
	Person dan("Danny Katz", "Male", 1993, 8, 29);
	DateAndTime time_engs65;
	time_engs65.setDay(2);
	time_engs65.setHour(4);
	Event engs65("Software Design", "Thayer", time_engs65);
	dan.addEvent(engs65);

	bool running = true;

	while (running) {
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
		{
			clock.tickHours(atoi(input.c_str()));
		}

	}*/
	return 0;
}

Person parse_names(string istring) {
	const char c = ',';
	string buff{ "" };
	vector<string> v;

	for (auto n : istring)
	{
		if (n != c) buff += n; else
			if (n == c && buff != "") { v.push_back(buff); buff = ""; }
	}
	if (buff != "") v.push_back(buff);

	Person indiv(v[0], v[1], stoi(v[2],nullptr, 10), stoi(v[3], nullptr, 10),
		stoi(v[4], nullptr, 10)); 

	return indiv;
}

vector<Event> build(string estring, vector<Person>& peeps) {
	const char c = ',';
	string buff{ "" };
	vector<string> v;

	for (auto n : estring)
	{
		if (n != c) buff += n; else
			if (n == c && buff != "") { v.push_back(buff); buff = ""; }
	}
	if (buff != "") v.push_back(buff);


}