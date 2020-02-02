// Понял как работать со сруктурами, но не понял как работать с комплексными числами.

#include <iostream>
using namespace std;

struct ComplexNumber
{
	int realPart;
	int imaginaryPart;
};

void printSumComplexNumber(const ComplexNumber& one, const ComplexNumber& two)
{

	int sum1 = (one.imaginaryPart + two.imaginaryPart);
	int sum2 = (one.realPart + one.realPart);
	cout << "Sum = " << sum2 << "+" << sum1 << "i" << endl;
}

void printSubtraction(const ComplexNumber& one, const ComplexNumber& two)
{

	int sub1 = (one.imaginaryPart - two.imaginaryPart);
	int sub2 = (one.realPart - two.realPart);
	cout << "Subtraction = " << sub2 << "+" << sub1 << "i" << endl;
}

void printMultiplication(const ComplexNumber& one, const ComplexNumber& two)
{
	int multStepOne = (one.realPart * two.realPart) + (one.imaginaryPart * two.realPart)
		+ (one.realPart * two.imaginaryPart) + (one.imaginaryPart * two.imaginaryPart);
	cout << "Multiplication = " << multStepOne << endl;

}

int main()
{

	ComplexNumber num1 = { 2,4 };
	ComplexNumber num2 = { 2,4 };


	printSumComplexNumber(num1, num2);
	printSubtraction(num1, num2);
	printMultiplication(num1, num2 );


}
