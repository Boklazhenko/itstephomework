#include <iostream>
#include "ComplexNum.h"

int main()
{
	ComplexNum a(2, 5);
	a.print();
	ComplexNum b;
	b.print();
	ComplexNum c = a + b;
	c.print();
	ComplexNum d = a - b;
	d.print();
	ComplexNum e = a * b;
	e.print();
	ComplexNum f = a / a;
	f.print();
	
	
	
	
	
}