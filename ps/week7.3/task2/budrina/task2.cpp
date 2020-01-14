//Используя указатель на массив целых чисел, изменить порядок следования элементов массива на противоположный.
//Использовать в программе арифметику указателей для продвижения по массиву, а так же оператор разыменовывания.

#include <iostream>
using namespace std;

int main()
{
	const int size = 5;
	int arr[size] = { 1,2,5,9,3 };
	int* pArr = arr;
	for (int i = 0; i < size / 2; ++i)
	{
		arr[i] += arr[size - i - 1];
		arr[size - i - 1] = arr[i] - arr[size - i - 1];
		arr[i] = arr[i] - arr[size - i - 1];
	}
	for (int i = 0; i < size; i++)
	{
		cout << *(pArr+i) << " ";
	}
	cout << endl;

}