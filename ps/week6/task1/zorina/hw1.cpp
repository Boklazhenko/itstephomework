// Написать функцию, которая принимает два параметра: основание степени и показатель степени,
//и вычисляет степень числа на основе полученных данных
//

#include <iostream>
using namespace std;
double raiseToPower(double basis, double indicator)
{
	double res = 1.0;
	if (indicator == 0)    //возведение в степень 0
		res = 1;
	if (indicator < 0)    //для возведения в отрицательную степень
	{
		basis = 1 / basis;
		indicator *= -1;
	}
	if(indicator>0)
	{
		for (double x = 0; x < indicator; ++x)
			res *= basis;
	}
	return res;
}

int main()//проверка работы функции (все равно писала, чтоб проверить, жалко удалять :-))
{
	/*double basis, indicator;
	cout << "Input the degree basis\n";
	cin >> basis;
	cout << "Input the degree indicator\n";
	cin >> indicator;
	cout << basis << " raised to the " << indicator << " power is " << raiseToPower(basis, indicator);*/
}