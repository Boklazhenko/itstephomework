// Используя два указателя на массивы целых чисел, скопировать один массив в другой так, чтобы во втором массиве элементы 
// находились в обратном порядке.
// Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.

#include <iostream>
using namespace std;

int main()
{
    const int size = 10;
    int arr[size] = { 1,4,7,8,5,8,2,4,0,3 };
    int inverseArr[size] = { 0 };
    int* pArr = arr;
    int* pInverseArr = inverseArr;
    for (int i = 0; i < size; ++i) {
        *(pInverseArr + i) = *(pArr + ((size - 1) - i));
        cout << *(pInverseArr + i) << " ";
    }
}