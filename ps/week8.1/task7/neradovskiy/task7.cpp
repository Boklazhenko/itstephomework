#include <iostream>
#include <time.h>
#include <stdlib.h>

void distibution(int arr[], int size, int positive[], int& posSize, int negative[], int& negativeSize,
	int zero[], int& zeroSize);
void fill(int arr[], int size);
void print(int arr[], int size);

int main()
{
	const int size = 10;
	int arr[size] = {- 5, 20, 0, 45, -88, 99, 55, 0, 22, 9};
	//fill(arr, size);
	//print(arr, size);

	int posSize = 0;
	int* positive = new int[size];

	int negativeSize = 0;
	int* negative = new int[size];

	int zeroSize = 0;
	int* zero = new int[size];

	distibution(arr, size, positive, posSize, negative, negativeSize, zero, zeroSize);
	std::cout << "Positive num: ";
	print(positive, posSize);
	std::cout << "Negative num: ";
	print(negative, negativeSize);
	std::cout << "Zero: ";
	print(zero, zeroSize);
	delete[] positive, negative, zero;
}


void distibution(int arr[], int size, int positive[], int& posSize, int negative[], int& negativeSize,
	int zero[], int& zeroSize)
{
	for (int i = 0; i < size; ++i) {
		if (arr[i] > 0)
			positive[posSize++] = arr[i];
		else if (arr[i] < 0)
			negative[negativeSize++] = arr[i];
		else
			zero[zeroSize++] = arr[i];
	}
}
void fill(int arr[], int size) {
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
		arr[i] = rand() % 100;
}
void print(int arr[], int size) {
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}