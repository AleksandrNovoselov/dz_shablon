#include <iostream>
#include <vector>
#include <ctime> 
using namespace std;

template <class T> vector<T> random(vector<T> &arr)
{
    srand(time(NULL));
    for (auto i = arr.begin(); i < arr.end(); i++)
    {
        *i = 'a' + rand()%10;
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
int main()
{
    vector<int> vecI(3);
    vector<float> vecF(3);
    vector<string> vecS(10);

    random<int>(vecI);
    print(vecI);

    random<string>(vecS);
    print(vecS);
}

