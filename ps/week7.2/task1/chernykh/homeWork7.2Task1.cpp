#include <iostream>

using namespace std;

//void biggestNumber(int firstNumber, int secondNumber)
//{
//	if (firstNumber > secondNumber)
//	{
//		int temp = firstNumber;
//		firstNumber = secondNumber;
//		secondNumber = temp;
//	}
//
//	for (int i = firstNumber; i < secondNumber; ++i)
//	{
//		if (firstNumber % i == 0 && secondNumber % i == 0)
//		{
//			cout << i << endl;
//		}
//	}
//}

int searchBiggestNumbersDivider(int firstNumber, int secondNumber)
{
	if (secondNumber == 0)
	{
		return firstNumber;
	}

	if (firstNumber > secondNumber)
	{
		return searchBiggestNumbersDivider(secondNumber, firstNumber % secondNumber);
	}
	else
	{
		return searchBiggestNumbersDivider(firstNumber, secondNumber % firstNumber);
	}
}

int main()
{
	int firstNumber, secondNumber;
	cout << "Please enter two numbers: " << endl;
	cin >> firstNumber >> secondNumber;

	cout << "The largest common factor is: " << searchBiggestNumbersDivider(secondNumber, firstNumber % secondNumber) << endl;
}