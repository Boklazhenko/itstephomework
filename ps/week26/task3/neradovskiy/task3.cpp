#include <iostream>
#include "Child2.h"

int main()
{
	Base<std::string, std::string> base("Hello ", "base" );
	std::cout << base.getValue() << base.getOtherValue() << std::endl;
	Child<std::string, std::string, std::string, std::string> child("Child", " hello");
	std::cout << child.getValue() << child.getOtherValue() << std::endl;
	Child2<std::string, std::string, std::string, std::string, std::string, std::string> child2("Hello from ", "Child2");
	std::cout << child2.getValue() << child2.getOtherValue() << std::endl;
}