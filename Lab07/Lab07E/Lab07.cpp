#include <iostream>
#include <locale>
#include "C:/University/2_���/���/Lab07/Lab07L/Dictionary.h"

#pragma comment (lib, "C:\\University\\2_���\\���\\Lab07\\Debug\\Lab07L.lib")

using namespace Dictionary;
using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    try {
        Instance d1 = Create("�������������", 7);
        Entry e1 = { 1, "�������" }, e2 = { 2, "�������" }, e3 = { 3, "������" }, e4 = { 4, "���������" }, e5 = { 5, "�����" }, e6 = { 6, "���" }, e7 = { 7, "�������" };
        AddEntry(d1, e1);
        AddEntry(d1, e2);
        AddEntry(d1, e3);
        AddEntry(d1, e4);
        AddEntry(d1, e5);
        AddEntry(d1, e6);
        AddEntry(d1, e7);
        Entry ex2 = GetEntry(d1, 4);
        DelEntry(d1, 2);
        Entry newentry1 = { 6, "�����" };
        UpdEntry(d1, 3, newentry1);
        Print(d1);

        Instance d2 = Create("��������", 7);
        Entry s1 = { 1, "������" }, s2 = { 2, "������" }, s3 = { 4, "�������" }, s4 = { 5, "�������" }, s5 = { 6, "��������" }, s6 = { 7, "���������" };
        AddEntry(d2, s1);
        AddEntry(d2, s2);
        AddEntry(d2, s3);
        AddEntry(d2, s4);
        AddEntry(d2, s5);
        AddEntry(d2, s6);
        Entry newentry3 = { 3, "��������" };
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


