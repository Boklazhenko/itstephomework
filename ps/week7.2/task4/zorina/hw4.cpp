//Написать рекурсивную функцию нахождения степени числа.
//

#include <iostream>
using namespace std;

double raiseToPower(double basis, double indicator)
{
	if (indicator == 0)
		return 1;
	if (indicator < 0)    //для возведения в отрицательную степень
	{
		basis = 1 / basis;
		indicator *= -1;
	}
	return basis * raiseToPower(basis, indicator - 1);
}

int main()
{
	cout << raiseToPower(5, -2);
}