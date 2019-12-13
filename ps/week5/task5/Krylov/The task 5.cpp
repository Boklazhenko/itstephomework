#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	const int row = 2;
	const int col = 5;
	int arr[row][col];
	int sumArr[row]{};
	int sum = 0;
	int sumAll = 0;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			arr[i][j] = rand() % 10 + 1;
			cout << arr[i][j] << "\t";
			sum += arr[i][j];
			sumArr[i] += arr[i][j];
			sumAll += arr[i][j];

		}

		cout << " |  " << sum << endl;
	}
	for (int i = 0; i < row; ++i)
	{

		cout << sumArr[i] << "\t";

	}

	cout << sumAll << "\t";

	cout << endl;

}

