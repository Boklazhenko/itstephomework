// Написать функцию, которая получает в качестве параметров 2 целых числа и возвращает сумму
// чисел из диапазона между ними.
#include <iostream>
using namespace std;

int rangeSum(int a, int b) 
{
	int min, max, sum = 0;
	(a < b ? (min = a, max = b) : (min = b, max = a));
	for (int i = min; i <= max; ++i) 
	{
		sum += i;
	}
	return sum;
}
int main()
{
	int firstNumber, secondNumber;
	cout << "Enter first number  ";
	cin >> firstNumber;
	cout << "Enter second number  ";
	cin >> secondNumber;
	cout << "Sum of range numbers " << rangeSum(firstNumber, secondNumber) << endl;
	return 0;
}