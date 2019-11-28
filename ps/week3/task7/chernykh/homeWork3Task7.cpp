#include <iostream>

using namespace std;

int main()
{
	int firstNumber;
	int secondNumber;

	cout << "Please enter first number: " << endl;
	cin >> firstNumber;
	cout << "Please enter second number: " << endl;
	cin >> secondNumber;

	int multiplyNumber = firstNumber * secondNumber;

	for (int i = 1;i <= multiplyNumber; ++i)
	{
		if (i % firstNumber == 0 && i % secondNumber == 0)
		{
			cout << i << endl;
		}
	}
}
