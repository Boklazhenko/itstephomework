// Написать функцию, которая определяет, является ли «счастливым» шестизначное число.
//

#include <iostream>
using namespace std;
bool checkLuckyDigit(int number)
{
	bool status = true;
	int sum1 = 0, sum2 = 0;
	while (number > 0)
	{
		if (number / 1000 > 0)
			sum1 += number % 10;
		else
			sum2 += number % 10;
		number = number / 10;
	}
	if (sum1 != sum2)
		status = false;
	return status;
}

int main()
{ /*проверка функции
	int number;
	cout << "Input a six digit number\n";
	cin >> number;
	if (number >= 100000 && number <= 999999)
		if (checkLuckyDigit(number) == 1)
			cout << "Lucky number!";
		else
			cout << "You failed";*/
}