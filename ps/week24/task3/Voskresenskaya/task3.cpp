#include <iostream>
#include<cstdio>
#include <string.h>

const char forRead[] = "fileForRead.txt";
const char addRead[3] = "a+";

FILE* openFile(const char  fileName[], const char acc[])
{
	FILE* fd;
	fopen_s(&fd, fileName, acc);
	if (!fd)
	{
		std::cerr << "can't open file: " << fileName << std::endl;
		exit(1);
	}

	return fd;
}

void closeFile(FILE* fd) {
	if (fclose(fd) == EOF) {
		std::cerr << "can't close file" << std::endl;
		exit(1);
	}
}

int main()
{
	char word[30];
	std::cin >> word;
	FILE* failForRead = openFile(forRead, addRead);
	int counter = 0;
	char str[100];
	do {
		if (fgets(str, 100, failForRead) != nullptr)
		{
			const char* p = str;
			while ((p =strstr(p, word)) != nullptr)
			{
				++counter;
				p += strlen(word);
			}
			
		}
	} while (!feof(failForRead));
	closeFile(failForRead);

	std::cout << counter;
}


