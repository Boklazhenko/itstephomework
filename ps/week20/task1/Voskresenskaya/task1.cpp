

#include <iostream>
#include "complex.h"
using namespace  std;

int main()
{
	Complex clas1;
	Complex  clas2 (1.2,2.2);
	Complex  clas3 (2.2, 2.2);
	cout << Complex::getCountClassComplex()<<endl;
	Complex clas4= clas2 + clas3;
	cout << clas4 << endl;
	cout << Complex::getCountClassComplex() << endl;
	Complex clas5 = clas4 + clas2;
	cout << clas5 << endl;
	cout << Complex::getCountClassComplex() << endl;
	Complex clas6 = clas5 * clas4;
	cout << clas6 << endl;
	cout << Complex::getCountClassComplex() << endl;
	Complex clas7 = clas6 /clas5;
	cout << clas7 << endl;
	cout << Complex::getCountClassComplex() << endl;
	bool comp = clas6 == clas7;
	cout << comp << endl;
	Complex class8;
	class8 = clas7;
	cout << Complex::getCountClassComplex() << endl;
	cout << class8 << endl;
	Complex class9;
	cout << Complex::getCountClassComplex() << endl;
	cin >> class9;
	cout << class9 << endl;
	cout << Complex::getCountClassComplex() << endl;
	return 0;
}


