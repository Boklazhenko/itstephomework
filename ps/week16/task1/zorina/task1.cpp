//// Реализуйте класс Дробь. Необходимо хранить числитель и знаменатель в качестве переменных-членов.
////Реализуйте функции-члены для ввода данных в переменные-члены, для выполнения арифметических операций (сложение, вычитание, умножение, деление, и т.д.).
////
//
#include <iostream>


class Fraction
{
public:
	Fraction(int numerator, int denominator) {
		_numerator = numerator;
		_denominator = denominator;
	};

public:
	void print() {
		std::cout << _numerator << "/" << _denominator << std::endl;
	}
	Fraction sum(int number) {
		number *= _denominator;
		_numerator += number;
		return Fraction(_numerator, _denominator);
	}
	Fraction sum(Fraction other) {
		int tempNumerator = _numerator * other._denominator;
		int tempNumerator2 = other._numerator * _denominator;
		_numerator = tempNumerator + tempNumerator2;
		_denominator *= other._denominator;
		reduce();
		return Fraction(_numerator, _denominator);
	}
	Fraction difference(int number) {
		number *= _denominator;
		_numerator -= number;
		reduce();
		return Fraction(_numerator, _denominator);
	}
	Fraction difference(Fraction other) {
		int tempNumerator = _numerator * other._denominator;
		int tempNumerator2 = other._numerator * _denominator;
		_numerator = tempNumerator - tempNumerator2;
		_denominator *= other._denominator;
		reduce();
		return Fraction(_numerator, _denominator);
	}
	Fraction multiply(int number) {
		if (number == 0)
			_numerator = _denominator = 0;
		_numerator *= number;
		reduce();
		return Fraction(_numerator, _denominator);
	}
	Fraction multiply(Fraction other) {
		if (other._numerator == 0 || other._denominator == 0) {
			std::cout << "Numerator and denominator can`t be zero" << std::endl;
			exit(-2);
		}
		_numerator *= other._numerator;
		_denominator *= other._denominator;
		reduce();
		return Fraction(_numerator, _denominator);
	}
	Fraction division(int number) {
		if (number == 0) {
			std::cout << "ERROR! You can`t divide by zero!" << std::endl;
			exit(-1);
		}
		if (number < 0) {
			_numerator *= -1;
			_denominator *= -1;
		}
		_denominator *= number;
		reduce();
		return Fraction(_numerator, _denominator);
	}
	Fraction division(Fraction other) {
		if (other._numerator == 0 || other._denominator == 0) {
			std::cout << "Numerator and denominator can`t be zero" << std::endl;
			exit(-2);
		}
		_numerator *= other._denominator;
		_denominator *= other._numerator;
		reduce();
		return Fraction(_numerator, _denominator);
	}
private:
	int NOD(int numerator, int denominator) {
		if (numerator < 0)
			numerator *= -1;
		if (denominator < 0)
			denominator *= -1;
		if (denominator == 0)
			return numerator;
		if (numerator > denominator)
			return NOD(denominator, numerator % denominator);
		else
			return NOD(numerator, denominator % numerator);
	}
	Fraction reduce() {
		int temp = _numerator;
		_numerator /= NOD(_numerator, _denominator);
		_denominator /= NOD(temp, _denominator);
		return Fraction(_numerator, _denominator);
	}
private:
	int _numerator;
	int _denominator;
};


int main()
{
	Fraction fraction1(1, 2);
	fraction1.sum(2);
	fraction1.print();
	fraction1.difference(1);
	fraction1.print();
	fraction1.multiply(-1);
	fraction1.print();
	fraction1.division(-2);
	fraction1.print();

	Fraction fraction2(1, 3);
	Fraction fraction3(1, 16);
	fraction2.sum(fraction3);
	fraction2.print();
	fraction2.difference(fraction3);
	fraction2.print();
	fraction2.multiply(fraction3);
	fraction2.print();
	fraction2.division(fraction3);
	fraction2.print();
}