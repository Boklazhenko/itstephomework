#include <iostream>
#include <stdlib.h>
#include <time.h>

void quickSortR(int arr[], int size);
bool calcAverageGreterZero(int arr[], int size);
void swith(int arr[], int first, int last);

int main()
{
	const int size = 10;
	int arr[size] = {-22, -23, -25, 7, 5, -48, -55, -60, -70, 30 };
	//srand(time(NULL));
	//for (int i = 0; i < size; ++i) {
	//	arr[i] = rand() % 100;
	//}
	std::cout << "\nAfter sort: " << std::endl;
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";

	if (calcAverageGreterZero(arr, size)) {
		int otherSize = (size / 3) * 2;
		quickSortR(arr, otherSize);
		swith(arr, otherSize, size - 1);
	}
	else {
		int otherSize = (size / 3);
		quickSortR(arr, otherSize);
		swith(arr, otherSize, size - 1);


	}
	std::cout << "\nBefore sort:\n";
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
}

void quickSortR(int arr[], int size) {
	int left = 0, right = size - 1;
	int temp, centr;
	centr = arr[size / 2];
	do {
		while (arr[left] < centr) {
			left++;
		}
		while (arr[right] > centr)
		{
			right--;
		}
		if (left <= right) {
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			left++;
			right--;
		}
	} while (left <= right);
	if (right > 0) quickSortR(arr, right + 1);
	if (size > left) quickSortR(arr + left, size - left);
}
bool calcAverageGreterZero(int arr[], int size) {
	int sum = 0;
	for (int i = 0; i < size; ++i)
	{
		sum += arr[i];
	}
	return ((sum / size) > 0 ? true : false);
}
void swith(int arr[], int first, int last) {

	do {
		int temp;
		temp = arr[first];
		arr[first] = arr[last];
		arr[last] = temp;
		first++;
		last--;

	} while (first < last);
}
