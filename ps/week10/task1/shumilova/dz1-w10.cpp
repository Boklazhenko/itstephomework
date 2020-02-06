// Создайте структуру, описывающую комплексное число. 
// Реализуйте арифметические операции с комплексными числами: 
// сумму, разность, умножение, деление.
//sum, difference, multiplication, division.

#include <iostream>
using namespace std;

struct Complex_struct
{
	double a;
	double b;
};

void Show(Complex_struct first, Complex_struct second)
{
	cout << "First number: ";
	cout << first.a << " + " << first.b << "\n\n";
	cout << "Second number: ";
	cout << second.a<<" + " << second.b << "\n\n";
}

Complex_struct sum(Complex_struct first, Complex_struct second)
{
	Complex_struct result = { first.a + second.a , first.b + second.b };
	return result;
}

Complex_struct dif(Complex_struct first, Complex_struct second)
{
	Complex_struct result = { first.a - second.a , first.b - second.b };
	return result;
}

Complex_struct mul(Complex_struct first, Complex_struct second)
{
	Complex_struct result = { first.a * second.a , first.b * second.b };
	return result;
}

Complex_struct div(Complex_struct first, Complex_struct second)
{
	Complex_struct result = { first.a / second.a , first.b / second.b };
	return result;
}

int main()
{
	Complex_struct first = { 3,4 };
	Complex_struct second = { 5,6 };
	
	Show(first, second);

	cout << "Choose operation: ";
	char operation;
	cin >> operation;
	cout << "\n";
	
	switch (operation)
	{
	case '+':
		cout << "sum = " << sum(first, second).a << "+" << sum(first, second).b;
		break;

	case '-':
		cout << "difference = " << dif(first, second).a << "+" << dif(first, second).b;
		break;

	case '*':
		cout << "multiplication = " << mul(first, second).a << "+" << mul(first, second).b;
		break;

	case '/':
		cout << "division = " << div(first, second).a << "+" << div(first, second).b;
		break;

	default:
		cout << "error!";
	}
	cout << "\n\n";
}

