#include <iostream>

using namespace std;

int sumNumbersOfRange(int first, int second)
{
	int result = 0;
	for (int i = first + 1; i < second; ++i)
	{
		result += i;
	}
	return result;
}

int main()
{
	int firstNumber = 0, secondNumber = 0;
	cout << "Enter first of range number " << endl;
	cin >> firstNumber;
	cout << "Enter second of range number " << endl;
	cin >> secondNumber;

	if (firstNumber > secondNumber)
	{
		cout << "Error, wrong range!";
		return 1;
	}

	cout << "Sum of numbers between " << firstNumber << " and " << secondNumber << " = " << sumNumbersOfRange(firstNumber, secondNumber);

	return 0;
}
