// Дан массив: А[M] (M вводится с клавиатуры). Необходимо удалить из массива четные или нечетные значения. 
//Пользователь вводит данные в массив, а также с помощью меню решает, что нужно удалить.
//

#include <iostream>
using namespace std;
enum whatToDo { Exit, RemoveEvenNum, RemoveOddNum };


void printArray(int* arr, int size) {
	for (int i = 0; i < size; ++i)
		cout << *(arr + i) << "  ";
	cout << endl;
}

int main()
{
	setlocale(0, "");
	int size, sizeNew = 0, whatToDo;

	cout << "Введите размер массива: ";
	cin >> size;
	int* arr = new int[size];
	cout << "Введите значения массива:\n";
	for (int i = 0; i < size; ++i) {
		cout << i + 1 << " элемента: ";
		cin >> arr[i];
	}
	cout << "\n";
	printArray(arr, size);

	cout << "\n";
	cout << "Выберите 1, если хотите удалить все чётные значения: \n";
	cout << "Выберите 2, если хотите удалить все не чётные значения: \n";
	cout << "Выберите 0, если хотите выйти из программы: \n";
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
		cout << " Не верный ввод числа!\n";
		break;
	}

	delete[]arr;
}

