#include <iostream>

using namespace std;

int main()
{
	int firstNumber, secondNumber, thirdNumber, result = 0;

	for (int i = 100; i <= 999; ++i)
	{
		firstNumber = i / 100;
		secondNumber = i / 10 % 10;
		thirdNumber = i % 10;

		if (firstNumber != secondNumber && secondNumber != thirdNumber)
			++result;
	}
	cout << "Result = " << result;
}
