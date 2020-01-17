//Даны два массива : А[M] и B[N](M и N вводятся с клавиатуры).
//Необходимо создать третий массив минимально возможного размера,
//в котором нужно собрать элементы массива A, которые не включаются в массив B, без повторений.


#include<iostream>
using namespace std;
void sort(int* arrN, int sizeN)
{
	int tmp = 0;
	for (int i = 0; i < sizeN; ++i)
	{
		for (int j = i + 1; j < sizeN; ++j)
		{
			if (arrN[j] < arrN[i])
			{
				tmp = arrN[j];
				arrN[j] = arrN[i];
				arrN[i] = tmp;
			}
		}
	}
}
int main()
{
	setlocale(0, "");
	int sizeA, sizeB;
	cout << "Введите размер первого массива: ";
	cin >> sizeA;
	cout << "Введите размер второго массива: ";
	cin >> sizeB;
	int* arrA = new int[sizeA];
	int* arrB = new int[sizeB];

	cout << "\n\nПервый массив: ";
	for (int x = 0; x < sizeA; x++)
	{
		arrA[x] = rand() % 9 + 1;
		cout << arrA[x] << " ";
	}
	cout << "\n\nВторой массив: ";
	for (int x = 0; x < sizeB; x++)
	{
		arrB[x] = rand() % 9 + 1;
		cout << arrB[x] << " ";
	}

	sort(arrA, sizeA);
	sort(arrB, sizeB);

	cout << "\n\nПервый массив (Отсортированный): ";
	for (int x = 0; x < sizeA; x++)
	{
		cout << arrA[x] << " ";
	}
	cout << "\n\nВторой массив (Отсортированный): ";
	for (int x = 0; x < sizeB; x++)
	{
		cout << arrB[x] << " ";
	}
	cout << "\n\nТретий массив: ";
	int sizeC = sizeA < sizeB ? sizeA : sizeB;
	int* arrC = new int[sizeC];

	int count = 0;
	int temp;
	bool choice;
	int previous = arrB[0];		
	for (int x = 0; x < sizeA; ++x) {
		choice = false;
		for (int y = 0; y < sizeB; ++y) {
			if (arrA[x] == arrB[y]) {
				choice = true;
				break;
			}
			else {
				temp = arrA[x];
			}
		}
		if (!choice && temp != previous) {
			previous = temp;
			arrC[count++] = temp;
		}
	}
	sizeC = count;

	for (int x = 0; x < sizeC; ++x) {
		cout << arrC[x] << " ";
	}
	cout << "\n";
	delete[] arrA;
	delete[] arrB;
	delete[] arrC;
}
