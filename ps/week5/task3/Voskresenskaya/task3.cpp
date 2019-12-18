
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	srand(time(NULL));
	const int row = 3;
	const int col = 6;
	int arr[row][col];
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			arr[i][j] = rand() % 100;
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	int shift;
	cout << "Enter the number of shifts " << endl;
	cin >> shift;
	if (shift > 0)
	{
		int direction;
		enum direction { left = 1, right, up, down };
		cout << "Enter array shift direction " << endl;
		cout << "\t 1-left" << endl;
		cout << "\t 2-right" << endl;
		cout << "\t 3-up" << endl;
		cout << "\t 4-down" << endl;
		cin >> direction;
		if (direction < 1 || direction > 4)
		{
			cout << "error" << endl;
		}
		else
		{
			switch (direction)
			{
			case left:
				int  tmp;
				for (int i = 0; i < row; ++i)
				{
					int g = 0;
					while (g < shift)
					{
						tmp = arr[i][0];
						for (int j = 0; j < col - 1; ++j)
						{
							arr[i][j] = arr[i][j + 1];
						}
						arr[i][col - 1] = tmp;
						++g;
					}
				}
				for (int i = 0; i < row; ++i)
				{
					for (int j = 0; j < col - 1; ++j)
					{
						cout << arr[i][j] << " ";
					}
					cout << endl;
				}
				break;

			case right:
				for (int i = 0; i < row; ++i)
				{
					int g = 0;
					while (g < shift)
					{
						int  tmp = arr[i][col - 1];
						for (int j = col - 1; j > 0; --j)
						{
							arr[i][j] = arr[i][j - 1];

						}
						arr[i][0] = tmp;
						++g;
					}
				}
				for (int i = 0; i < row; ++i)
				{
					for (int j = 0; j < col; ++j)
					{
						cout << arr[i][j] << " ";
					}
					cout << endl;
				}
				break;

			case up:
				for (int j = 0; j < col; ++j)
				{
					int g = 0;
					while (g < shift)
					{
						int tmp = arr[0][j];
						for (int i = 0; i < row - 1; ++i)
						{
							arr[i][j] = arr[i + 1][j];
						}
						arr[row - 1][j] = tmp;
						++g;
					}
				}
				for (int i = 0; i < row; ++i)
				{
					for (int j = 0; j < col - 1; ++j)
					{
						cout << arr[i][j] << " ";
					}
					cout << endl;
				}
				break;

			case down:
				for (int j = 0; j < col; ++j)
				{
					int g = 0;
					while (g < shift)
					{
						int  tmp = arr[row - 1][j];
						for (int i = row - 1; i > 0; --i)
						{
							arr[i][j] = arr[i - 1][j];

						}
						arr[0][j] = tmp;
						++g;
					}
				}
				for (int i = 0; i < row; ++i)
				{
					for (int j = 0; j < col; ++j)
					{
						cout << arr[i][j] << " ";
					}
					cout << endl;
				}
			}
		}
	}
	else
	{
		cout << "error" << endl;
	}
	return 0;
}


