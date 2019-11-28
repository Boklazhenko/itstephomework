//Пользователь вводит любое целое число.
//Необходимо из этого целого числа удалить
//все цифры 3 и 6 и вывести обратно на экран.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	long long a, s, nfinish = 0, nreturn = 0;
	cout << "Введите ряд цифр: ";
	cin >> s;
	while (s > 0)
	{
		a = s % 10;
		if (a != 3 && a != 6)
		{
			nreturn *= 10;
			nreturn += a;
		}
		s /= 10;
	}
	while (nreturn > 0)             // переворачиваем число обратно
	{
		a = nreturn % 10;
		nfinish *= 10;
		nfinish += a;
		nreturn /= 10;
	}
	cout << "\n" << nfinish << "\n\n";

	return 0;
}
