
#include <iostream>
using namespace std;

int main()
{
	const int size = 12;
	int arr[size];

	for (int i = 0; i < size; ++i)
	{
		cout << "Enter your monthly profit : ";
		cin >> arr[i];

	}
	int i1;
	cout << "Enter the first month of the range : ";
	cin >> i1;
	int i2;
	cout << "Enter the last month of the range : ";
	cin >> i2;
	int max = arr[i1];
	int min = arr[i2];
	for (int i = i1 - 1; i <= i2 - 1; ++i)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
		if (max < arr[i])
		{
			max = arr[i];
		}

	}
	cout << "Minimal profit" << min << endl;
	cout << "Maximal profit" << max << endl;
}
