#include <iostream>

using namespace std;

int calcDegreeNumber(int number, int degree)
{
	int result = 1;
	for (int i = 0; i < degree; ++i)
	{
		result *= number;
	}
	return result;
}

double calcDegreeNumber(double number, int degree)
{
	double result = 1.0;
	for (int i = 0; i < degree; ++i)
	{
		result *= number;
	}
	return result;
}

int main()
{
	double number = 0;
	int degree = 0;
	cout << "Enter number: " << endl;
	cin >> number;
	cout << "Enter degree: " << endl;
	cin >> degree;

	cout << "Number " << number << " in " << degree << " degree = " << calcDegreeNumber(number, degree);

	return 0;
}
