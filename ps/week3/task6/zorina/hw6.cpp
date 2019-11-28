/*Пользователь вводит целое число. Необходимо вывести все целые числа, на которое
заданное число делиться без остатка*/

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	long long num, div = 1;
	cout << "Введите число\n";
	cin >> num;
	if (num < 0)//на случай, если пользователь ввел отрицательное число
		num = -num;
	for (; div <= num; div++)
		if ((num%div) == 0)
			cout << div << " ";
}