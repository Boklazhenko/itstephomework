//Пользователь вводит два целых числа.Необходимо вывести все целые числа, 
//на которые оба введенных числа делятся без остатка.
#include <iostream>
using namespace std;

int main() {
	long long num1, num2, delit = 1, temp1, temp2, i = 0;	//Сделал long long как в 6 задаче при больших числах
	cout << "Enter the first number ";
	cin >> num1; 
	cout << "Enter the second number ";
	cin >> num2;
	while (delit <= num1) {
		temp1 = num1 % delit;
		temp2 = num2 % delit;
		if (temp1 == 0 && temp2 == 0) {
			cout << delit << ", ";
			++i;
		}
		++delit;
	}
	cout << "\n\nTotal " << i << " dividers!\n";			//Выводит количество делителей.
}