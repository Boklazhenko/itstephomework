//Написать программу, выполняющую сортировку одномерного массива целых чисел методом пузырьковой сортировки.

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL)); //заполняем массив случайными числами, просто чтобы вспомнить, как это делается
	const int size = 15;
	int arr[size];
	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 50;
		cout << arr[i] << " ";//выводим изначальный массив, для наглядности
	}
	cout << endl;
	for (int j = 0; j < size - 1; ++j)
	{
		for (int i = 0; i < size - 1; ++i)
		{
			int temp = 0;
			if (arr[i] > arr[i + 1])
			{
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	for (int j = 0; j < size; ++j)//выводим отсортированный массив, для наглядности
		cout << arr[j] << " ";
}