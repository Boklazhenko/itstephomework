#include <iostream>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int size) {
	for (int i = 0; i < size; ++i)
	{
		for (int x = size - 1; x > i; --x)
		{
			if (arr[x - 1] > arr[x]) {
				int temp = arr[x - 1];
				arr[x - 1] = arr[x];
				arr[x] = temp;
			}
		}
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
	bubbleSort(arr, size);
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
}

