// DartSim.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int day = 0;
	int hour = 0;
	bool running = true;

	while (running) {
		cout << "The time is " << hour << "h" << endl;
		cout << "Press enter to advance 1 hour" << endl;
		cout << "Enter a number to advance that many hours" << endl;
		string input;
		getline(cin, input);
		if (input == "")
		{
			hour++;
			cout << "enter pressed" << endl;
		}
		else
		{
			hour += atoi(input.c_str());
			if (hour > 23)
			{
				hour -= 24;
			}
		}

	}
}

