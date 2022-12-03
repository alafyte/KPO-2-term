#include <iostream>
#include <locale>
#include "C:/University/2_сем/КПО/Lab07/Lab07L/Dictionary.h"

#pragma comment (lib, "C:\\University\\2_сем\\КПО\\Lab07\\Debug\\Lab07L.lib")

using namespace Dictionary;
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    try {
        Instance d1 = Create("Преподаватели", 7);
        Entry e1 = { 1, "Гладкий" }, e2 = { 2, "Веялкин" }, e3 = { 3, "Смелов" }, e4 = { 4, "Урбанович" }, e5 = { 5, "Пацей" }, e6 = { 6, "Жук" }, e7 = { 7, "Белодед" };
        AddEntry(d1, e1);
        AddEntry(d1, e2);
        AddEntry(d1, e3);
        AddEntry(d1, e4);
        AddEntry(d1, e5);
        AddEntry(d1, e6);
        AddEntry(d1, e7);
        Entry ex2 = GetEntry(d1, 4);
        DelEntry(d1, 2);
        Entry newentry1 = { 6, "Гурин" };
        UpdEntry(d1, 3, newentry1);
        Print(d1);

        Instance d2 = Create("Студенты", 7);
        Entry s1 = { 1, "Иванов" }, s2 = { 2, "Петров" }, s3 = { 4, "Сидоров" }, s4 = { 5, "Смирнов" }, s5 = { 6, "Аксенчик" }, s6 = { 7, "Востряков" };
        AddEntry(d2, s1);
        AddEntry(d2, s2);
        AddEntry(d2, s3);
        AddEntry(d2, s4);
        AddEntry(d2, s5);
        AddEntry(d2, s6);
        Entry newentry3 = { 3, "Николаев" };
        UpdEntry(d2, 4, newentry3);
        Print(d2);
        Delete(d1);
        Delete(d2);
    }
    catch (char* e)
    {
        cout << e << endl;
    }
    system("pause");
    return 0;
}


