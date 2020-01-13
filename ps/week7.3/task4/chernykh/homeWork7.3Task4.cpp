#include <iostream>

using namespace std;

int largestNumber(int* firstNumber, int* secondNumber)
{
	if (*firstNumber < *secondNumber)
	{
		return *secondNumber;
	}
	else if (*firstNumber > *secondNumber)
	{
		return *firstNumber;
	}
	else
	{
		cout << "Numbers is equal!" << endl;
		return *firstNumber;
	}
}

int main()
{
	int a = 10, b = 10;
	cout << largestNumber(&a, &b) << endl;
}
