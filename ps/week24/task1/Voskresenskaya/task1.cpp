

#include <iostream>
#include<cstdio>
#include <string.h>


const char forRead[] = "fileForRead.txt";
const char forWrite[] = "fileForWrite.txt";
const char addRead[3] = "a+";
const char read[2] = "w";
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

int countStr(const char  fileName[], const char acc[])
{
	FILE* failTmp = openFile(fileName, acc);
	int counter = 0;
	char str[100];
	do {
		if (fgets(str, 100, failTmp) != nullptr)
			++counter;
	} while (!feof(failTmp));
	closeFile(failTmp);
	return counter;
}

int main()
{
	int size = countStr(forRead, addRead);
	int index = 0;
	FILE* failForRead = openFile(forRead, addRead);
	FILE* failForWrite = openFile(forWrite, read);
	char str[100];
	while (index < size - 1)
	{
		fgets(str, 100, failForRead);
		fprintf(failForWrite, " %s  \n", str);
		++index;
	}
	closeFile(failForRead);
	closeFile(failForWrite);
}







