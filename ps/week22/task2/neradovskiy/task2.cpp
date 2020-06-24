#include <iostream>
#include "LinkedList.h"


int main()
{
	LinkedList test;
	test.add(777);
	test.add(333);
	test.add(777);
	test.print();
	std::cout << "---------------------" << std::endl;
	LinkedList testClone = test.getClone();
	testClone.print();
	std::cout << "---------------------" << std::endl;
	testClone.add(888);
	testClone.add(777);
	testClone.add(2);
	testClone.print();
	std::cout << "---------------------" << std::endl;
	LinkedList testMultiply = test + testClone;
	testMultiply.print();
	std::cout << "---------------------" << std::endl;
	LinkedList testPlus = test + testClone;
	testPlus.print();
}