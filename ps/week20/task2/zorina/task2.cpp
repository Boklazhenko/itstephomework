#include <iostream>
#include"smartPointer.h"
using namespace std;

int main()
{
	SmartPointer ptr1(new Test(111));
	ptr1->print();
	SmartPointer ptr2(new Test(3453));
	ptr2->print();
	ptr1 = ptr2;
	ptr1->print();
	
}

