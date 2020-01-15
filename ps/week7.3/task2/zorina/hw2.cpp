//Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный. 
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
//

#include <iostream>

int main()
{
	int const size = 5;
	int arr[size] = { 1,2,3,4,5 };
	int* pFirstElem = &arr[0];
	int* pLastElem = &arr[size - 1];
	do {
		int temp = *pFirstElem;
		*pFirstElem = *pLastElem;
		*pLastElem = temp;
		++pFirstElem;
		--pLastElem;
	} while (pFirstElem < pLastElem);
	for (int i = 0; i < size; ++i)
	{
		std::cout << *(arr + i);
	}
}