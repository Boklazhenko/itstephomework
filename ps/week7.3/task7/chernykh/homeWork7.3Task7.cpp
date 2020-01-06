#include <iostream>

using namespace std;

int main()
{
	double firstNumber, secondNumber;
	double* pFirstNumber = &firstNumber;
	double* pSecondNumber = &secondNumber;

	cout << "Please enter first number: " << endl;
	cin >> *pFirstNumber;
	cout << "Please enter second number: " << endl;
	cin >> *pSecondNumber;

	cout << "\t\tMENU" << endl
		<< "1 - Add two numbers ( + )" << endl
		<< "2 - Subtract two numbers ( - )" << endl
		<< "3 - Divide two numbers ( / )" << endl
		<< "4 - Multiply two numbers ( * )" << endl
		<< "5 - Remainder of division of two numbers ( % )" << endl;

	int option;
	double result = 0;
	double* pResult = &result;

	cin >> option;

	if (option <= 0 || option >= 6)
	{
		cout << "Wrong data! Please enter from 1 to 5" << endl;
		return 1;
	}

	switch (option)
	{
	case 1:
	{
		*pResult = *pFirstNumber + *pSecondNumber;
		cout << *pFirstNumber << " + " << *pSecondNumber << " = " << *pResult << endl;
		break;
	}
	case 2:
	{
		*pResult = *pFirstNumber - *pSecondNumber;
		cout << *pFirstNumber << " - " << *pSecondNumber << " = " << *pResult << endl;
		break;
	}
	case 3:
	{
		*pResult = *pFirstNumber / *pSecondNumber;
		cout << *pFirstNumber << " / " << *pSecondNumber << " = " << *pResult << endl;
		break;
	}
	case 4:
	{
		*pResult = *pFirstNumber * *pSecondNumber;
		cout << *pFirstNumber << " * " << *pSecondNumber << " = " << *pResult << endl;
		break;
	}
	case 5:
	{
		*pResult = (int)*pFirstNumber % (int)*pSecondNumber;
		cout << *pFirstNumber << " % " << *pSecondNumber << " = " << *pResult << endl;
		break;
	}
	}
}
