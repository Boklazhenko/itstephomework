#include <iostream>

using namespace std;

int main()
{
	const int months = 12;
	int arrayProfit[months];

	for (int i = 0; i < months; ++i)
	{
		cout << "Enter the profit for each month of the year: \n";
		cin >> arrayProfit[i];
	}

	cout << "Enter range: \n";
	int startRange, endRange;

	cin >> startRange;
	cin >> endRange;

	int max = arrayProfit[0];
	int min = arrayProfit[startRange];


	for (int i = 1; i < months; ++i)
	{
		if (i > startRange && i < endRange)
		{
			if (arrayProfit[i] < min)
			{
				min = arrayProfit[i];
			}
			if (arrayProfit[i] > max)
			{
				max = arrayProfit[i];
			}
		}

	}

	cout << "Max = " << max << "\n\n";
	cout << "Min = " << min << "\n\n";

	return 0;
}