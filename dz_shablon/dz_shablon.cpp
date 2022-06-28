//Тема: Шаблоны функций
//Задание.
//Реализуйте шаблонные функции для поиска максимума,
//минимума, сортировки массива(любым алгоритмом со -
//    ртировки), двоичного поиска в массиве, замены элемента
//    массива на переданное значение.

#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include "SimpleArray.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	SimpleArray<int> iList;

	iList.Add(10);
	iList.Add(11);

	cout << iList.FindMin() << endl;

	iList.ShowArray();

	return 0;
}