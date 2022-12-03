#include <iostream>

using namespace std;

void showMonth(int month)
{
	string monthList[] = { "Январь", "Февраль", "Март", "Апрель", "Май", "Июнь", "Июль", "Август", "Сентябрь", "Октябрь", "Ноябрь", "Декабрь" };

	cout << "Месяц: " << monthList[month - 1] << endl;
}