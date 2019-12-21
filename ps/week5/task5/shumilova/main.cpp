/* Задание 5 (неделя 5)
В двумерном массиве целых чисел посчитать сумму элементов: в каждой строке; в каждом
столбце; одновременно по всем строкам и всем столбцам. Оформить следующим образом:
3 5 6 7 | 21
12 1 1 1 | 15
0 7 12 1 | 20
-------------
15 3 19 9 | 56
*/

#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	srand(5);
	const int size = 3;
	int massive[size][size];
	
	for (int x = 0; x < size; ++x)
	{
	int sumRow = 0;
		for (int y = 0; y < size; ++y)
		{
			massive[x][y] = rand() % 100;
			cout << massive[x][y] << "\t";
			sumRow += massive[x][y];
		}
		cout << "| " << sumRow <<"\n"; 
		cout << "\n" << endl;
	}

	for (int i = 0; i <= size; ++i)
	{
		cout << "---\t";
	}
	cout << "\n" << endl;
	
	int sumAll = 0;
	for (int y = 0; y < size; ++y)
	{
		int sumCol = 0;
		for (int x = 0; x < size; ++x)
		{
			sumCol += massive[x][y];
		}
		
		cout << sumCol << "\t";
		sumAll += sumCol;
	}
	cout << "| " << sumAll;
	cout << "\n" << endl;
}

