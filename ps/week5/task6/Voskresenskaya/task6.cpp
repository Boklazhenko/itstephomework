


#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	const int row = 5;
	const int col = 10;
	int arr[row][col];
	int secondArr[row][col / 2];
	int thirdArr[row][col / 2];
	int fourthArr[row][col / 2];
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0, g = 0; j < col; ++j, ++g)
		{
			arr[i][j] = rand() % 50;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0, g = 0; j < col, g < col / 2; j + 2, ++g)

		{
			secondArr[i][g] = arr[i][j];
			j += 2;
			cout << secondArr[i][g] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 1, g = 0; j < col, g < col / 2; j + 2, ++g)
		{
			thirdArr[i][g] = arr[i][j];
			j += 2;
			cout << thirdArr[i][g] << " ";
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < row; ++i)
	{
		for (int g = 0; g < col / 2; ++g)
		{
			fourthArr[i][g] = secondArr[i][g] + thirdArr[i][g];
			cout << fourthArr[i][g] << " ";
		}
		cout << endl;
	}
	return 0;
}

