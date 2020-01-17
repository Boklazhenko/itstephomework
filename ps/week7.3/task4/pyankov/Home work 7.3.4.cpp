#include <iostream>


using namespace std;
int maxNumber(int* number1, int* number2);

int main()
{

	int a = 5;
	int b = 10;

	int* pA = &a;
	int* pB = &b;

	cout << maxNumber(pA, pB);

	cin.get();
	system("pause");
	return 0;
}

int maxNumber(int* number1, int* number2)
{
	if (*number1 > * number2)
		return *number1;

	else return *number2;

}
