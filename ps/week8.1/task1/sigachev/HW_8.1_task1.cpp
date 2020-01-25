//Даны два массива : А[M] и B[N](M и N вводятся с клавиатуры). Необходимо создать третий массив минимально возможного размера, 
//в котором нужно собрать элементы массива A, которые не включаются в массив B, без повторений.

#include <iostream>
#include <ctime>
using namespace std;

void fillArr(int arr[], int size) {		//Заполнение случайными уникальными числами
	bool alreadyThere;
	for (int i = 0; i < size;) {
		alreadyThere = false;
		int newValue = rand() % 20;
		for (int j = 0; j < i; ++j) {
			if (arr[j] == newValue) {
				alreadyThere = true;
				break;
			}
		}
		if (!alreadyThere) {
			arr[i] = newValue;
			++i;
		}
	}
}
void printArr(int arr[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << "  ";
	}
}
int main()
{
	srand(time(nullptr));
	int oneSize, twoSize;
	cout << "Enter first array: ";
	cin >> oneSize;
	cout << "Enter second array: ";
	cin >> twoSize;

	int* arr1 = new int[oneSize];
	int* arr2 = new int[twoSize];

	fillArr(arr1, oneSize);
	printArr(arr1, oneSize);
	cout << endl;

	fillArr(arr2, twoSize);
	printArr(arr2, twoSize);
	cout << endl;

	int threeSize = 0;
	for (int i = 0; i < oneSize; ++i) {		//размер третего массива
		bool thisCopy = false;
		for (int j = 0; j < twoSize; ++j) {
			if (arr1[i] == arr2[j]) {
				thisCopy = true;
				break;
			}
		}
		if (!thisCopy) {
			++threeSize;
		}
	}
	int k = 0;					// заполняем
	int* arr3 = new int[threeSize];
	for (int i = 0; i < oneSize; ++i) {
		bool thisCopy = false;
		for (int j = 0; j < twoSize; ++j) {
			if (arr1[i] == arr2[j]) {
				thisCopy = true;
				break;
			}
		}
		if (!thisCopy) {
			arr3[k] = arr1[i];
			++k;
		}
	}
	printArr(arr3, threeSize);

	delete[] arr1;
	delete[] arr2;
	delete[] arr3;
}