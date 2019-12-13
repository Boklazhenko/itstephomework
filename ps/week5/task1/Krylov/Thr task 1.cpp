#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	const int row = 5;

	int arr[row][row];
	int num;

	cout << "Введите число: ";
	
	cin >> num;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			arr[i][j] = num;
			num *= 2;
		}
	}

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n" << endl;
	}

	}
