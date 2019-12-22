// Задание 6. (неделя 6)
//Написать функцию, определяющую среднее арифметическое 
//элементов передаваемого ей массива

#include <iostream>
using namespace std;

double ArithArray(int array[], int size)
{
	int sum = 0;
	for (int i = 0; i < size; ++i)
		sum += array[i];
	double arith = (double)sum / size;
	return arith;
}

int main()
{
	const int size = 5;
	int num = 0;
	int array[size];
	cout << "Enter elements of array: \n";
	for (int i = 0; i < size; ++i)
	{
		cin >> num;
		array[i] = num;
	}
	cout << "Arithmetic mean of array elements: " << ArithArray(array, size);
}

