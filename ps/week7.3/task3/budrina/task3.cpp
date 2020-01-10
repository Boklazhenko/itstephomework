//Используя два указателя на массив целых чисел, скопировать один массив в другой так, чтобы во втором массиве
// элементы находились в обратном порядке.
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
#include <iostream>
using namespace std;

int main()
{
	const int size = 10;
	int arr1[size] = { 1, 3, 5, 7, 9, 11, 13, 15, 17, 19 };
	int arr2[size];
	int* pArr1 = arr1;
	int* pArr2 = arr2;
	for (int i = 0; i < size; ++i)
	{
		*(pArr2 + i) = *(pArr1 + i);
	}

	for (int i = 0; i < size / 2; ++i)
	{
		arr2[i] += arr2[size - i - 1];
		arr2[size - i - 1] = arr2[i] - arr2[size - i - 1];
		arr2[i] = arr2[i] - arr2[size - i - 1];
	}
	for (int i = 0; i < size; ++i)
	{
		cout << *(pArr2 + i) << " ";
	}
	cout << endl;
}