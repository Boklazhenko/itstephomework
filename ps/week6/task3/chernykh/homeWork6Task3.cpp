#include <iostream>

using namespace std;

void searchCompliteNumbers(int firstNumber, int secondNumber)
{
	for (int i = firstNumber; i < secondNumber; ++i)
	{
		int sumDividers = 0;
		for (int j = 1; j < i; ++j)
		{
			if ((i % j) == 0)
			{
				sumDividers += j;
			}
		}
		if (sumDividers == i && sumDividers)
		{
			cout << sumDividers << endl;
		}
	}
}

int main()
{
	int firstNumber = 0, secondNumber = 0;
	cout << "Enter first number of range: " << endl;
	cin >> firstNumber;
	cout << "Enter second number of range: " << endl;
	cin >> secondNumber;

	searchCompliteNumbers(firstNumber, secondNumber);
}

