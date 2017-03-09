#include "stdafx.h"
#include "Sports_Complex.h"


Sports_Complex::Sports_Complex(string name1, string sport1, Event evnt)
{
	change_name(name1);
	sport = sport1;
	event = evnt;
}


Sports_Complex::~Sports_Complex()
{
}

string Sports_Complex::get_sport() {
	return sport;
}

void Sports_Complex::set_sport(string sport1) {
	sport = sport1;
}
