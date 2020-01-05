//Задание 6. (неделя 7.2)
//Написать рекурсивную функцию, которая вычисляет сумму 
//всех чисел в диапазоне от a до b.
//Пользователь вводит a и b. Проиллюстрируйте работу функции примером.

#include <iostream>
using namespace std;

int summa(int a, int b)
{
	if (a == b)
		return a;
	return b + summa(a, b - 1);
}
int main()
{
	int a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	cout << summa(a, b);
}
