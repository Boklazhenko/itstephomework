// Используя указатели и оператор разыменования, обменять местами значения двух переменных.
//

#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Plese, enter the first\n";
	cin >> x;
	cout << "Please, enter the second\n";
	cin >> y;
	int* pX = &x, * pY = &y;
	int temp = *pX;
	*pX = *pY;
	*pY = temp;
	cout << "Now the first number = " << *pX << ", the second number = " << *pY;
}