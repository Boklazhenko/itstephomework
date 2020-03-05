//Написать функцию, которая получает указатель на динамический массив и его размер.Функция должна удалить из массива все простые 
//числа и вернуть указатель на новый динамический массив.

#include <iostream>
#include <ctime>
using namespace std;

void fillArray(int arr[], int size) {		
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

void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << "  ";
    }
}

bool checkPrimeNum(int number) {
	if (number == 2 || number == 3)
		return true;
	else if (number == 0)
		return false;
	else {
		for (int i = 2; i <= (sqrt(number)); ++i) {
			if (number % i == 0)
				return false;
		}
		return true;
	}
}

int* deletePrimeNum(int* arr, int size) {
	int sizeNew = 0;
	for (int i = 0; i < size; ++i)
		if (!checkPrimeNum(arr[i]))
			++sizeNew;

	int* newArr = new int[sizeNew];
	int index = 0;
	for (int i = 0; i < size; ++i) {
		if (!checkPrimeNum(arr[i])) {
			newArr[index] = arr[i];
			++index;
		}
	}

	cout << "modified array: "; printArray(newArr, sizeNew);

	return newArr;
	delete[] newArr;
}

int main() {
	srand(time(nullptr));
    int sizeArray = 10;
    int* arr = new int[sizeArray];
    fillArray(arr, sizeArray);
    printArray(arr, sizeArray);
	cout << endl;
    deletePrimeNum(arr, sizeArray);

    delete[] arr;
}