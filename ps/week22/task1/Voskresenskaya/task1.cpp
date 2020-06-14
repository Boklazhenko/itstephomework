#include "stack.h"
#include <iostream>

int main()
{

	Stack<int> stack;
	stack.push(5);
	stack.push(7);
	stack.push(77);
	stack.push(11);
	stack.push(18);
	stack.print();
	stack.pop();
	stack.pop();
	stack.print();
	std::cout << stack.count();

}


