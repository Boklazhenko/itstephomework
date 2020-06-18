
#include "tree.h"
#include <iostream>
#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	FILE* file;
	fopen_s(&file, "filt1.txt", "a+");
	if (file == nullptr)
	{
		printf("error");
		return 1;
	}
	fseek(file, 0, SEEK_END);//устанавливаем позицию в конец файла
	int lSize = ftell(file); //получаем размер в байтах
	rewind(file);//устанавливаем указатель в конец файла
	char* str = (char*)malloc(sizeof(char)*lSize); // выделить память для хранения содержимого файла
	if (str == nullptr)
	{
		printf("error");
		return 1;
	}
	size_t result = fread (str, 1, lSize, file);
	if (result != lSize)
	{
		printf("error");
		return 1;
	}
	puts(str);//содержимое файла теперь находится в буфере
	fclose(file);

	Tree tree;
	for (int i = 0; i < lSize; ++i)
	{
		tree.insert(str[i], 4);
	}
	char* buff = new char [lSize];
	for (int i = 0; i < lSize; ++i)
	{
		buff[i]= tree.callNumber(str[i]);
	}
	for (int i = 0; i < lSize; ++i)
	{
		std::cout <<  buff[i];
	}
	FILE* file2;
	fopen_s(&file2, "file2.txt", "a+");
	if (file2 == nullptr)
	{
		printf("error");
		return 1;
	}
	fprintf(file2, " %s  \n", buff);
	delete[] buff;
	free(str);
	return 0;
}


