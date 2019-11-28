//Пользователь вводит целое число А.
//Программа должна определить,что куб суммы цифр этого числа равен А* А

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int a, a1, a2, a3, cube, sum = 0;
	cout << "Введите число: ";
	cin >> a;
	a1 = a;

	while (a > 0) {
		{
			a2 = a % 10;
			sum += a2;
		}
		a /= 10;
	}

	cube = sum * sum * sum;
	a3 = a1 * a1;
	cout << "\nКуб суммы цифр " << a1 << " = " << cube;
	cout << "\n\nКвадрат числа " << a1 << " = " << a3;
	if (cube == a3)
	{
		cout << "\n\nКуб суммы цифр = квадрату числа.\n";
	}
	else
	{
		cout << "\n\nКуб суммы цифр != квадрату числа.\n";
	}
	return 0;
}
