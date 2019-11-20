//Пользователь вводит две границы диапазона. Посчитать сумму всех чисел диапазона

#include <iostream>
using namespace std;


int main()
{
	int x, y, res = 0;
	cin >> x;
	cin >> y;
	for (int i = x; i <= y; i++)
		res += i;
	cout << res << endl;
}