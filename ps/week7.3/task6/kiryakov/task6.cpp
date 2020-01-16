#include <iostream>
using namespace std;

void exchangeNumbers(int* number1, int* number2);
void printNumbers(int* number1, int* number2);

int main()
{
	int userNumber1;
	int userNumber2;
	cout << "This program exchanges the values of two input variables." << endl <<
		"Enter number A: ";
	cin >> userNumber1;
	cout << "Enter number B: ";
	cin >> userNumber2;

	int* pUserNumber1 = &userNumber1;
	int* pUserNumber2 = &userNumber2;

	printNumbers(pUserNumber1, pUserNumber2);
	exchangeNumbers(pUserNumber1, pUserNumber2);
	printNumbers(pUserNumber1, pUserNumber2);
}

void exchangeNumbers(int* number1, int* number2)
{
	int buffer = *number1;
	*number1 = *number2;
	*number2 = buffer;
	cout << "Changes are made" << endl;
}

void printNumbers(int* number1, int* number2)
{
	cout << "Number A = " << *number1 << endl <<
		"Number B = " << *number2 << endl;
}