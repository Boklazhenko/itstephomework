#include <iostream>
using namespace std;

int findMax(int* pA, int* pB) {
	if (*pA > * pB)
		return *pA;
	else
		return *pB;
}

int main()
{
	int a = 5;
	int b = 5;
	cout << findMax(&a, &b);
}