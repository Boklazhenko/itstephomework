#include <iostream>

using namespace std;

int seatchDegreeNumberR(int number, int degree)
{
	if (degree < 1)
	{
		return 1;
	}

	return number * seatchDegreeNumberR(number, degree - 1);
}

int main()
{
	int number = 3;
	int degreeNumber = 4;

	cout << "Number " << number << " in " << degreeNumber << " degree = " << seatchDegreeNumberR(number, degreeNumber);
}
