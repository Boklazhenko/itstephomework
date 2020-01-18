#include <iostream>
#include <stdlib.h>
#include <time.h>

void print(int arr[], int size);
void quickSort(int arr[], int size);
void copyDuplicates(int filingArr[], int& sizeF, int arrA[], int sizeA, int arrB[], int sizeB);

int main()
{
	std::cout << "Enter lenth A: ";
	int a;
	std::cin >> a;
	int* pArrA = new int[a];
	std::cout << "Enter lenth B: ";
	int b;
	std::cin >> b;
	int* pArrB = new int[b];
	srand(time(nullptr));
	for (int i = 0; i < a; ++i)
		pArrA[i] = rand() % 10;
	for (int x = 0; x < b; ++x)
		pArrB[x] = rand() % 10;
	std::cout << "Array A:\n";
	print(pArrA, a);
	std::cout << "Array B:\n";
	print(pArrB, b);
	quickSort(pArrA, a);
	quickSort(pArrB, b);
	int sizeF = a + b;
	int* pFilingArr = new int[sizeF];
	copyDuplicates(pFilingArr, sizeF, pArrA, a, pArrB, b);
	std::cout << "Common elements of two arrays: \n";
	print(pFilingArr, sizeF);

	delete[] pArrA, pArrB, pFilingArr;
}
void print(int arr[], int size) {
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
void quickSort(int arr[], int size) {
	int left = 0, right = size - 1;
	int temp, centr;
	centr = arr[size / 2];
	do {
		while (arr[left] < centr)
			left++;
		while (arr[right] > centr)
			right--;
		if (left <= right) {
			temp = arr[left];
			arr[left] = arr[right];
			arr[right] = temp;
			++left;
			--right;
		}
	} while (left <= right);
	if (right > 0)
		quickSort(arr, right + 1);
	if (size > left)
		quickSort(arr + left, size - left);
}
void copyDuplicates(int filingArr[], int& sizeF, int arrA[], int sizeA, int arrB[], int sizeB) {
	uint16_t count = 0;
	int temp;
	int previous = arrA[0] - 1;
	for (int a = 0; a < sizeA; ++a) {
		bool duplicate = false;
		for (int b = 0; b < sizeB; ++b) {
			if (arrA[a] != arrB[b]) {
				continue;
			}
			else {
				duplicate = true;
				temp = arrA[a];
			}
		}
		if (duplicate && temp != previous) { 
			previous = temp;
			filingArr[count++] = temp;
		}
	}
	sizeF = count;
}
