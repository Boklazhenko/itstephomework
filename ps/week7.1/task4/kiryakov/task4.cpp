#include <iostream>
#include <stdlib.h>
#include<ctime>
using namespace std;

void fillArray(int arr[], const int size)
{
	srand(time(NULL));
	for (int i = 0; i < size; ++i)
		arr[i] = rand() % 20 + (-5);
}

void quickSort(int arr[], int const size)
{
	int i = 0, j = size - 1;
	int pivot = arr[(i + j) / 2];
	do
	{
		while (arr[i] < pivot)
			++i;
		while (arr[j] > pivot)
			--j;
		if (i <= j)
		{
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			++i;
			--j;
		}
	} while (i <= j);
	if (j > 0)
		quickSort(arr, j + 1);
	if (i < size)
		quickSort(&arr[i], size - i);
}

void reversPartOfArray(int arr[], int partOfArray, int size)
{
	for (int i = partOfArray, j = size - 1; i < j; ++i, --j)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}

void printArray(int arr[], const int size)
{
	for (int i = 0; i < size; ++i)
		cout << arr[i] << " ";
	cout << endl;
}


int main()
{
	const int size = 9;
	int arr[size];
	fillArray(arr, size);
	printArray(arr, size);
	int sum = 0, average = 0;
	for (int i = 0; i < size; ++i)
		sum += arr[i];
	average = sum / size;
	int oneThirdArray = size / 3, twoThirdsArray = size / 3 * 2;
	if (average > 0)
	{
		quickSort(arr, twoThirdsArray);
		reversPartOfArray(arr, twoThirdsArray, size);
	}
	else
	{
		quickSort(arr, oneThirdArray);
		reversPartOfArray(arr, oneThirdArray, size);
	}
	printArray(arr, size);
}