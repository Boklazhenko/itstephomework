#include <iostream>
#include <string>

using namespace std;

string checkLuckyNumber(int number)
{
	string result = "";
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
		result = "Congratulations! Your number is lucky! ;)";
		cout << result << endl;
	}
	else
	{
		result = "Sorry, your number isn't lucky :(";
		cout << result << endl;
	}

	return result;
}

int main()
{
	int number = 0;
	cout << "Please enter a six digit number: " << endl;
	cin >> number;
	if (number >= 1000000)
	{
		cout << "Error, your number is too big!" << endl;

		return 1;
	}

	checkLuckyNumber(number);
}
