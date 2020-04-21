#include <iostream>
#include "complexNumber.h"

int main()
{
	ComplexNumber firstNumber(1,2);
	ComplexNumber secondNumber(5,-4);

	ComplexNumber sum = firstNumber + secondNumber;
	ComplexNumber dif = firstNumber - secondNumber;
	ComplexNumber mul = firstNumber * secondNumber;
	ComplexNumber div = firstNumber / secondNumber;

	sum.print();
	dif.print();
	mul.print();
	div.print();

	return 0;
}
