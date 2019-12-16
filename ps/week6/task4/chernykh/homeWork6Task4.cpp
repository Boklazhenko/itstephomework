#include <iostream>
#include <string>

using namespace std;

bool isLuckyNumber(int number)
{
	bool result = false;
	int firstNumber, secondNumber, thirdNumber;
	int fourthNumber, fifthNumber, sixthNumber;
	for (int i = 0; i <= number; ++i)
	{
		firstNumber = i / 100000;
		secondNumber = (i % 100000) / 10000;
		thirdNumber = (i % 10000) / 1000;
		fourthNumber = (i % 1000) / 100;
		fifthNumber = (i % 100) / 10;
		sixthNumber = i % 10;
	}

	if ((firstNumber + secondNumber + thirdNumber) == (fourthNumber + fifthNumber + sixthNumber))
	{
		result = true;
		return result;
	}
	else
	{
		result = false;
		return result;
	}

	return result;
}

int main()
{
	int number = 0;
	cout << "Please enter a six digit number: " << endl;
	cin >> number;
	if (number >= 1000000 || number <= 99999)
	{
		cout << "Error, you entered the wrong number!" << endl;

		return 1;
	}

	if (isLuckyNumber(number) == true)
	{
		cout << "Congratulations! Your number is lucky! ;)" << endl;
	}
	else
	{
		cout << "Sorry, your number isn't lucky :(" << endl;
	}
}
