﻿#include <iostream>

int main()
{
	const int size = 10;
	int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int copyArr[size];
	int* pArr = &arr[0];
	int* pCopyArr = &copyArr[0];
	for (int i = 0; i < size; ++i) {
		*(pCopyArr + i) = *(pArr + i);
	}
	for (int i = 0; i < size; ++i) {
		std::cout << copyArr[i] << " ";
	}

}
