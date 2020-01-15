// Используя два указателя на массивы целых чисел, скопировать один массив в другой так, 
//чтобы во втором массиве элементы находились в обратном порядке.
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
//

#include <iostream>

int main()
{
	int const size = 5;
	int arr[size] = { 1,2,3,4,5 }, arrCopy[size];
	int* pArr = &arr[0];
	int* pCopyArr = &arrCopy[size - 1];
	for (int i = 0; i < size; ++i)
		*(pCopyArr - i) = *(pArr + i);
	for (int i = 0; i < size; ++i)
		std::cout << *(arrCopy + i);
}