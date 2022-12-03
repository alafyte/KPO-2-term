#include <iostream>
int leapYear(int year);

int dateValidation(int day, int month, int year)
{
	int monthDays[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (leapYear(year) == 1)
		monthDays[1] = 29;

	//Основной этап проверки
	if (month <= 0 || month > 12)
		return 1;
	else if (day <= 0 || day > monthDays[month - 1])
		return 1;
	else return 0;
}