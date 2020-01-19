//Даны два массива : А[M] и B[N](M и N вводятся с клавиатуры).
//Необходимо создать третий массив минимально возможного размера,
//в котором нужно собрать общие элементы двух массивов без повторений.

#include<ctime>
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

	int* arrC = new int[sizeA < sizeB ? sizeA : sizeB];
	int sizeC = 0;

	for (int x = 0, y = 0; x < sizeA && y < sizeB; )
	{
		if (arrA[x] < arrB[y]) ++x;
		else if (arrA[x] > arrB[y]) ++y;
		else
		{
			arrC[sizeC++] = arrA[x];
			x++; y++;
		}
	}

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
	for (int x = 0; x < sizeC; x++)
	{
		cout << arrC[x] << " ";
	}

	delete arrA;
	delete arrB;
	delete arrC;
}

