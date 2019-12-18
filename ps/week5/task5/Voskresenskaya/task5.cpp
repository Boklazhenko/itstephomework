
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	const int row = 3;
	const int col = 4;
	int arr[row][col];
	for (int i = 0; i < row; ++i)
	{
		int sumCol = 0;
		for (int j = 0; j < col; ++j)
		{
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << " ";
			sumCol += arr[i][j];
		}
		cout << " | " << sumCol << endl;

	}
	int sumArr = 0;
	for (int j = 0; j < col; ++j)
	{
		int sumRow = 0;
		for (int i = 0; i < row; ++i)
		{
			sumRow += arr[i][j];
			sumArr += arr[i][j];
		}
		cout << sumRow << " ";
	}
	cout << sumArr;
	return 0;
}


