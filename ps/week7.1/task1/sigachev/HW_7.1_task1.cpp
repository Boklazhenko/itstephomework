// Написать программу, выполняющую сортировку одномерного массива целых чисел методом пузырьковой сортировки.
#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int arr[size];
    for (int i = 0; i < size; ++i)
    {
        arr[i] = rand() % 33;       // Сделал вывод массива для наглядности.
        cout << arr[i] << "\t";
    }
    cout << endl << endl;
    for (int i = 0; i < size; ++i) 
    {
        for (int j = 0; j < (size - 1); ++j) 
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < size; ++i) 
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
}
