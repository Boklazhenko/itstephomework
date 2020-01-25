//Дан массив : А[M](M вводится с клавиатуры).Необходимо удалить из массива четные или нечетные значения.Пользователь вводит 
//данные в массив, а также с помощью меню решает, что нужно удалить.

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
	for (int i = 0; i < size; ++i) {
		cout << arr[i] << "  ";
	}
}

int main()
{
	int sizeArray;
	cout << "Enter the size of the array: ";
	cin >> sizeArray;
	int* arr = new int[sizeArray];

	cout << "Enter the values of the array: ";
	for (int i = 0; i < sizeArray; i++) {
		cin >> arr[i];
	}

	while (true) {
		int menu;
		cout << "\nMenu:" << endl;
		cout << "1 - Remove odd values of an array" << endl;
		cout << "2 - Remove even values of an array" << endl;
		cout << "3 - Show entered array" << endl;
		cout << "4 - Exit" << endl;
		cin >> menu;
		switch (menu) {
		case 1: {
			int sizeNew = 0;
			for (int i = 0; i < sizeArray; ++i) {
				if (arr[i] % 2 == 1)
					++sizeNew;
			}
			int* arrNew = new int[sizeNew];
			int j = 0;
			for (int i = 0; i < sizeArray; ++i) {
				if (arr[i] % 2 == 1) {
					arrNew[j] = arr[i];
					++j;
				}
			}
			printArray(arrNew, sizeNew);
			delete[] arrNew;
			break;
		}
		case 2: {
			int sizeNew = 0;
			for (int i = 0; i < sizeArray; ++i) {
				if (arr[i] % 2 == 0)
					++sizeNew;
			}
			int* arrNew = new int[sizeNew];
			int j = 0;
			for (int i = 0; i < sizeArray; ++i) {
				if (arr[i] % 2 == 0) {
					arrNew[j] = arr[i];
					++j;
				}
			}
			printArray(arrNew, sizeNew);
			delete[] arrNew;
			break;
		} 
		case 3: {
			printArray(arr, sizeArray);
			break;
		}
		case 4: {
			delete[] arr;
			return 0;
		} break;
		default: {
			cout << "\nError. Please enter the correct number" << endl;
		}
		}
	}
}