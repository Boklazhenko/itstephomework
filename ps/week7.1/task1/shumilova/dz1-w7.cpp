// Задание 1. (неделя 7)
//Написать программу, выполняющую сортировку одномерного 
//массива целых чисел методом пузырьковой сортировки.

#include <iostream>
#include <stdlib.h>
using namespace std;

void sortBubble(int array[], int size);

int main()
{
	const int size = 10;
	int array[size];
	srand(6);
	for (int i = 0; i < size; ++i)
	{
		array[i] = rand() % 1000;
		cout << array[i] << "\t";
	}
	sortBubble(array, size);
	for (int i = 0; i < size; ++i)
		cout << array[i] << "\t";
}

void sortBubble(int array[], int size)
{
	for (int i = 0; i < size; ++i)
		for (int j = size - 1; j > i; --j)
			if (array[j - 1] > array[j])
			{
				int temp = array[j - 1];
				array[j - 1] = array[j];
				array[j] = temp;
			}
}
