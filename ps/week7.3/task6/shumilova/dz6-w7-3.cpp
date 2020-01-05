//6 (неделя 7.3)
//Используя указатели и оператор разыменования, обменять местами значения двух переменных.
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cout << "Enter 1 number: \n";
	cin >> n ;
	cout << "Enter 2 number: \n";
	cin >> m;
	int* pn = &n;
	int* pm = &m;
	int* x = pn;
	cout << "1 number = " << *pm <<endl;
	cout << "2 number = " << *x << endl;
}