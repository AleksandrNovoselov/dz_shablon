#include <iostream>
#include <vector>
#include <ctime> 
#include <algorithm>
using namespace std;

template <class T> vector<T> random(vector<T> &arr)
{
    srand(time(NULL));
    for (auto i = arr.begin(); i < arr.end(); i++)
    {
        *i = 'a'+rand() % 10;
    }
    return arr;
}

template <class T> T findMin(vector<T>& arr)
{
    auto Min = arr.begin();
    for (auto i = arr.begin(); i < arr.end(); i++)
    {
        if (*i < *Min)
        {
            Min = i;
        }
    }
    cout << "Min: " << *Min << endl;
    return *Min;
}

template <class T> T findMax(vector<T>& arr)
{
    auto Max = arr.begin();
    for (auto i = arr.begin(); i < arr.end(); i++)
    {
        if (*i > *Max)
        {
            Max = i;
        }
    }
    cout<<"Max: "<<*Max<<endl;
    return *Max;
}

template <class T> void print(vector<T>& arr)
{
    for (auto i = arr.begin(); i < arr.end(); i++)
    {
        cout << *i<<"\t";
    }
    cout << endl;
}
template <class T> vector<T> fSort(vector<T>& arr)
{
    sort(arr.begin(), arr.end());
    cout << "После сортировки: ";
    print(arr);
    cout << endl;
    return arr;
}

int main()
{
    setlocale(LC_ALL, "ru");

    vector<int> vecI(5);
    vector<float> vecF(5);
    vector<string> vecS(10);

    random<int>(vecI);
    print(vecI);
    findMax(vecI);
    findMin(vecI);
    fSort(vecI);

    random<float>(vecF);
    print(vecF);
    findMax(vecF);
    findMin(vecF);
    fSort(vecF);

    random<string>(vecS);
    print(vecS);
    findMax(vecS);
    findMin(vecS);
    fSort(vecS);
}

