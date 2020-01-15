// Написать примитивный калькулятор, пользуясь только указателями.
//

#include <iostream>

using namespace std;

enum calc { Sum = '+', Differens = '-', Multiplication = '*', Division = '/' };

double calculate(double x, double y, char  calc)
{
	double* pX = &x, * pY = &y;
	char* pCalc = &calc;
	if (*pCalc == Sum)
		return *pX + *pY;
	if (*pCalc == Differens)
		return *pX - *pY;
	if (*pCalc == Multiplication)
		return *pX * *pY;
	if (*pCalc == Division)
		return *pX / *pY;
}

int main()
{
	double x, y;
	char calc;
	cout << "Enter the first number\n";
	cin >> x;
	cout << "\nPress +,-,*,/\n";
	cin >> calc;
	cout << "\nEnter the second number\n";
	cin >> y;
	cout << "\nResult = " << calculate(x, y, calc);
}