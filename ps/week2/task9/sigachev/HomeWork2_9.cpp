// Пользователь с клавиатуры вводит числа. Посчитать их сумму и вывести на экран,
// как только пользователь введет ноль.

#include <iostream>
using namespace std;

int main()
{
	int number = 1, sum = 0;
	//############################ цикл for ########################################
	/*	for (;;) {
		cout << "Enter number: ";
		cin >> number;
			if (number == 0)
			break;
		sum += number;
		}cout << "\nSum of entered numbers =  "<< sum << "\n";*/
	//############################ цикл while ######################################
	/*	while (number != 0) {
		cout << "Enter number: ";
		cin >> number;
		sum += number;
		}cout << "\nSum of entered numbers =  " << sum << "\n";*/
	//############################ цикл do....while ################################
		do {
		cout << "Enter number: ";
		cin >> number;
		sum += number;
		} while (number != 0);
	cout << "\nSum of entered numbers =  " << sum << "\n";
}