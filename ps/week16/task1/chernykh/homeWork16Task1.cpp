#include <iostream>

using namespace std;

int GCD(int x, int y)//Greatest common divisor
{
	if (y == 0)
	{
		return x;
	}

	return GCD(y, x % y);
}

int SCM(int n1, int n2)//Smallest common multiple
{
	return n1 * n2 / GCD(n1, n2);
}

class Fraction
{
public:
	Fraction()
	{
		_pNumerator = new int(0);
		_pDenominator = new int(0);
	}

	Fraction(int numerator, int denominator)
	{
		_pNumerator = new int(numerator);
		_pDenominator = new int(denominator);
	}

	Fraction(const Fraction& other)
	{
		_pNumerator = new int(*other._pNumerator);
		_pDenominator = new int(*other._pDenominator);
	}

	~Fraction()
	{
		delete _pNumerator;
		delete _pDenominator;
	}

	int getNumerator()
	{
		return *_pNumerator;
	}

	int getDenominator()
	{
		return *_pDenominator;
	}

	void setNumerator(int num)//num - Numerator
	{
		_pNumerator = new int(num);
	}

	void setDenominator(int den)//den - Denominator
	{
		_pDenominator = new int(den);
	}

	void print()
	{
		cout << *_pNumerator << "/" << *_pDenominator << endl;
	}

	Fraction sum(const Fraction& fraction)
	{
		Fraction newFraction;

		if (fraction._pDenominator == _pDenominator)
		{
			newFraction._pNumerator = new int(*_pNumerator + *fraction._pNumerator);
			newFraction._pDenominator = fraction._pDenominator;

			return newFraction;
		}

		int* scm = new int(SCM(*fraction._pDenominator, *_pDenominator));

		int* additionalFactorFirstFraction = new int(*scm / *_pDenominator);
		int* additionalFactorSecondFraction = new int(*scm / *fraction._pDenominator);

		int* newNumeratorFirstFraction = new int(*additionalFactorFirstFraction * *_pNumerator);
		int* newDenominatorFirstFraction = new int(*additionalFactorFirstFraction * *_pDenominator);

		int* newNumeratorSecondFraction = new int(*additionalFactorSecondFraction * *fraction._pNumerator);
		int* newDenominatorSecondFraction = new int(*additionalFactorSecondFraction * *fraction._pDenominator);

		newFraction._pNumerator = new int(*newNumeratorFirstFraction + *newNumeratorSecondFraction);
		newFraction._pDenominator = new int(*newDenominatorFirstFraction);

		delete scm;
		delete additionalFactorFirstFraction;
		delete additionalFactorSecondFraction;
		delete newNumeratorFirstFraction;
		delete newDenominatorFirstFraction;
		delete newNumeratorSecondFraction;
		delete newDenominatorSecondFraction;

		return newFraction.reductionFraction();
	}

	Fraction dif(const Fraction& fraction)//difference
	{
		Fraction newFraction;

		if (fraction._pDenominator == _pDenominator)
		{
			newFraction._pNumerator = new int(*_pNumerator - *fraction._pNumerator);
			newFraction._pDenominator = fraction._pDenominator;

			return newFraction;
		}

		int* scm = new int(SCM(*fraction._pDenominator, *_pDenominator));

		int* additionalFactorFirstFraction = new int(*scm / *_pDenominator);
		int* additionalFactorSecondFraction = new int(*scm / *fraction._pDenominator);

		int* newNumeratorFirstFraction = new int(*additionalFactorFirstFraction * *_pNumerator);
		int* newDenominatorFirstFraction = new int(*additionalFactorFirstFraction * *_pDenominator);

		int* newNumeratorSecondFraction = new int(*additionalFactorSecondFraction * *fraction._pNumerator);
		int* newDenominatorSecondFraction = new int(*additionalFactorSecondFraction * *fraction._pDenominator);

		newFraction._pNumerator = new int(*newNumeratorFirstFraction - *newNumeratorSecondFraction);
		newFraction._pDenominator = new int(*newDenominatorFirstFraction);

		delete scm;
		delete additionalFactorFirstFraction;
		delete additionalFactorSecondFraction;
		delete newNumeratorFirstFraction;
		delete newDenominatorFirstFraction;
		delete newNumeratorSecondFraction;
		delete newDenominatorSecondFraction;

		return newFraction.reductionFraction();
	}

	Fraction mul(const Fraction& fraction)//multiply
	{
		Fraction newFraction;

		newFraction._pNumerator = new int(*_pNumerator * *fraction._pNumerator);
		newFraction._pDenominator = new int(*_pDenominator * *fraction._pDenominator);

		return newFraction.reductionFraction();

	}

	Fraction div(const Fraction& fraction)//divide
	{
		Fraction newFraction;

		newFraction._pNumerator = new int(*_pNumerator * *fraction._pDenominator);
		newFraction._pDenominator = new int(*_pDenominator * *fraction._pNumerator);

		return newFraction.reductionFraction();
	}

private:
	Fraction reductionFraction()
	{
		Fraction newFraction(*_pNumerator, *_pDenominator);

		int* gcd = new int(GCD(*newFraction._pNumerator, *newFraction._pDenominator));

		if (*gcd < 0)
		{
			*gcd = -*gcd;
		}

		if (*newFraction._pNumerator % *gcd == 0 && *newFraction._pDenominator % *gcd == 0)
		{
			int* cutNumerator = new int(*newFraction._pNumerator / *gcd);
			int* cutDenominator = new int(*newFraction._pDenominator / *gcd);

			newFraction._pNumerator = new int(*cutNumerator);
			newFraction._pDenominator = new int(*cutDenominator);

			delete cutNumerator;
			delete cutDenominator;

			return newFraction;
		}

		delete gcd;

		return newFraction;
	}

private:
	int* _pNumerator;
	int* _pDenominator;
};

int main()
{
	Fraction f1(3, 15);
	Fraction f2(4, 18);

	Fraction f3 = f1.sum(f2);
	Fraction f4 = f1.dif(f2);
	Fraction f5 = f1.mul(f2);
	Fraction f6 = f1.div(f2);

	f3.print();
	f4.print();
	f5.print();
	f6.print();

	return 0;
}