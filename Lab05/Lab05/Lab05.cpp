#include <iostream>
using namespace std;

typedef unsigned char day;
typedef unsigned char month;
typedef unsigned short year;

struct Date
{
    day dd;
    month mm;
    year yyyy;

};

bool operator>(Date date1, Date date2)
{
    if (date1.yyyy > date2.yyyy)
        return true;
    else if (date1.yyyy == date2.yyyy)
    {
        if (date1.mm > date2.mm)
            return true;
        else if (date1.mm == date2.mm)
        {
            if (date1.dd > date2.dd)
                return true;
            else if (date1.dd == date2.dd)
                return false;
            else return false;
        }
        else return false;
    }
    else return false;
};

bool operator<(Date date1, Date date2)
{
    if (date1.yyyy < date2.yyyy)
        return true;
    else if (date1.yyyy == date2.yyyy)
    {
        if (date1.mm < date2.mm)
            return true;
        else if (date1.mm == date2.mm)
        {
            if (date1.dd < date2.dd)
                return true;
            else if (date1.dd == date2.dd)
                return false;
            else return false;
        }
        else return false;
    }
    else return false;
};
bool operator==(Date date1, Date date2)
{
    if (date1.yyyy == date2.yyyy && date1.mm == date2.mm && date1.dd == date2.dd)
        return true;
    else return false;
};


int main()
{
    setlocale(LC_ALL, "Rus");
    Date date1 = { 7, 1, 1980 };
    Date date2 = { 7, 2, 1993 };
    Date date3 = { 7, 1, 1980 };

    if (date1 < date2)
        cout << "Истина" << endl;
    else cout << "Ложь" << endl;

    if (date1 > date2)
        cout << "Истина" << endl;
    else cout << "Ложь" << endl;

    if (date1 == date2)
        cout << "Истина" << endl;
    else cout << "Ложь" << endl;

    if (date1 == date3)
        cout << "Истина" << endl;
    else cout << "Ложь" << endl;

    return 0;
}