//Пользователь вводит любое целое число.
//Необходимо из этого целого числа удалить
//все цифры 3 и 6 и вывести обратно на экран.
#include <iostream>
using namespace std;

int main()
{
	long long a, numFinish = 0, numReturn = 0, numUser;
	cout << "Enter the number: ";
	cin >> numUser;
	while (numUser > 0) {				// В этом цикле избавляемся от 3 и 6
		a = numUser % 10;				// в результате получается перевернутое число
		if (a != 3 && a != 6)
		{
			numReturn *= 10;
			numReturn += a;
		}
		numUser /= 10;
	}
	while (numReturn > 0) {				// В этом цикле переворачиваем число обратно
		a = numReturn % 10;
		numFinish *= 10;
		numFinish += a;
		numReturn /= 10;
	}
	cout << "\n" << numFinish << "\n";
}