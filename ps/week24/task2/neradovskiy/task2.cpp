#include <iostream>
#include "ReadFile.h"

int main()
{
	ReadFile rFile("Test.txt");
	const size_t size = 255;
	char tempStr[size];
	int strSize = 0;
	while (!rFile.eof())
	{
		rFile.getLine(tempStr, size);
		int tempSize = strlen(tempStr);
		if (tempSize > strSize)
			strSize = tempSize;
	}
	std::cout << strSize << std::endl;
}