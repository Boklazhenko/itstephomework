/* Задание 8. (неделя 6)
Написать перегруженные функции и протестировать их в основной программе :
Нахождения максимального значения в одномерном массиве; •
Нахождения максимального значения в двумерном массиве; •
Нахождения максимального значения в трёхмерном массиве; •
Нахождения максимального значения двух целых; •
Нахождения максимального значения трёх целых; •
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

//Нахождения максимального значения в одномерном массиве; •
int maximum (int array[], int size)
{
	int max=array[0];
	for (int i = 0; i < size; ++i)
		if (array[i] > max)
			max = array[i];
	return max;
}
//Нахождения максимального значения в двумерном массиве; •
int maximum(int array[][5], int size)
{
	int max = array[0][0];
	for (int i = 0; i < size; ++i)
		for (int j = 0; j < size; ++j)
		{
			if (array[i][j] > max)
				max = array[i][j];
		}
	return max;
}
//Нахождения максимального значения в трёхмерном массиве; •
int maximum(int array[][5][5], int size)
{
	int max = array[0][0][0];
	for (int i = 0; i < size; ++i)
		for (int j = 0; j < size; ++j)
			for (int k=0; k<size;++k)
			if (array[i][j][k] > max)
				max = array[i][j][k];
	return max;
}
//Нахождения максимального значения двух целых; •
int maximum(int num1, int num2)
{
	int max = (num1 > num2) ? num1 : num2;
	return max;
}
//Нахождения максимального значения трёх целых; •
int maximum(int num1, int num2, int num3)
{
	int max = num1;
	if (num2 > max)
		if (num3>max)
			max=num3;
		else max=num2;
	return max;
}
int main()
{
	srand(5);
	const int size = 5;
	int array[size] = { 4,-1,9,-50,61 };
	for (int i = 0; i < size; ++i)
		cout << array[i] << "\t";
	cout << "\nMaximum array: "<<maximum(array, size)<< "\n\n";
	
	int array2[size][size];
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			array2[i][j] = rand() % 100;
			cout << array2[i][j] << "\t";
		}
		cout << "\n";
	}
	cout << "\nMaximum array: " << maximum(array2, size) << "\n\n";

	int array3[size][size][size];
	for (int i = 0; i < size; ++i)
	{
		for (int j = 0; j < size; ++j)
		{
			for (int k = 0; k < size; ++k)
			{
				array3[i][j][k] = rand() % 1000;
				cout << array3[i][j][k] << " ";
			}
		}
		cout << "\n";
	}
	cout << "\nMaximum array: " << maximum(array3, size) << endl;
	
	int num1, num2, num3;
	cout << "\nEnter number 1: ";
	cin >> num1;
	cout << "Enter number 2: ";
	cin >> num2;
	cout << "Maximum: " << maximum(num1, num2) << "\n";
	cout << "\nEnter number 3: ";
	cin >> num3;
	cout << "Maximum: " << maximum(num1, num2, num3) << endl;
}

