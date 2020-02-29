
#include <iostream>
//#define INTEGER
//#define DOUBLE
#define CHAR
#include "function.h"

using namespace std;

int main()
{
	const int size = 10;
	/*int arr[size];*/
	/*double arr[size];*/
	char arr[size];
	FillArrRand(arr, size);
	cout << "Random array: ";
	ShowArr(arr, size);
	cout << "Sort array: ";
	Sort(arr, size);
	ShowArr(arr, size);
	SearchMinValue(arr, size);
	SearchMaxValue(arr, size);
	EditValue(arr, size);
	cout << "\n";

	return 0;
}
