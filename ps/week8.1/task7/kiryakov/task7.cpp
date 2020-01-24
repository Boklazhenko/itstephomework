#include <iostream>
using namespace std;

void fillArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		arr[i] = rand() % 30 + (-10);
}

void printArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		cout << *(arr + i) << "\t";
	cout << endl;
}

void compareArray(int* arr, int size) {
	int sizePos = 0, sizeNeg = 0, sizeZer = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i] > 0)
			++sizePos;
		if (arr[i] < 0)
			++sizeNeg;
		if (arr[i] == 0)
			++sizeZer;
	}
	int* arrPos = new int[sizePos];
	int* arrNeg = new int[sizeNeg];
	int* arrZer = new int[sizeZer];
	int indexPos = 0, indexNeg = 0, indexZer = 0;
	for (int i = 0; i < size; ++i) {
		if (arr[i] > 0) {
			arrPos[indexPos] = arr[i];
			++indexPos;
		}
		if (arr[i] < 0) {
			arrNeg[indexNeg] = arr[i];
			++indexNeg;
		}
		if (arr[i] == 0) {
			arrZer[indexZer] = arr[i];
			++indexZer;
		}
	}
	cout << "Array of positive elements\t"; printArray(arrPos, sizePos);
	cout << "Array of negative elements\t"; printArray(arrNeg, sizeNeg);
	cout << "Array of null elements\t\t"; printArray(arrZer, sizeZer);
	delete[] arrPos;
	delete[] arrNeg;
	delete[] arrZer;
}

int main()
{
	const int size = 30;
	int arr[size];
	fillArray(arr, size);
	printArray(arr, size);
	compareArray(arr, size);
}