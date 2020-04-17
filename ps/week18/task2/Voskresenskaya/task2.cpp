
#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
	Complex a(10, 12);
	Complex b(22, 16);
	Complex с = a + b;
	с.print();
	Complex d = a - b;
	d.print();
	Complex e = a * b;
	e.print();
	Complex m = a - b;
	m.print();
}