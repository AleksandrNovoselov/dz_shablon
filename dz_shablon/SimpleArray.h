#pragma once
#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;

template <class T> class SimpleArray
{
private:
	vector<T> _list;

public:
	void Add(T value)
	{
		_list.push_back(value);
	}

	T FindMin()
	{
		auto Min = _list.begin();

		for (auto item = _list.begin(); item < _list.end(); item++)
			if (*item < *Min)
				Min = item;

		return *Min;
	}

	T FindMax()
	{
		auto Max = _list.begin();

		for (auto item = _list.begin(); item < _list.end(); item++)
			if (*item > *Max)
				Max = item;

		return *Max;
	}

	void FastSort()
	{
		sort(_list.begin(), _list.end());
	}

	/// <summary>
	/// Binary search
	/// </summary>
	/// <param name="key"></param>
	/// <returns>Return index (-1 not found)</returns>
	int BinarySearch(T key)
	{
		int midd = 0;
		int left = 0;
		int right = _list.size();

		while (true)
		{
			midd = (left + right) / 2;
			if (key < _list[midd])
				right = midd - 1;
			else if (key > _list[midd])
				left = midd + 1;
			else
				return midd;
			if (left > right)
				return -1;
		}
	}

	void ShowArray()
	{
		for (auto item = _list.begin(); item < _list.end(); item++)
			cout << *item << "\t";

		cout << endl;
	}
};