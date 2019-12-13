/*В двумерном массиве целых числе посчитать:
 Сумму всех элементов массива
 Среднее арифметическое всех элементов массива
 Минимальный элемент
 Максимальный элемент*/

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	const int line = 5, column = 8;
	int ar[line][column];
	for (int x = 0; x < line; ++x)
	{
		for (int y = 0; y < column; ++y)
		{
			ar[x][y] = rand();
		}
	}
	double sum = 0, average = 0;
	int min = ar[0][0], max = ar[0][0];
	for (int x = 0; x < line; ++x)
	{
		for (int y = 0; y < column; ++y)
		{
			sum += ar[x][y];
			average = sum / (line * column);
			if (min > ar[x][y])
				min = ar[x][y];
			if (max < ar[x][y])
				max = ar[x][y];
			cout << ar[x][y] << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Sum of all array`s elements is " << sum << endl;
	cout << "Average of all array`s elements is " << average << endl;
	cout << "The minimal array`s element is " << min << endl;
	cout << "The maximal array`s element is " << max << endl;
}