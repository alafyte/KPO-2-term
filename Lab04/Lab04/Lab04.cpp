#include <iostream>

using namespace std;

int leapYear(int year);
int numberOfDay(int day, int month, int year);
int dateValidation(int day, int month, int year);
void showMonth(int);

void main()
{
	setlocale(LC_ALL, "Rus");
	while (true)
	{
		int date;
		cout << "Введите дату в формате ДДММГГГГ (например 04112004)" << endl;
		cin >> date;
		int year = date % 10000;
		int day = date / 1000000;
		int month = date / 10000 % 100;

		//Проверка введенных данных на символы
		if (cin.get() != (int)'\n')
		{
			cout << ">>>>>>>>>>> Введены неверные данные, попробуйте ещё раз <<<<<<<<<<<" << endl;
			cin.clear();
			cin.ignore(32767, '\n');
			continue;
		}
		//проверка на корректность ввода
		else if (dateValidation(day, month, year) == 1)
		{
			cout << ">>>>>>>>>>> Введены неверные данные, попробуйте ещё раз <<<<<<<<<<<" << endl;
			cin.clear();
			continue;
		}
		else
		{
			cout << "-----------------------------------------------------\n\n";

			//Високосность года
			if (leapYear(year) == 1)
				cout << year << " - високосный год" << endl;
			else cout << year << " год не является високосным" << endl;

			cout << "\n\n-----------------------------------------------------\n\n";

			//Какой месяц
			showMonth(month);

			cout << "\n\n-----------------------------------------------------\n\n";

			//Какой по счету день в году
			cout << "Это " << numberOfDay(day, month, year) << " день в году" << endl;

			cout << "\n\n-----------------------------------------------------\n\n";

			//Сколько осталось дней до др
			if (numberOfDay(day, month, year) <= numberOfDay(21, 12, year))
			{
				int result1;
				result1 = numberOfDay(21, 12, year) - numberOfDay(day, month, year);
				cout << "До моего дня рождения (21.12 этого года) осталось дней: " << result1 << endl;
			}
			else
			{
				int result1;
				result1 = 365 - numberOfDay(day, month, year) + numberOfDay(21, 12, year + 1) + leapYear(year);
				cout << "До моего ближайшего дня рождения (21.12 следующего года) осталось дней: " << result1 << endl;
			}
			cout << "\n\n-----------------------------------------------------\n\n";

			//В какой день отмечается день программиста
			if (leapYear(year) == 1)
				cout << "День программиста отмечается: 12 сентября " << endl;
			else
				cout << "День программиста отмечается: 13 сентября " << endl;

			break;
		}
	}
}

