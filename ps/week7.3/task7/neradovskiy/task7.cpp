#include <iostream>

double calc(double* pA, double* pB, char action) {
	if (action == '+')
		return (*pA) + (*pB);
	else if (action == '-')
		return (*pA) - (*pB);
	else if (action == '/')
		return (*pA) / (*pB);
	else if (action == '*')
		return (*pA) * (*pB);
	else
		return -999;				//Error
}

int main()
{


	std::cout << "Enter num: ";
	double a, b;
	std::cin >> a;
	std::cout << "Enter action (+, - , * , /): ";
	char action;
	std::cin >> action;
	if (action == '+' || action == '-' || action == '*' || action == '/') {	//пытался сделать через != но что то ругается IDE`шка
		std::cout << "Enter num: ";
		std::cin >> b;
		if (action == '/' && b == 0) {
			std::cout << "Error, cannot be divided by zero\n";
		}
		else
		std::cout << "Result is: " << calc(&a, &b, action);
	}
	else
	std::cout << "Error, please enter the correct action\n";
}