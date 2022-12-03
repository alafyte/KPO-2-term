#include "stdafx.h"

int sum(int x, int y);
int sub(int x, int y);
int mul(int x, int y);

int main()
{
	setlocale(LC_ALL, "Rus");
	int firstNumber;
	int secondNumber;
	std::cout << "Введите первое число" << std::endl;
	std::cin >> firstNumber;
	std::cout << "Введите второе число" << std::endl;
	std::cin >> secondNumber;


	std::cout << "Сумма этих чисел равна: " << sum(firstNumber, secondNumber) << std::endl;
	std::cout << "Разность этих чисел равна: " << sub(firstNumber, secondNumber) << std::endl;
	std::cout << "Произведение этих чисел равно: " << mul(firstNumber, secondNumber) << std::endl;

	system("pause");
	return 0;
}
