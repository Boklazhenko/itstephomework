// Задание 7. (неделя 7.2) 
//Напишите рекурсивную функцию, которая принимает одномерный массив из 100 целых чисел, 
//заполненных случайным образом, и находит позицию, 
//с которой начинается последовательность из 10 чисел, сумма которых минимальна.

#include <iostream>
#include<stdlib.h>
using namespace std;
int findPosition(int arr[], int position, int size)
{
	int sum = 0;
	for (int i = position; i < position + 10; ++i)
		sum += arr[i];
	cout << "pos: " << position << ", ";
	cout << "sum: " << sum << "\n";
	int min = 0;
	if (position < size - 10)
	{
		min = findPosition(arr, position + 1, size);
	}
	if (sum > min)
	{
		min = sum;
	}
	cout << "min: " << min << "\n";
	//что-то не так. не сравнивает суммы((
	return 0;
}
void main()
{
	srand(5);
	const long size = 100;
	int arr[size];
	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 10;
		cout << arr[i] << "\t";
	}
	cout << endl;
	int position = 0;
	findPosition(arr, position, size);
	cout << "\n";
}
