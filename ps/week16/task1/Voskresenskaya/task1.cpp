

#include <iostream>
#include <math.h>
using namespace std;

class Fraction
{
public:
	Fraction()
	{
		cout << "сtor" << endl;
		_numertor = 0;
		_denominator = 1;
	}
	Fraction(int n, int d)
	{
		//Can I immediately do a check for 0?
		/*cout << "сtor" << endl;
		if (d == 0)
		{
			cout << "denominator cannot be equal to 0";
			return;
		}
		else
		{*/
			_numertor = n;
			_denominator = d;
			reduction();
		
	}
	Fraction(const Fraction &a)
	{
		cout << "сtor" << endl;
		_numertor = a._numertor;
		_denominator = a._denominator;
		reduction();
	}
	~Fraction()
	{
		cout << "dtor" << endl;
	}
	int getNumertor()
	{
		return _numertor;
	}
	int getDenominator()
	{
		return _denominator;
	}
	 double getFraction()
	 {
		 return  (double)getNumertor() / getDenominator();
	 }
	void print()
	{
		cout << _numertor << "/" << _denominator  << endl;
	}
	void setFraction(int n, int d)
	{
       if(d!=0)
	   {
		   _numertor = n;
		   _denominator = d;
		   reduction();
	   }
	   else 
	   {
		   cout << "denominator cannot be equal to 0";
		   return;
	   }
	}
	int greatestCommonFactor(int a, int b)
	{
		if (b == 0)
			return a;
		return greatestCommonFactor(b, a%b);
	}
	void reduction()
	{
		if (_numertor == 0 || _denominator == 0)
			return;
		int modNumertor = abs(_numertor);
		int modDenominator = abs(_denominator);
		int greatestCF = greatestCommonFactor(modNumertor, modDenominator);
		_numertor /= greatestCF;
		_denominator /= greatestCF;
	}
	void Summa(Fraction &a)
	{
		if (a._denominator == 0)
		{

			cout << "denominator cannot be equal to 0" << endl;
			return;
		}
		_numertor = _numertor * a._denominator + a._numertor * _denominator;
		_denominator *= a._denominator;
		reduction();

	}
	void Subtraction(Fraction& a)
	{
		if (a._denominator == 0)
		{

			cout << "denominator cannot be equal to 0" << endl;
			return;
		}
		_numertor = _numertor * a._denominator - a._numertor * _denominator;
		_denominator *= a._denominator;
		reduction();
	}
	void Multiplication(Fraction& a)
	{
		if (a._denominator == 0)
		{

			cout << "denominator cannot be equal to 0" << endl;
			return;
		}
		_numertor *= a._numertor;
		_denominator *= a._denominator;
		reduction();
	}
	void Division(Fraction& a)
	{
		if (a._denominator == 0)
		{

			cout << "denominator cannot be equal to 0" << endl;
			return;
		}
		else
		{
			_numertor *= a._denominator;;
			_denominator *= a._numertor;
			reduction();
		}
	}

private:
	int _numertor;
	int _denominator;
};

int main()
{
	Fraction c1(2,3);
	Fraction c2(1, 17);
	c1.Summa(c2);
	c1.print();
	c1.Subtraction(c2);
	c1.print();
	c1.Multiplication(c2);
	c1.print();
	c1.Division(c2);
	c1.print();
	return 0;
}


