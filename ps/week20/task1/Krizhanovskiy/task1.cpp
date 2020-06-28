//	Написать класс, реализующий работу с комплексными числами. Обязательно 
//	реализовать подсчет количества объектов класса(используя статическую 
//	переменную-член класса), а также статическую функцию, которая 
//	показывает количество объектов

#include <iostream>
#include "cplx.h"

void main()
{
	cplx a(1, 2);
	cplx b(3, 4);
	a.show();
	b.show();
	cplx c = a;
	c.show();
	std::cout << cplx::getCtr() << " objects exist" << std::endl;
	cplx sum = a + b;
	sum.show();
	cplx dif = a - b;
	dif.show();
	cplx prod = a * b;
	prod.show();
	cplx div = a / b;
	div.show();
	std::cout << cplx::getCtr() << " objects exist";
}