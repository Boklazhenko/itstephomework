// Написать программу, выполняющую сортировку одномерного массива целых чисел методом вставок.
#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; ++i) 
    {
        arr[i] = rand() % 33;
        cout << arr[i] << "  ";
    }
    cout << endl << endl;
    for (int i = 1; i < size; ++i)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            arr[j] = key;
            j--;
        }
    }
    for (int i = 0; i < size; ++i)
    {
        cout << arr[i] << "  ";
    }
    cout << endl;
}