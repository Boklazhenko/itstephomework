#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");  
	long long  a = 0, num;
	cout << "Введите число\n";
	cin >> num;
	if (num < 0)
		num = -num;//выводит результат положительный, не придумала, как вывести отрицательный вариант
	while (num > 0)
	{		
if (num % 10 != 3 && num % 10 != 6)//цикл выполняется, если остаток от деления не равен 3 и 6
		{
			a *= 10;
			a += num % 10;
		}
		num /= 10;
	}
		while (a > 0)//возвращаем числа за исключением 3 и 6
	{
		cout << a % 10;
		a /= 10;
		}
	}