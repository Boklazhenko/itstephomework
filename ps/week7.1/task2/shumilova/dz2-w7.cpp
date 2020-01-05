// Задание 2 (неделя 7)
//Написать программу, выполняющую сортировку 
//одномерного массива целых чисел методом вставок.

#include <iostream>
#include <stdlib.h>
using namespace std;

void sortInserts(int array[], int size);

int main()
{
	const int size = 10;
	int array[size];
	srand(12);
	for (int i = 0; i < size; ++i)
	{
		array[i] = rand() % 1000;
		cout << array[i] << "\t";
	}
	sortInserts(array, size);
	for (int i = 0; i < size; ++i)
		cout << array[i] << "\t";
}
void sortInserts(int array[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		int temp = array[i];
		int j = 0;
		for (j = i - 1; j >= 0 && array[j] > temp; j--)
			array[j + 1] = array[j];
		array[j + 1] = temp;
	}
}
