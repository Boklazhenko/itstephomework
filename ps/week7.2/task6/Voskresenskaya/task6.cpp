//Написать рекурсивную функцию, которая вычисляет сумму 
//всех чисел в диапазоне от a до b.Пользователь вводит a и b.
//Проиллюстрируйте работу функции примером.
#include <iostream>
using namespace std;
int findSum(int a, int b, int sum = 0)
{
	if (a == b + 1)
	{
		cout << sum << endl;
		return 0;
	}
	sum += a;
	++a;
	return findSum(a, b, sum);
}

int main()
{
	int a, b;
	cout << "Enter two numbers first smaller then larger";
	cin >> a;
	cin >> b;
	if (a < b)
	{
		findSum(a, b);
	}
	else
	{
		cout << "error";
	}
	return 0;
}


