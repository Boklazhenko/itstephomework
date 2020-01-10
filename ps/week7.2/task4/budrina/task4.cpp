// Написать рекурсивную функцию нахождения степени числа.


#include <iostream>
using namespace std;
double exponent(double number, int power) {

	return (power > 0) ? number * exponent(number, power - 1) : number;
}
int main() {
	double number;	// Возводимое число
	int power;		// Степень
	setlocale(0, "rus");

	cout << "\n Введите целое число: ";
	cin >> number;
	cout << "\n Возвести в степень: ";
	cin >> power;

	cout << "\n Результат: ";
	(power > 0) ? cout << exponent(number, power - 1) : cout << 1;
	cout << endl;
	return 0;
}


