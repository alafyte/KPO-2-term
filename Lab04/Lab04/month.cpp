#include <iostream>

using namespace std;

void showMonth(int month)
{
	string monthList[] = { "������", "�������", "����", "������", "���", "����", "����", "������", "��������", "�������", "������", "�������" };

	cout << "�����: " << monthList[month - 1] << endl;
}