#include <iostream>
#include "ReadFile.h"

int main()
{
	ReadFile rFile("Test.txt");
	std::cout << rFile.haveWord("undergrowth") << std::endl;
}