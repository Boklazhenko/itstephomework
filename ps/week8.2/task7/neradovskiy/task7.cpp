#include <iostream>
#include <stdio.h>

int main()
{
	char line[] = "H e l l o W o r l d !\n";
	int size = strlen(line);
	std::cout << line << std::endl;
	for (int i = 0; line[i] != '\0'; ++i) {
		if (line[i] == ' ')
			line[i] = '\t';
	}
	std::cout << line;
}