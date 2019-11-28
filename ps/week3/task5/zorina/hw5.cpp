/*Пользователь вводит целое число А. Программа должна определить, что куб суммы
цифр этого числа равен А*А*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int a, sum = 0;
	cout << "Введите число\n";
	cin >> a;
	int temp = a;
	while (temp > 0)
	{
		sum += temp % 10;
		temp = temp / 10;
	}
	if ((sum * sum * sum) == (a * a))
		cout << "Куб суммы цифр этого числа равен квадраду этого числа\n";
	else
		cout << "Попробуйте другое число\n";
}

