// Написать рекурсивную функцию, которая выводит N звезд в ряд, число N задает пользователь.

#include<iostream>
using namespace std;
void f(int num)
{
	if (num <= 0)
		return;
	cout << '*'; f(num - 1);
}

int main()
{
	setlocale(0, "");
	int num;
	cout << " Введите количество звездочек цифрой:  ";
	cin >> num;
	f(num);
	cout << "\n";
}