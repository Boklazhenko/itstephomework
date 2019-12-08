#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	cout << "Введите 10 чисел = " << endl;

	int arr[10];
	for (int i = 0; i < 10; ++i)
	{
		cin >> arr[i];
	}

	int max = arr[0];

	int min = arr[0];

	for (int i = 0; i < 10; ++i)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}

		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "Max = " << max << endl;
	cout << "Min = " << min << endl;

}
