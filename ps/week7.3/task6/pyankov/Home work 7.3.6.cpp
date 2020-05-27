#include <iostream>
using namespace std;

void exchangingValues(int* variableOne, int* variableTwo);

int main()
{
	int a = 1;
	int b = 2;
	int* pA = &a;
	int* pB = &b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	exchangingValues(pA, pB);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cin.get();
	system("pause");
	return 0;
}

void exchangingValues(int* variableOne, int* variableTwo)
{
	int x = *variableTwo;
	*variableTwo = *variableOne;
	*variableOne = x;

}
