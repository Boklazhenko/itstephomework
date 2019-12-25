// Задание 4. (неделя 6)
//Написать функцию, которая определяет, является ли «счастливым» шестизначное число.

#include <iostream>
using namespace std;

void Happy (int sixDigit)
{
	if (sixDigit > 999999)
	{
		cout << "Error";
		return;
	}
	// как проверить ввод именно шести цифр, а не пяти или четырех - незнаю((
	int first = sixDigit / 1000;
	int second = sixDigit - first * 1000;
	int n1 = first / 100;
	int n2 = (first % 100) / 10;
	int n3 = first % 10;
	int sum1 = n1 + n2 + n3;
	n1 = second / 100;
	n2 = (second % 100) / 10;
	n3 = second % 10;
	int sum2 = n1 + n2 + n3;
	if (sum1 == sum2)
		cout << "Happy number!!";
	else cout << "Poor number((";
	return;
}
int main()
{
	cout << "Enter six digit number: ";
	int sixDigit;
	cin >> sixDigit;
	Happy(sixDigit);
}