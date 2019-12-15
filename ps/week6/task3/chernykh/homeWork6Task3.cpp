#include <iostream>

using namespace std;

void searchCompliteNumbers(int firstNumber, int secondNumber)
{
	for (; firstNumber < secondNumber; ++firstNumber)
	{
		int sumDividers = 0;
		for (int i = 1; i < firstNumber; ++i)
		{
			if ((firstNumber % i) == 0)
			{
				sumDividers += i;
			}
		}
		if (sumDividers == firstNumber && sumDividers)
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

