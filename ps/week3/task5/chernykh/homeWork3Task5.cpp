#include <iostream>

using namespace std;
//Знаю что дублирование кода, не знаю как в цикл запихнуть)
int main()
{
	int number = 0, firstPartNumber = 0, secondPartNumber = 0;
	int numberSquare = number * number;
	int firstPartNumberSquare = firstPartNumber * firstPartNumber;
	int firstPartNumberCoub = firstPartNumber * firstPartNumber * firstPartNumber;
	int secondPartNumberSquare = secondPartNumber * secondPartNumber;
	int secondPartNumberCoub = secondPartNumber * secondPartNumber * secondPartNumber;
	int coubSum = firstPartNumberCoub + firstPartNumberSquare * 3 * secondPartNumber + firstPartNumber * 3 * secondPartNumberSquare + secondPartNumberCoub;

	cout << "Please enter a number: " << endl;
	cin >> number;

	if (number <= 99)
	{
		firstPartNumber = number / 10;
		secondPartNumber = number % 10;

		if (coubSum == numberSquare)
		{
			cout << "Yes" << endl;
		}
	}
	else if (number <=999)
	{
		firstPartNumber = number / 100;
		secondPartNumber = number % 100;

		if (coubSum == numberSquare)
		{
			cout << "Yes" << endl;
		}
	}
	else if (number <=9999)
	{
		firstPartNumber = number / 1000;
		secondPartNumber = number % 1000;

		if (coubSum == numberSquare)
		{
			cout << "Yes" << endl;
		}
	}
}

