// DartSim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{	
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

	}
}

