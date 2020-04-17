#include <iostream>

using namespace std;

class Fraction {
private:

	int numerator;
	int denominator;

	int fract(int x, int y)
	{
		if (y == 0)      // проверка на 0
			return x;      
		return fract(y, x % y);
	}

public:
	Fraction() {

	}

	void input(int num, int den)
	{
		numerator = num;
		denominator = den;
	}
	void mult(int x)
	{
		numerator *= x;
		cout << "fraction:  " << numerator << "/" << denominator << endl;
	}
	void div(int x)
	{
		denominator *= x;
		cout << "fraction:  " << numerator << "/" << denominator << endl;

	}

	void sum(int x)
	{
		numerator += (x * denominator);
		cout << "fraction:  " << numerator << "/" << denominator << endl;
	}
	void diff(int x)
	{
		numerator -= (x * denominator);
		cout << "fraction:  " << numerator << "/" << denominator << endl;

	}
	void show()
	{
		cout << "current fraction:  " << numerator << "/" << denominator << endl;
	}
	int transfer()
	{
		return fract(numerator, denominator);
	}
	void redact(int x)
	{
		numerator /= x;
		denominator /= x;
	}

};

int main() {
	int a, b, v;
	char c = 'y';
	cout << "Enter numerator:" << endl;
	cin >> a;
	cout << "Enter denominator:" << endl;
	cin >> b;
	Fraction obj;
	obj.input(a, b);
	do {
		obj.redact(obj.transfer());
		obj.show();
		cout << "1 - Addition" << endl;
		cout << "2 - Deduction" << endl;
		cout << "3 - Multiplication" << endl;
		cout << "4 - Segmentation" << endl;
		cout << "Enter option" << '\n';
		cin >> v;
		switch (v)
		{
		case 1:
			cout << "Enter addendum" << endl;
			cin >> a;
			obj.sum(a);
			break;
		case 2:
			cout << "Enter deduction" << endl;
			cin >> a;
			obj.diff(a);
			break;
		case 3:
			cout << "Enter multiplier" << endl;
			cin >> a;
			obj.mult(a);
			break;
		case 4:
			cout << "Enter divider" << endl;
			cin >> a;
			obj.div(a);
			break;
		default:
			cout << "Enter correct option" << endl;
		}
		cout << "Continue?(y/n)" << endl;
		cin >> c;
	} while (c != 'n');
	return 0;
}