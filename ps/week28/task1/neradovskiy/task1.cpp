#include <iostream>
#include "LinkedList.h"

int main()
{
	LinkedList<const char*> text;
	try {
		const char* str = "Hello";
		text.add(str);
		const char* str2 = " ";
		text.add(str2);
		const char* str3 = "World";
		text.add(str3);
		const char* str4 = nullptr;
		text.add(str4);
	}

	catch (const std::exception& ex)
	{
		std::cout << ex.what() << std::endl;
	}

	size_t size = text.size();
	for (int i = 0; i < size; ++i) {
		std::cout << text.front();
		text.pop();
	}
	std::cout << std::endl;

	try
	{
		text.front();
		text.pop();
	}
	catch (const std::exception& err)
	{
		std::cout << err.what() << std::endl;
	}
}