#include "Call.h"

using namespace Call;
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	int a = 5;
	int res_cdevl = cdevl(2, 7, 5); 
	//dec - 14, hex - E
	int res_cstd = cstd(a, 8, 2); 
	//dec - 80, hex - 50
	int res_cfst = cfst(8, 2, 2, 9); 
	//dec - 21, hex - 15

	cout << res_cdevl << endl;
	cout << res_cstd << endl;
	cout << res_cfst << endl;
}