//Написать программу, выполняющую сортировку одномерного массива целых чисел методом вставок.

#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	const int size = 20;
	int arr[size];
	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 1; i < size; ++i)
	{
		int key = arr[i];
		for (int j = i - 1; j >= 0&&arr[j]>key; --j)
		{
			if (arr[j] > key)
			{
				arr[j + 1] = arr[j];
				arr[j] = key;
			}
		}
	}
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
}