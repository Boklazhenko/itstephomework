//Пользователь вводит любое целое число А.
//Необходимо вывести все целые числа В,
//для которых А делиться без остатка на В* В и не делиться без остатка на В* В* В

#include <iostream>
using namespace std;

int main()
{
	int a, b = 1, b2, b3, res2, res3;
	cout << "Enter the number: ";
	cin >> a;
	while (b <= a)
	{
		b2 = b * b;
		b3 = b * b * b;
		res2 = a % b2;
		res3 = a % b3;
		if (res2 == 0 && res3 != 0)
		{
			cout << b << " ";

		}
		++b;
	}
}