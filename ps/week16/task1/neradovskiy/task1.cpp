#include <iostream>
#include <math.h>

class Fraction {
public:
	Fraction() {
		_numenator = 0;
		_denominator = 0;
	}
	Fraction(int numenator, int denominator = 1) {
		_numenator = numenator;
		_denominator = denominator;
	}
	Fraction(const Fraction& other) {
		_numenator = other._numenator;
		_denominator = other._denominator;
	}
public:
	void print() {
		std::cout << _numenator << " / " << _denominator << std::endl;
	}

	int getWhole() {
		if (_denominator == 0)
			return 0;
		return	_numenator / _denominator;
	}
	void addtion(Fraction other) {
		if (_denominator == other._denominator)
			_numenator += other._numenator;
		toCommonDenom(other);
		_numenator += other._numenator;
		reduction();
	}
	void subtraction(Fraction other) {
		other._numenator = -other._numenator;
		addtion(other);
	}
	void multiply(Fraction other) {
		_numenator *= other._numenator;
		_denominator *= other._denominator;
	}
	void division(Fraction other) {
		_numenator *= other._denominator;
		_denominator *= other._numenator;
	}
	void exponent(int exp) {
		if (exp < 0) {
			int temp = _numenator;
			_numenator = _denominator;
			_denominator = temp;
			exp = -exp;
		}
		_numenator = pow(_numenator, exp);
		_denominator = pow(_denominator, exp);
	}

	void reduction() {
		if (_numenator != 0) {
			int i = _numenator;
			if (i < 0)
				i = -i;
			while ((_numenator % i != 0 || _denominator % i) != 0 && i > 0)
			{
				--i;
			}
			if (i > 1) {
				if (_numenator < 0 || _denominator < 0) {
					_numenator = -_numenator;
					_denominator = -_denominator;
				}
				_numenator /= i;
				_denominator /= i;
			}
		}
		else
		{
			_denominator = 0;
		}

	}
private:
	void toCommonDenom(Fraction& other) {
		int denomMultipler = other._denominator;
		int otherDenomMultipler = _denominator;
		_numenator *= denomMultipler;
		_denominator *= denomMultipler;
		other._numenator *= otherDenomMultipler;
		other._denominator *= otherDenomMultipler;

	}

private:
	int _numenator;
	int _denominator;
};

int main()
{
	Fraction a(2, 5);
	std::cout << "A:" << std::endl;
	a.print();
	Fraction b = a;
	std::cout << "b:" << std::endl;
	b.print();
	Fraction c(1, 10);
	b.reduction();
	b.print();
	std::cout << "c:" << std::endl;
	c.print();
	c.addtion(a);
	c.print();
	Fraction d(-5, 10);
	d.addtion(b);
	std::cout << "d:" << std::endl;
	d.print();
	Fraction e(5, 10);
	e.subtraction(b);
	std::cout << "e:" << std::endl;
	e.print();
	e.multiply(d);
	e.print();
	d.division(e);
	std::cout << "d:" << std::endl;
	d.print();
	d.reduction();
	d.print();
	Fraction y(1, 2);
	y.exponent(2);
	std::cout << "y:" << std::endl;
	y.print();
	y.exponent(-2);
	y.print();
}