#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(0));
	const int row = 5, col = 5;
	int justArray[row][col], justArray2[row][col];

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			justArray[i][j] = rand() % 50;
			cout << justArray[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "\n\tShift direction\n"
		<< "\t1. Right\n"
		<< "\t2. Left\n"
		<< "\t3. Up\n"
		<< "\t4. Down\n\n"
		<< "Select action: ";
	int direction;
	cin >> direction;

	if (direction > 4 || direction <= 0)
	{
		cout << "Error, try on 1 or 2 or 3 or 4" << endl;
	}

	int shift;
	switch (direction)
	{
	case 1:
		cout << "Select quantity of shifts: ";
		cin >> shift;
		if (shift > col)
		{
			shift %= col;
		}
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				if (col - shift + j > col - 1)
				{
					justArray2[i][j] = justArray[i][j - shift];
					cout << justArray2[i][j] << "\t";
				}
				else
				{
					justArray2[i][j] = justArray[i][col - shift + j];
					cout << justArray2[i][j] << "\t";
				}
			}
			cout << endl;
		}
		break;

	case 2:
		cout << "Select quantity of shifts: ";
		cin >> shift;
		if (shift > col)
		{
			shift %= col;
		}
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				if (shift + j - col < 0)
				{
					justArray2[i][j] = justArray[i][j + shift];
					cout << justArray2[i][j] << "\t";
				}
				else
				{
					justArray2[i][j] = justArray[i][shift + j - col];
					cout << justArray2[i][j] << "\t";
				}
			}
			cout << endl;
		}
		break;
	case 3:

		cout << "Select quantity of shifts: ";
		cin >> shift;
		if (shift > row)
		{
			shift %= row;
		}
		for (int j = 0; j < col; ++j)
		{
			for (int i = 0; i < row; ++i)
			{
				if (shift + i - row < 0)
				{
					justArray2[i][j] = justArray[i + shift][j];
				}
				else
				{
					justArray2[i][j] = justArray[shift + i - row][j];
				}
			}
		}
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				cout << justArray2[i][j] << "\t";
			}
			cout << endl;
		}
		break;

	case 4:
	{
		cout << "Select quantity of shifts: ";
		cin >> shift;
		if (shift > row)
		{
			shift %= row;
		}
		for (int j = 0; j < col; ++j)
		{
			for (int i = 0; i < row; ++i)
			{
				if (row - shift + i > row - 1)
				{
					justArray2[i][j] = justArray[i - shift][j];
				}
				else
				{
					justArray2[i][j] = justArray[row - shift + i][j];
				}
			}
		}
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < col; ++j)
			{
				cout << justArray2[i][j] << "\t";
			}
			cout << endl;
		}
	}
	break;
	cin.get(); cin.get();
	}
}
