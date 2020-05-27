#include <iostream>
#include "Pointr.h"
#include "test.h"
#include <memory>
int main()
{

	smartPoitr p1(new Test(555));
	std::cout << p1.ptr()<< endl;
	smartPoitr p2(p1);
	std::cout << p2.ptr() << endl;
	std ::cout << p2->Value() << endl;
	p1->setValue(777);
	std::cout << p2->Value() << endl;
	std::cout << (*p2).Value() << endl;
	smartPoitr p3(new Test(888));
	p3 = p2;
	std::cout << p2->Value() << endl;
	std::cout << p3.ptr() << endl;
	p1.printThis();
	p2.printThis();
	p3.printThis();
	/*Test *tst=new Test(777) ;
    shared_ptr<Test> ptr1(tst);*/
	
}
