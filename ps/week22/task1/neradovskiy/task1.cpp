#include <iostream>
#include "LinkedList.h"
#include "Stack.h"
int main()
{
	Stack test;
	test.push(1);
	test.push(2);
	test.push(3);
	size_t size = test.size();
	for (int i = 0; i < size; ++i) {
		std::cout << test.top() << std::endl;
		test.pop();
	}
}