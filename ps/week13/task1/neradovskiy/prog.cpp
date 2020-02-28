#include <iostream>
#define INTEGER
//#define DOUBLE
//#define CHAR
#include "function.h"





int main() {
	
	const int size = 10;
	//INTEGER
	int arr[size];
	FillArrRand(arr, size);
	ShowArr(arr, size);
	std::cout << "Max value: " << SearchMaxValue(arr, size) << std::endl;
	std::cout << "Min value: " << SearchMinValue(arr, size) << std::endl;
	Sort(arr, size);
	ShowArr(arr, size);
	EditValue(arr, 0, 555);
	ShowArr(arr, size);
	
	/*DOUBLE
	double arr[size];
	FillArrRand(arr, size);
	ShowArr(arr, size);
	std::cout << "Max value: " << SearchMaxValue(arr, size) << std::endl;
	std::cout << "Min value: " << SearchMinValue(arr, size) << std::endl;
	Sort(arr, size);
	ShowArr(arr, size);
	EditValue(arr, 0, 555.5);
	ShowArr(arr, size);
	*/
	/*CHAR
	char arr[size];
	FillArrRand(arr, size);
	ShowArr(arr, size);
	std::cout << "Max value: " << SearchMaxValue(arr, size) << std::endl;
	std::cout << "Min value: " << SearchMinValue(arr, size) << std::endl;
	Sort(arr, size);
	ShowArr(arr, size);
	EditValue(arr, 0, 'A');
	ShowArr(arr, size);
	*/
}