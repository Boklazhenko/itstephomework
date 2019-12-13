/*Напишите программу, в которой объявляется массив размером 5х10 и массив размером 5х5.
Первый массив заполняется случайными числами, в диапазоне от 0 до 50. Второй массив
заполняется по следующему принципу : первый элемент второго массива равен сумме первого и
второго элемента первого массива, второй элемент второго массива равен сумму третьего и
четвертого элемента первого массива*/

#include <iostream>
#include<stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL));
	const int line = 5, column = 10;
	int ar[line][column], ar2[line][line];
	for (int x = 0; x < line; ++x)
	{
		for (int y = 0; y < column; ++y) {
			ar[x][y] = rand() % 50;
			cout << ar[x][y] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (int x = 0; x < line; ++x)
	{
		for (int y = 0, indexAr2 = 0; y < column; y += 2, ++indexAr2) {//по первому циклу идем с шагом 2, по второму-с шагом 1
			ar2[x][indexAr2] = ar[x][y] + ar[x][y + 1];
			cout << ar2[x][indexAr2] << " ";
		}
		cout << endl;
	}
}


