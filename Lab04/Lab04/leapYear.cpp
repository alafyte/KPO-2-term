#include <iostream>

using namespace std;

int leapYear(int year)
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return 1;
	else return 0;
}