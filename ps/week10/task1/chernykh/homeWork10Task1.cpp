#include <iostream>

using namespace std;

struct ComplexNumber
{
	double REAL_PART;
	double IMAGINARY_PART;
};

void printComplexNumber(const ComplexNumber complexNumber)
{
	cout << complexNumber.REAL_PART << " " << complexNumber.IMAGINARY_PART << endl;
}

ComplexNumber sumComlexNumbers(const ComplexNumber& firstNumber, const ComplexNumber& secondNumber)
{
	double sumRealPart = firstNumber.REAL_PART + secondNumber.REAL_PART;
	double sumImaginaryPart = firstNumber.IMAGINARY_PART + secondNumber.IMAGINARY_PART;

	ComplexNumber sumComplexNumbers = { sumRealPart, sumImaginaryPart };

	return sumComplexNumbers;
}

ComplexNumber difComlexNumbers(const ComplexNumber& firstNumber, const ComplexNumber& secondNumber)
{
	double difRealPart = firstNumber.REAL_PART - secondNumber.REAL_PART;
	double difImaginaryPart = firstNumber.IMAGINARY_PART - secondNumber.IMAGINARY_PART;

	ComplexNumber difComplexNumbers = { difRealPart, difImaginaryPart };

	return difComplexNumbers;
}

ComplexNumber mulComlexNumbers(const ComplexNumber& firstNumber, const ComplexNumber& secondNumber)
{
	double mulRealPart = firstNumber.REAL_PART * secondNumber.REAL_PART + firstNumber.IMAGINARY_PART * secondNumber.REAL_PART;
	double mulImaginaryPart = firstNumber.REAL_PART * secondNumber.IMAGINARY_PART + firstNumber.IMAGINARY_PART * secondNumber.IMAGINARY_PART;

	ComplexNumber mulComplexNumbers = { mulRealPart, mulImaginaryPart };

	return mulComplexNumbers;
}

ComplexNumber divComlexNumbers(const ComplexNumber& firstNumber, const ComplexNumber& secondNumber)
{
	double divRealPart = (firstNumber.REAL_PART * secondNumber.REAL_PART) + (firstNumber.IMAGINARY_PART * secondNumber.REAL_PART) + (firstNumber.REAL_PART * secondNumber.IMAGINARY_PART) + (firstNumber.IMAGINARY_PART * secondNumber.IMAGINARY_PART);
	double divImaginaryPart = (firstNumber.REAL_PART * secondNumber.REAL_PART) - (firstNumber.IMAGINARY_PART * secondNumber.IMAGINARY_PART);

	ComplexNumber divComplexNumbers = { divRealPart, divImaginaryPart };

	return divComplexNumbers;//в формуле остаётся в правой части числа i, у нас его нет, оставляю так
}

int main()
{
	ComplexNumber firstNumber = { 1,2 };
	ComplexNumber secondNumber = { 5,-4 };

	ComplexNumber sum = sumComlexNumbers(firstNumber, secondNumber);
	ComplexNumber dif = difComlexNumbers(firstNumber, secondNumber);
	ComplexNumber mul = mulComlexNumbers(firstNumber, secondNumber);
	ComplexNumber div = divComlexNumbers(firstNumber, secondNumber);

	printComplexNumber(sum);
	printComplexNumber(dif);
	printComplexNumber(mul);
	printComplexNumber(div);

	return 0;
}