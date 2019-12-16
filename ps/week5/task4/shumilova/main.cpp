/* Задание 4 (неделя 5)
В двумерном массиве целых числе посчитать:
 Сумму всех элементов массива•
 Среднее арифметическое всех элементов массива•
 Минимальный элемент•
 Максимальный элемент•
*/

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	srand(2);
	const int size = 5;
	int massive[size][size];

	for (int x = 0; x < size; ++x)
	{
		for (int y = 0; y < size; ++y)
		{
			massive[x][y] = rand() % 100;
		}
	}
	int sum = 0;
	int min = massive[0][0];
	int max = massive[0][0];
	for (int x = 0; x < size; ++x)
	{
		for (int y = 0; y < size; ++y)
		{
			cout << massive[x][y] << "\t";
			sum += massive[x][y];
			
			if(massive[x][y]<min)
				min= massive[x][y];
			
			if (massive[x][y] > max)
				max = massive[x][y];
		}
		cout << "\n" << endl;
	}
	cout << "Sum = " << sum << endl; //Sum = 1318
	float arif = (float)sum/(size*size);
	cout << "Arif = " << arif << endl; //Arif = 52.72
	cout << "Min = " << min << endl; //Min = 5
	cout << "Max = " << max << endl; //Max = 98
	
	






}

