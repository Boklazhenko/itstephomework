#include <iostream>

using namespace std;

int main()
{
	long firstNumber;
	long secondNumber;
	long sum = 1;

	cout << "Please enter first number:\n";
	cin >> firstNumber;
	cout << "Plese enter second number:\n";
	cin >> secondNumber;

	for (int i = 0; i < secondNumber; i++)
	{
		sum *= firstNumber;
	}
	cout << "First number in second number degree = " << sum;

}
