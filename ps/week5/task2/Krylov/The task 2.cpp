#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	const int row = 5;
	const int col = 4;
	int arr[row][col];
	int num;

	cout << "Введите число: ";

	cin >> num;

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			arr[i][j] = num;
			++num;
		}
	}

	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			cout << arr[i][j] << "\t";
		}
		cout << "\n" << endl;
	}
	
}
