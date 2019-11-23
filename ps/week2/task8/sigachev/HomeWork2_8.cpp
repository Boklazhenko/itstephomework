//Пользователь вводит две границы диапазона. Посчитать сумму всех чисел диапазона
#include <iostream>
using namespace std;

int main() {
	int firstNumber, secondNumber, smallNumber, bigNumber;
	cout << "Enter first number of the range ";
	cin >> firstNumber;
	cout << "Tnter second number of the range ";
	cin >> secondNumber;
	if (firstNumber < secondNumber) {		//Здесь проверяется какое число начальное в диапазоне
		smallNumber = firstNumber;	bigNumber = secondNumber;
	}
	else {
		smallNumber = secondNumber;	bigNumber = firstNumber;
	}
	//############################ цикл for ########################################
	/*	int result = 0;
		for (int i = smallNumber; i <= bigNumber; ++i) {
		result += i;
		}*/
	//############################ цикл while ######################################
	/*	int result = 0;
		while (smallNumber <= bigNumber) {
		result += smallNumberr;
		smallNumber++;
		}*/
	//############################ цикл do....while ################################
		int result = 0;
		do {
			result += smallNumber;
			smallNumber++;
		} while (smallNumber <= bigNumber);
	cout << "\nSum of numbers "<< result <<"\n";
}