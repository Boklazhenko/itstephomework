#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	const int row = 5;
	const int col = 10;
	
	int arr[row][col];
	int arr2[row][row]{};

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			arr[i][j] = rand() % 50;
			cout << arr[i][j] << "\t";
		}
		cout << "\n";
	}
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			if (j % 2 == !0)
				arr2[i][j / 2] = arr[i][j - 1] + arr[i][j];
		}
	}
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			cout << arr2[i][j] << "\t";
		}
		cout << "\n";
	}

}
