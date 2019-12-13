/*В двумерном массиве целых чисел посчитать сумму элементов : в каждой строке; в каждом
столбце; одновременно по всем строкам и всем столбцам.Оформить следующим образом :
3 5 6 7 | 21
12 1 1 1 | 15
0 7 12 1 | 20

15 3 19 9 | 56*/

#include <iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	const int line = 5, column = 3;
	int ar[line][column];
	for (int x = 0; x < line; ++x)
	{
		for (int y = 0; y < column; ++y)
			ar[x][y] = rand() % 10;
	}
	int totalSum = 0;
	for (int x = 0; x < line; ++x)
	{
		int sumLine = 0;
		for (int y = 0; y < column; ++y)
		{
			sumLine += ar[x][y];
			totalSum += ar[x][y];
			cout << ar[x][y] << "\t ";
		}
		cout << "\| " << sumLine << endl;
		cout << endl;
	}
	cout << endl;//чтоб красивее выглядело
	for (int x = 0; x < column; ++x)
	{
		int sumColumn = 0;
		for (int y = 0; y < line; ++y)
			sumColumn += ar[y][x];
		cout << sumColumn << "\t";
	}
	cout << "\| " << totalSum;
}


