#include <iostream>
#include <string.h>
#include <stdio.h>

const char forRead[] = "fileForRead.txt";
const char addRead[3] = "r+";

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
	char replac[30];
	std::cin >> word;
	std::cin >> replac;
	FILE* failForRead = openFile(forRead, addRead);
	char str[100];
	int index = 0, lengthStr = 0;
	do {
		if (fgets(str, 100, failForRead) != nullptr)
		{
			const char* p = str;

			while ((p = strstr(str, word)) != nullptr)
			{
				int size = strlen(str) + 1;
				int count = 0;
				for (int i = 0; i < size; ++i)
				{
					if (p != &str[i])
						++count;
					else break;
				}

				fseek(failForRead, count + lengthStr, SEEK_SET);
				fputs(replac, failForRead);
				fseek(failForRead, lengthStr, SEEK_SET);
				fgets(str, 100, failForRead);
			}
			lengthStr += strlen(str) + 1;
		}
	} while (!feof(failForRead));

	closeFile(failForRead);
}
