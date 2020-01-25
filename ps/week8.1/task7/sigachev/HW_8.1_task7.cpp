//Написать функцию, которая получает указатель на статический массив и его размер.Функция распределяет положительные, 
//отрицательные и нулевые элементы в отдельные динамические массивы.

#include <iostream>
#include <ctime>
using namespace std;

void fillArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		arr[i] = rand() % 15 - 8;
}

void printArray(int* arr, int size) {
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << "  ";
	}
	cout << endl;
}

void distributionArray(int* arr, int size) {
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
	cout << "Array of positive \t"; printArray(arrPos, sizePos);
	cout << "Array of negative \t"; printArray(arrNeg, sizeNeg);
	cout << "Array of null  \t\t"; printArray(arrZer, sizeZer);
	delete[] arrPos;
	delete[] arrNeg;
	delete[] arrZer;
}

int main() {
	srand(time(nullptr));
	const int size = 15;
	int arr[size];
	fillArray(arr, size);
	printArray(arr, size);
	distributionArray(arr, size);
}