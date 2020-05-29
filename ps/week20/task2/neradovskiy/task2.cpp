#include <iostream>
#include "SmartPtr.h"

int main()
{
	SmartPtr pTest(new ForTest(222));
	pTest->print();
	SmartPtr pTest2(new ForTest(777));
	pTest2->print();
	pTest = pTest2;
	pTest->print();

}