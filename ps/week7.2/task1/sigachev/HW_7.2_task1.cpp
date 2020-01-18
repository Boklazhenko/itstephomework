// Написать рекурсивную функцию нахождения наибольшего общего делителя двух целых чисел.
#include <iostream>
using namespace std;

int greatestCommonFactor(int num1, int num2)
{
	if (num2 == 0) 
	{
		return num1;
	}
	return greatestCommonFactor(num2, num1 % num2);
}

int main()
{
	int firstNumber, secondNumber, max = 0, min = 0;
	cout << "Enter first number: ";
	cin >> firstNumber;
	cout << "Enter second number: ";
	cin >> secondNumber;
	(firstNumber < secondNumber ? max = secondNumber : max = firstNumber);
	(firstNumber > secondNumber ? min = secondNumber : min = firstNumber);
	cout << "Greatest common factor: " << greatestCommonFactor(max, min);
}