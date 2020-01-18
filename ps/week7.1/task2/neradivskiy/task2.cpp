#include <iostream>
#include <stdlib.h>
#include <time.h>

void insertSort(int arr[], int size) {
	int x;
	for (int i = 0; i < size; ++i) {
		int temp = arr[i];
		for (x = i - 1; x >= 0 && arr[x] > temp; --x) {
			arr[x + 1] = arr[x];
		}
		arr[x + 1] = temp;
	}
}

int main()
{
	srand(time(NULL));
	const int size = 100;
	int arr[size];
	for (int i = 0; i < size; ++i) {
		arr[i] = rand() % 100;
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	insertSort(arr, size);
	for (int i = 0; i < size; ++i)
	{
		std::cout << arr[i] << " ";
	}
}
