/*Пользователь вводит два целых числа. Необходимо вывести все целые числа, на
которые оба введенных числа делятся без остатка.*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	long long num1, num2, div = 1;
	cout << "Введите первое число\n";
	cin >> num1;
	cout << "Введите второе число\n";
	cin >> num2;
	if (num1 < 0)
		num1 = -num1;
	if (num2 < 0)
		num2 = -num2;
	while (div <= num1 && div <= num2) {
		if (((num1 % div) == 0) && ((num2 % div) == 0))
			cout << div << " ";
		div++;
	}
}