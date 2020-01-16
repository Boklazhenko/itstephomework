#include <iostream>
#include <stdlib.h>
#include <time.h>

bool isPrimeNum(int num);
int* deletePrimeNum(int* arr, int& size, int copyArr[]);
void print(int arr[], int size);
void fillRandomNum(int arr[], int size);

int main()
{
	int size = 10;
	int* arr = new int[size];
	int copySize;
	int* copyArr = new int[size];
	fillRandomNum(arr, size);
	print(arr, size);
	int* temp = deletePrimeNum(arr, size, copyArr);
	print(temp, size);
	delete[] arr, copyArr;

}
bool isPrimeNum(int num) {
	if (num == 2 || num == 3)
		return true;
	else if (num < 2)
		return false;
	else {
		for (int i = 2; i < num; ++i) {
			if (num % i == 0)
				return false;
		}
		return true;
	}
}
int* deletePrimeNum(int* arr, int& size, int copyArr[]) {
	int copySize = 0;
	int temp = 0;
	for (int i = 0; i < size; ++i) {
		if (!isPrimeNum(arr[i])) {
			continue;
		}
		else {
			copyArr[copySize++] = arr[i];
		}
	}
	size = copySize;
	return copyArr;
}
void print(int arr[], int size) {
	for (int i = 0; i < size; ++i)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
}
void fillRandomNum(int arr[], int size) {
	srand(time(nullptr));
	for (int i = 0; i < size; ++i)
		arr[i] = rand() % 100;
}