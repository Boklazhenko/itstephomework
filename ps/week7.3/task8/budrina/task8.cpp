//Используя указатель на массив целых чисел, посчитать сумму всех элементов массива.
//Использовать в программе арифметику указателей для продвижения по массиву, а так же оператор разыменовывания.

#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size] = { 1,2,5,9,3 };
	int summ = 0;
	int* pSumm = &summ;
	int* pArr = arr;
	for (int i = 0; i < size; ++i)
	{
		*pSumm += *(arr +i);
		
	}

	cout << *pSumm << endl;
}