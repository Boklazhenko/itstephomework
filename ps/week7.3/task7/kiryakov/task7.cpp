#include <iostream>
using namespace std;

enum Operation
{
	Exit = 0,
	Plus = 1,
	Minus = 2,
	Multiplication = 3,
	Division = 4
};
void calculatePlus(double* number1, double* number2);
void calculateMinus(double* number1, double* number2);
void calculateMultiplication(double* number1, double* number2);
void calculateDivision(double* number1, double* number2);

int main()
{
	double userNumber1;
	double userNumber2;
	int intUserChoice;
	enum Operation enumUserChoice;
	cout << "This program is a simple calculator." << endl;
	double* pUserNumber1 = &userNumber1;
	double* pUserNumber2 = &userNumber2;
	do
	{
		cout << "Enter first number: ";
		cin >> userNumber1;
		cout << "Enter seconf number: ";
		cin >> userNumber2;

		cout << "Select action:" << endl <<
			"0 = Exit" << endl <<
			"1 = Plus" << endl <<
			"2 = Minus" << endl <<
			"3 = Multiplication" << endl <<
			"4 = Division" << endl;
		cin >> intUserChoice;
		enumUserChoice = (enum Operation) intUserChoice;

		switch (enumUserChoice)
		{
		case Exit:
			cout << "You want to quit" << endl;
			break;
		case Plus:
			calculatePlus(pUserNumber1, pUserNumber2);
			break;
		case Minus:
			calculateMinus(pUserNumber1, pUserNumber2);
			break;
		case Multiplication:
			calculateMultiplication(pUserNumber1, pUserNumber2);
			break;
		case Division:
			calculateDivision(pUserNumber1, pUserNumber2);
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
		}
	} while (enumUserChoice != Exit);
}
void calculatePlus(double* number1, double* number2)
{
	cout << *number1 << " + " << *number2 << " = " << *number1 + *number2 << endl;
}

void calculateMinus(double* number1, double* number2)
{
	cout << *number1 << " - " << *number2 << " = " << *number1 - *number2 << endl;
}

void calculateMultiplication(double* number1, double* number2)
{
	cout << *number1 << " * " << *number2 << " = " << *number1 * *number2 << endl;
}

void calculateDivision(double* number1, double* number2)
{
	if (*number2 == 0)
	{
		cout << "Error.At zero can not be divided." << endl;
	}
	else
	{
		cout << *number1 << " / " << *number2 << " = " << *number1 / *number2 << endl;
	}
}