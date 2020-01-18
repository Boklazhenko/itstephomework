#include <iostream>
#include <stdlib.h>
#include <time.h>

void print(int arr[], int size);
void deletEvenOdd(int arr[], int size, int sortArr[], int& sortSize, int key);

int main()
{
	std::cout << "Enter size array: ";
	int userSize;
	std::cin >> userSize;
	int* userArr = new int[userSize];
	for (int i = 0; i < userSize; ++i) {
		std::cout << "Please enter data for " << i << " cell array: \n";
		std::cin >> userArr[i];
	}
	std::cout << "Please enter 1 if you wont to remove odd numbers\n";
	std::cout << "Please enter 2 if you wont to remove even numbers\n";
	int key;
	std::cin >> key;
	if (key != 1 && key != 2)
		std::cout << "Error, please enter the correct key";
	else
	{
		int sortSize = userSize;
		int* sortArr = new int[sortSize];
		deletEvenOdd(userArr, userSize, sortArr, sortSize, key);
		print(sortArr, sortSize);
		delete[] sortArr;
	}



	delete[] userArr;
}
void print(int arr[], int size) {
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
void deletEvenOdd(int arr[], int size, int sortArr[], int& sortSize, int key) {
	sortSize = 0;
	int temp;
	if (key == 1) {
		for (int i = 0; i < size; ++i) {
			if (arr[i] % 2 == 0) {
				temp = arr[i];
				sortArr[sortSize++] = temp;
			}
		}
	}
	else
	{
		for (int i = 0; i < size; ++i) {
			if (arr[i] % 2 != 0) {
				temp = arr[i];
				sortArr[sortSize++] = temp;
			}
		}
	}
}