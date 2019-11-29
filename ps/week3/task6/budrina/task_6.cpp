//Пользователь вводит целое число.
//Необходимо вывести все целые числа,
//на которое заданное число делиться без остатка.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	int i = 1;
	cout << "Введите целое число:";
	cin >> a;

	for (; a >= i; ++i) {
		if (a % i == 0)
			cout << i << "  ";
	}
	return 0;
}