// Напишите программу, в которой объявляется массив размером 5х10 и массив размером 5х5.
// Первый массив заполняется случайными числами, в диапазоне от 0 до 50. Второй массив
// заполняется по следующему принципу : первый элемент второго массива равен сумме первого и
// второго элемента первого массива, второй элемент второго массива равен сумму третьего и
// четвертого элемента первого массива
#include <iostream>
using namespace std;

int main()
{
	const int row = 5;
	const int col = 10;
	int arr1[row][col];
	int arr2[row][row];
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			arr1[i][j] = rand() % 77;
			cout << arr1[i][j] << "\t";			
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < row; ++i) 
	{
		for (int j = 0; j < col; ++j)
		{
			int count = 0;
			arr2[i][count] = arr1[i][j] + arr1[i][j+1];
			cout << arr2[i][count] << "\t";
			++j; 
			++count;
		}
		cout << endl;
	}
	cout << endl;
}