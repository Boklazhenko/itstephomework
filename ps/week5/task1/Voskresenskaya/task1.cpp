

#include <iostream>
using namespace std;
int main()
{
	const int rou = 3;
	const int col = 4;
	int arr[rou][col];
	int firstElement;
	cout << "Enter the first element of the array" << endl;
	cin >> firstElement;
	for (int i = 0; i < rou; ++i)
	{

		for (int j = 0; j < col; ++j)
		{
			if (i == 0 && j == 0)
			{
				arr[i][j] = firstElement;
				cout << arr[i][j] << " ";
			}
			else
			{
				firstElement = firstElement * 2;
				arr[i][j] = firstElement;
				cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}



