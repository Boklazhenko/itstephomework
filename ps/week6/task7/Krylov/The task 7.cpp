#include <iostream>

using namespace std;

void searchNumber(int arr[], int size);

int main()
{
    setlocale(LC_ALL, "");
    const int size = 10;
    int arr[size]{ 100, 56, -5, -99, 8, 96, 0 , -7, 0, 34 };
    for (int i = 0; i < size; ++i)
        cout << arr[i] << endl;
    searchNumber(arr, size);
    
}

void searchNumber(int arr[], int size)
{
    int positive = 0, negative = 0, zero = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > 0) ++positive;
        if (arr[i] < 0) ++negative;
        if (arr[i] == 0) ++zero;
    }
    cout << "Кол-во положительных элементов = " << positive << endl;
    cout << "Кол-во отрицательных элементов = " << negative << endl;
    cout << "Кол-во нулевых элементов = " << zero << endl;
}
