#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	int const month = 12;
	double arr[month];

	for (int i = 0; i < month; ++i)
	{
		cout << "Введите прибыль за месяц = " << endl;
		cin >> arr[i];
	}

	int firstMonth = 0, lastMonth;
	int max = arr[0];
	int min = arr[firstMonth];

	cout << "Выберите начало отсчета = " << endl;
	cin >> firstMonth;
	cout << "Выберите конец отсчета = " << endl;
	cin >> lastMonth;

	for (int i = 1; i < month; ++i)
	{
		if (i > firstMonth && i < lastMonth)
		{
			if (arr[i] > max)
				max = arr[i];

			if (arr[i] < min)
				min = arr[i];
		}
	}

	cout << "Максимальная прибыль = " << max << endl;
	cout << "Минимальная прибыль = " << min << endl;

}
