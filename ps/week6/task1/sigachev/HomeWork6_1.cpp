// Написать функцию, которая принимает два параметра : основание степени и показатель
// степени, и вычисляет степень числа на основе полученных данных
#include <iostream>
using namespace std;

double degreeNumber(int number, int degree) {
	double result = 1;
	for (int i = 0; i < degree; ++i) {
		result *= number;
	}
	return result;
}
int main()
{
	int number, degree;
	cout << "Enter number:  ";
	cin >> number;
	cout << "Enter degree:  ";
	cin >> degree;
	cout << "Result = " << degreeNumber(number, degree) << endl;
	return 0;
}