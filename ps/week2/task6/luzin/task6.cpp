//Вывести на экран все числа от нуля до введенного пользователем числа.

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int x;
	cout << "ваше число" << endl;
	cin >> x;
	for (int i = 0; i <= x; i++)
		cout << i << endl;
}

