
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
template <class T>
void bubbleSort(T arr[], long size)
{
	long i, j;
	T tmp;
	for (i = 0; i < size; ++i)
	{
		for (j = size - 1; j > i; j--)
		{
			if (arr[j - 1] > arr[j])
			{
				tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

int main()
{
	srand(time(NULL));
	const long Size = 10;
	int array[Size];
	for (int i = 0; i < Size; ++i)
	{
		array[i] = rand() % 100;
		cout << array[i] << "\t";
	}
	cout << endl;
	bubbleSort(array, Size);
	for (int i = 0; i < Size; ++i)
	{
		cout << array[i] << "\t";
	}
	cout << endl;
	return 0;
}



