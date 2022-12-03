#include "Dictionary.h"
#include "stdafx.h"
using namespace std;
using namespace Dictionary;

int main() {
    setlocale(LC_ALL, "Rus");

    try {
    #if (defined(TEST_CREATE_01)+ defined(TEST_CREATE_02)+ defined(TEST_ADDENTRY_03)+ defined(TEST_ADDENTRY_04)+ defined(TEST_GETENTRY_05)+ defined(TEST_DELENTRY_06)+ defined(TEST_UPDENTRY_07)+ defined(TEST_UPDENTRY_08)+ defined(TEST_DICTIONARY) > 1)
    #error �������� ���������� ������ ������ �����
    #endif


    #ifdef TEST_CREATE_01
            Instance test = Create("������������������������������", 5);

    #elif defined TEST_CREATE_02
            Instance test = Create("�������������", 50000);

    #elif defined TEST_ADDENTRY_03
            Instance test = Create("����", 1);
            Entry test_e1 = { 1,"������" }, test_e2 = { 2,"������" };
            AddEntry(test, test_e1);
            AddEntry(test, test_e2);

    #elif defined TEST_ADDENTRY_04
            Instance test = Create("����", 5);
            Entry test_e = { 1,"������" };
            AddEntry(test, test_e);
            AddEntry(test, test_e);

    #elif defined TEST_GETENTRY_05
            Instance test = Create("����", 5);
            Entry test_e = { 1,"������" };
            AddEntry(test, test_e);
            GetEntry(test, 2);

    #elif defined TEST_DELENTRY_06
            Instance test = Create("����", 5);
            Entry test_e = { 1,"������" };
            AddEntry(test, test_e);
            DelEntry(test, 2);

    #elif defined TEST_UPDENTRY_07
            Instance test7 = Create("����", 5);
            Entry test_e7 = { 1,"������" }, test_upd_e7 = { 2,"������" };
            AddEntry(test7, test_e7);
            UpdEntry(test7, 3, test_upd_e7);

    #elif defined TEST_UPDENTRY_08
            Instance test = Create("����", 5);
            Entry test_e = { 1,"������" }, test_upd_e = { 1,"������" };
            AddEntry(test, test_e);
            UpdEntry(test, 1, test_upd_e);
    #else
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
#endif;
    }
    catch (char* e)
    {
        cout << e << endl;
    }
    system("pause");
    return 0;
}


