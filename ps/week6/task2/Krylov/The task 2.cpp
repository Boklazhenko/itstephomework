#include <iostream>

using namespace std;

int amount(int num1, int num2);

int main()
{
	setlocale(LC_ALL, "");
	int num1, num2;
	cout << "Введите первое число: " << endl;
	cin >> num1;
	cout << "Введите второе число: " << endl;
	cin >> num2;

	cout << "Результат суммы чисел = " << amount(num1, num2) << endl;

}

int amount(int num1, int num2)
{
	if (num2 < num1)
	{
		int temporary = num1;
		num1 = num2;
		num2 = temporary;
	}
	int res;
	res = ++num1;
	for (int i = num1 + 2; i < num2; ++i)
		res += i;
	return res;
}
