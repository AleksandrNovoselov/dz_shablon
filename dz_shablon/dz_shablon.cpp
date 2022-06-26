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
        *i = rand() % 10;
    }
    return arr;
}
template <> vector<string> random<string>(vector<string>& arr)
{
    srand(time(NULL));
    for (auto i = arr.begin(); i < arr.end(); i++)
    {
        *i = 'a' + rand() % 10;
    }
    return arr;
}
template <> vector<float> random<float>(vector<float>& arr)
{
    srand(time(NULL));
    for (auto i = arr.begin(); i < arr.end(); i++)
    {
        *i = rand() % 10*1.1;
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

template <class T> T bSearch(vector<T>& arr,T key)
{
    int midd = 0;
    int left = 0;
    int right = arr.size();
    while (1)
    {
        midd = (left + right) / 2;
        if (key < arr[midd])
            right = midd - 1;
        else if (key > arr[midd])
            left = midd + 1;
        else
            return midd;
        if (left > right)
            return -1;
    }
}

void findPrint(int index) {
    if (index >= 0)
        cout << "Указанный символ в ячейке: " << index << "\n\n";
    else
        cout << "Символ не найден\n\n";
}

int main()
{
    setlocale(LC_ALL, "ru");

    vector<int> vecI(5);
    vector<float> vecF(5);
    vector<string> vecS(4);
    
    random<int>(vecI);
    cout << "Последовательность изначальная: ";
    print(vecI);
    findMax(vecI);
    findMin(vecI);
    fSort(vecI);
    cout << "Введите символ для поиска: ";
    int key;
    cin >> key;
    int index;
    index = bSearch(vecI, key);
    findPrint(index);


    random<float>(vecF);
    cout << "Последовательность изначальная: ";
    print(vecF);
    findMax(vecF);
    findMin(vecF);
    fSort(vecF);
    cout << "Введите символ для поиска: ";
    float keyF;
    cin >> keyF;
    index = bSearch(vecF, keyF);
    findPrint(index);

    random<string>(vecS);
    cout << "Последовательность изначальная: ";
    print(vecS);
    findMax(vecS);
    findMin(vecS);
    fSort(vecS);
    cout << "Введите символ для поиска: ";
    string keyS;
    cin >> keyS;
    /*index = bSearch(vecS, keyS);
    findPrint(index);*/
}

