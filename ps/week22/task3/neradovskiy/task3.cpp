#include <iostream>
#include "MyQueue.h"

int main()
{
	MyQueue test;
	test.push(1);
	test.push(2);
	test.push(3);
	size_t size = test.size();
	for (int i = 0; i < size; ++i) {
		std::cout << test.front() << std::endl;
		test.pop();
	}
}