#include <iostream>
#include "Varparm.h"
using namespace Varparm;
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Функция ivarparm: " << endl;
	cout << "1 параметр(0): ";
	cout << ivarparm(0);
	cout << "\n2 параметра(2): ";
	cout << ivarparm(1, 2);
	cout << "\n3 параметра(6): ";
	cout << ivarparm(2, 2, 3);
	cout << "\n7 параметров(720): ";
	cout << ivarparm(6, 1, 2, 3, 4, 5, 6);

	cout << "\n\nФункция svarparm: " << endl;
	cout << "1 параметр(0): ";
	cout << svarparm(0);
	cout << "\n2 параметра(2): ";
	cout << svarparm(1, 2);
	cout << "\n3 параметра(3): ";
	cout << svarparm(2, 2, 3);
	cout << "\n7 параметров(6): ";
	cout << svarparm(6, 1, 2, 3, 4, 5, 6);

	cout << "\n\nФункция fvarparm: " << endl;
	cout << "1 параметр(0): ";
	cout << fvarparm(FLT_MAX);
	cout << "\n2 параметра(1.0): ";
	cout << fvarparm(1.0, FLT_MAX);
	cout << "\n3 параметра(5.0): ";
	cout << fvarparm(2.0, 3.0, FLT_MAX);
	cout << "\n7 параметров(27.0): ";
	cout << fvarparm(2.0, 3.0, 4.0, 5.0, 6.0, 7.0, FLT_MAX);

	cout << "\n\nФункция dvarparm: " << endl;
	cout << "1 параметр(0): ";
	cout << dvarparm(DBL_MAX);
	cout << "\n2 параметра(1.0): ";
	cout << dvarparm(1.0, DBL_MAX);
	cout << "\n3 параметра(5.0): ";
	cout << dvarparm(2.0, 3.0, DBL_MAX);
	cout << "\n7 параметров(27.0): ";
	cout << dvarparm(DBL_MAX - 1, 3.0, 4.0, 5.0, 6.0, 7.0, DBL_MAX);
}
