

#include <iostream>
#include <cstdio>
#include <list>     
#include <iterator>
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
	std::list <int> listForStrLen;
	FILE* failForRead = openFile(forRead, addRead);
	char str[100];
	do {
		if (fgets(str, 100, failForRead) != nullptr)
		{
			int value = strlen(str);
			listForStrLen.push_back(value);
		}
	} while (!feof(failForRead));
	closeFile(failForRead);

	int max = listForStrLen.front();
	for (auto it = listForStrLen.begin(); it != listForStrLen.end(); ++it)
		if (max < *it) max = *it;
	std::cout << "max: " << max << std::endl;



}


