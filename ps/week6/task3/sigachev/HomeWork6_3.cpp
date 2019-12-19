// Число называется совершенным, если сумма всех его делителей равна ему самому. 
// Напишите функцию поиска таких чисел во введенном интервале.
#include <iostream>
using namespace std;

void perfectNumber(int a, int b) {
	int min, max;
	(a < b ? (min = a, max = b) : (min = b, max = a));
	for (int i = min; i < max; ++i)
	{
		int sum = 0;
		for (int j = 1; j < i; ++j)
		{
			if ((i % j) == 0)
			{
				sum += j;
			}
		}	
		if (sum == i)
			cout << sum << endl;
	}
}
int main()
{
	int firstNumber, secondNumber;
	cout << "Enter first number  ";
	cin >> firstNumber;
	cout << "Enter second number  ";
	cin >> secondNumber;
	perfectNumber(firstNumber, secondNumber);
}