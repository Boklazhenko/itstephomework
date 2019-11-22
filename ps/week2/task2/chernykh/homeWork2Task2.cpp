#include <iostream>

using namespace std;

//homeWork2Task2

int main()
{
	long firstNumber;
	long secondNumber;
	long result = 1;

	cout << "Please enter first number:\n";
	cin >> firstNumber;
	cout << "Plese enter second number:\n";
	cin >> secondNumber;

	for (int i = 0; i < secondNumber; ++i)
	{
		result *= firstNumber;
	}
	cout << "First number in second number degree = " << result;

}
