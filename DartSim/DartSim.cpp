// DartSim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	MasterClock clock;
	Person dan;
	//----_Evan take a look here//
	//dan.setInfo("Danny Katz", 1993, 8, 29); //Can't figure this part out!!!
	//Constructor with parameters wasn't working so thought to make a setInfo() method, but can't get that
	//to work either

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

