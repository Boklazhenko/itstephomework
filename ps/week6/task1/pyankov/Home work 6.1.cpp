

#include <iostream>
using namespace std;

double calculateDegree(double basis, double indicator);

int main()
{
	int a, b;

	cout << "input basis" << endl;
	cin >> a;
	cout << endl
		<< "input indicator" << endl;
	cin >> b;
	cout << endl
		<< calculateDegree(a, b) << endl;

}


double calculateDegree(double basis, double indicator)
{
	double degree = basis;


	for (indicator; indicator > 1; --indicator)
	{
		basis *= degree;
	}

	return basis;

}