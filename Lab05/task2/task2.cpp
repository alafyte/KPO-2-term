#include <iostream>
#include <string>
using namespace std;

typedef unsigned int numbers;
typedef string names;

struct Subject
{
    names subjectName;
    numbers courseNumber;
    numbers semester;
    numbers numberOfLectures;
};

bool operator>(Subject Subject1, Subject Subject2)
{
    if (Subject1.numberOfLectures > Subject2.numberOfLectures)
        return true;
    else return false;
};

bool operator<(Subject Subject1, Subject Subject2)
{
    if (Subject1.numberOfLectures < Subject2.numberOfLectures)
        return true;
    else return false;
};

int main()
{
    setlocale(LC_ALL, "Rus");
    Subject Subject1 = { "Математический анализ", 1, 2, 92 };
    Subject Subject2 = { "Основы программной инженерии", 1, 1, 46 };

    if (Subject1 > Subject2)
        cout << "Истина" << endl;
    else cout << "Ложь" << endl;

    if (Subject1 < Subject2)
        cout << "Истина" << endl;
    else cout << "Ложь" << endl;
}


