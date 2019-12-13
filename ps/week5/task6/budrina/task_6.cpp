//Напишите программу, в которой объявляется массив размером 5х10 и массив размером 5х5.
//Первый массив заполняется случайными числами, в диапазоне от 0 до 50.
//Второй массив заполняется по следующему принципу :
//первый элемент второго массива равен сумме первого и второго элемента первого массива,
//второй элемент второго массива равен сумме третьего и четвертого элемента первого массива


#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
	const int row = 5;
	const int col = 10;
	int arrBig[row][col];

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			arrBig[i][j] = rand() % 50;//диапазон 0-50
			cout << left << setw(3) << arrBig[i][j] << "  "; //выводим большой массив
		}
		cout << "\n" << endl;
	}
	for (int j = 0; j <= col; ++j)
	{
		cout << "-----"; //немного красоты
	}
	cout << "\n" << endl;

	const int size = 5;
	int arrSmall[size][size];

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			int count = 0;
			arrSmall[i][count] = arrBig[i][j] + arrBig[i][j + 1];
			cout << left << setw(3) << arrSmall[i][count] << "  ";//выводим маленький массив  
			++j;
			++count; 
		}
		cout << "\n" << endl;
	}
}