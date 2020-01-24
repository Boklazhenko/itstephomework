#include <iostream>
using namespace std;
enum whatToDo { Exit, RemoveEvenNum, RemoveOddNum };


void printArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		cout << *(arr + i) << "\t";
	cout << endl;
}

int main()
{
	int size, sizeNew = 0, whatToDo;

	cout << "Input size of the array\n";
	cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; ++i) {
		cout << "Input data\n";
		cin >> arr[i];
	}
	printArray(arr, size);


	cout << "Input 1, if you want to remove all even numbers\n";
	cout << "Input 2, if you want to remove all odd numbers\n";
	cout << "Input 0, if you want to exit the programm\n";
	cin >> whatToDo;
	switch (whatToDo)
	{
	case Exit:
		return 0;
		break;
	case RemoveEvenNum:
	{
		for (int i = 0; i < size; ++i) {
			if (arr[i] % 2 == 1)
				++sizeNew;
		}
		int* arrNew = new int[sizeNew];
		int j = 0;
		for (int i = 0; i < size; ++i) {
			if (arr[i] % 2 == 1) {
				arrNew[j] = arr[i];
				++j;
			}
		}
		printArray(arrNew, sizeNew);
		delete[] arrNew;
		break;
	}
	case RemoveOddNum:
	{
		for (int i = 0; i < size; ++i) {
			if (arr[i] % 2 == 0)
				++sizeNew;
		}
		int* arrNew = new int[sizeNew];
		int j = 0;
		for (int i = 0; i < size; ++i) {
			if (arr[i] % 2 == 0) {
				arrNew[j] = arr[i];
				++j;
			}
		}
		printArray(arrNew, sizeNew);
		delete[] arrNew;
		break;
	}
	default:
		cout << "Wrong input, try 0 to 2\n";
		break;
	}

	delete[]arr;
}