#include <iostream>
using namespace std;

int main()
{

	setlocale(LC_ALL, "Russian");
	int A;
	int i;
	cout << "A=" << endl;
	cin >> A;
	cout << "Числа на которые " << A << " делится без остатка:" << endl;
	for (i = 1; i <= A; i++)
	{

		if (A % i == 0) {

			cout << i << endl;
		}

	}
}

