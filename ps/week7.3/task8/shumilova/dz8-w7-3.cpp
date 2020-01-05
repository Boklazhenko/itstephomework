//8 (неделя 7.3)
//Используя указатель на массив целых чисел, посчитать сумму элементов массива. 
//Использовать в программе арифметику указателей для продвижения по массиву, а также оператор разыменования.
#include <iostream>
using namespace std;
int main()
{
	const int size = 10;
	int arr[size] = { 10,9,8,7,6,5,11,12,13,4 };
	for (int i = 0; i < size; ++i)
		cout << arr[i] << "\t";
	int sum = 0;
	for (int j = 0; j < size; ++j)
		sum += *(arr + j);
	cout << "sum = " << sum << endl;
}