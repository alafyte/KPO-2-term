#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int target1 = 3;
    int num_items1 = count(v.begin(), v.end(), target1);
    cout << "Число: " << target1 << " количество: " << num_items1 << endl;
    int num_items3 = count_if(v.begin(), v.end(), [](int i) {return i % 3 == 0; });
    cout << "Количество элементов, кратных 3: " << num_items3 << endl << endl;

    cout << "Лямбда, захват переменных" << endl;

    for (auto i : v) [i]()
    {
        if (i % 3 == 0)
            cout << i << " ";
    }();

    cout << "\nЛямбда с параметрами" << endl;
    for (auto i : v) [](auto i)
    {
        if (i % 3 == 0)
            cout << i << " ";
    }(i);

    cout << "\nЛямбда без параметров" << endl;
    for (auto i : v) [i]()
    {
        if (i % 3 == 0)
            cout << i << " ";
    }();

    cout << "\nДополнительно: " << endl;
    auto result = [](string str1, string str2)
    {
        return str1 + str2;
    }("Hello, ", "World");
    cout << result << endl;

    return 0;
}

