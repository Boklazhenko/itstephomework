#include <iostream>


int main()
{
	const int size = 256;
	char line[size];
	gets_s(line);
	int wordCount = 0;
	for (int i = 0; i < size; ++i) 					
		if (line[i] == ' ' || line[i] == '\0')
			++wordCount;
	
	std::cout << "Number words per line: " << wordCount << std::endl;
}