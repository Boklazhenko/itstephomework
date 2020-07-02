#include <iostream>
#include "ReadFile.h"
#include "PrintFIle.h"

int main()
{
	const char* readFile = "Test.txt";
	ReadFile rFile(readFile);
	const size_t size = 255;
	char str[size];
	const char* destFile = "Dest.txt";
	PrintFile dFile(destFile);
	int strCount = rFile.strCount() - 1;
	while (strCount > 0)
	{
		rFile.getLine(str, size);
		dFile.add(str);
		--strCount;
	}

	std::cout << std::endl;
}