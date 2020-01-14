// Написать рекурсивную функцию нахождения наиболщего общего делителя двух целых чисел.

#include <iostream>
using namespace std;
int gcd(int a, int b)
{
	if (b == 0)
		return a;
	if (a > b)
		return gcd(b, a % b);
	else
		return gcd(a, b % a);
}

int main()
{
	setlocale(0, "");
	int a, b;
	cout << "Введите первое число:\n ";
	cin >> a;
	while (a <= 0)
	{
		cout << "\nОшибка: Число должно быть целым и положительным. Будьте внимательны!!!\n";
		cin >> a;
	}
	cout << "Введите второе число:\n";
	cin >> b;
	while (b <= 0)
	{
		cout << "\nОшибка: Число должно быть целым и положительным. Будьте внимательны!!!\n";
		cin >> b;
	}

	cout << "Наибольший общий делитель равен: " << gcd(b, a % b) << endl;

}