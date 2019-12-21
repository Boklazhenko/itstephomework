

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	const int row = 10;
	const int col = 10;
	int arr[row][col];
	float sum = 0;
	int arrmin = 100;
	int arrmax = 0;
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << " ";
			sum += arr[i][j];
		}
		cout << endl;
	}
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (arrmin > arr[i][j])
			{
				arrmin = arr[i][j];
			}
			if (arrmax < arr[i][j])
			{
				arrmax = arr[i][j];
			}
		}
	}
	cout << endl;

	float arithmeticMean = sum / (row * col);

	cout << "The sum of all array elements " << sum << endl;
	cout << "Arithmetic mean of all elements of the array " << (float)arithmeticMean << endl;
	cout << "Minimum member of an array " << arrmin << endl;
	cout << "Maximum member of an array " << arrmax << endl;
	return 0;
}


