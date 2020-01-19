// Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный. 
// Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.

#include <iostream>
using namespace std;

int main()
{
	int const size = 7;
	int arr[size] = { 1,2,3,4,5,6,7 };
	int* pFirstArr = &arr[0];
	int* pLastArr = &arr[size - 1];
	do {
		int temp = *pFirstArr;
		*pFirstArr = *pLastArr;
		*pLastArr = temp;
		++pFirstArr;
		--pLastArr;
	} while (pFirstArr < pLastArr);
	for (int i = 0; i < size; ++i)
	{
		cout << *(arr + i) << " ";
	}
}