#include <iostream>

using namespace std;

int degreeNumber(int number, int degree)
{
	int result = 1;
	for (int i = 0; i < degree; ++i)
	{
		result *= number;
	}
	return result;
}

double degreeNumber(double number, int degree)
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

	if (degree <= -1)
	{
		cout << "Error, enter pisitive degree!";
		return 1;
	}

	cout << "Number " << number << " in " << degree << " degree = " << degreeNumber(number, degree);

	return 0;
}
