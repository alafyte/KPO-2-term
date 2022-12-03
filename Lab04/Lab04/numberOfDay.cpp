#include <iostream>

using namespace std;
int leapYear(int year);

int numberOfDay(int day, int month, int year)
{
	int result = 0;
	int mDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (leapYear(year) == 1)
		mDays[1] = 29;
	
	for (int i = 0; i < month - 1; i++)
		result += mDays[i];

	result += day;
	return result;
}