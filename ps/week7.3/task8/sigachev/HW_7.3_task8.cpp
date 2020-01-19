// Используя указатель на массив целых чисел, посчитать сумму элементов массива. Использовать
// в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.

#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int arr[size];
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 10;
        cout << arr[i] << " ";
    }
    int* pSum = &sum;
    int* pArr = arr;
    for (int i = 0; i < size; ++i) {
        *pSum += *(arr + i);
    }
    cout << endl << endl;
    cout << *pSum;
}