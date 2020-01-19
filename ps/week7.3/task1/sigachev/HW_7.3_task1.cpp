// Используя два указателя на массив целых чисел, скопировать один массив в другой.
// Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования

#include <iostream>
using namespace std;

int main()
{
    const int size = 7;
    int firstArr[size] = { 1,2,3,4,5,6,7 };
    int secondArr[size] = { 0 };
    int* pFirstArr = firstArr;
    int* pSecondArr = secondArr;
    for (int i = 0; i < size; ++i) {
        *(pSecondArr + i) = *(pFirstArr + i);
    }
    for (int i = 0; i < size; ++i) {
        cout << *(secondArr + i) << " ";
    }
}
