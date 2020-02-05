// создать приложение, принимающую через командную строку аргументы.
//если аргументы есть - то записать их в файл 1 аргумент в 1 строке
//(дописать, если файл существует) 
//если аргументов нет - вывести все записи в консоль
//п.с.самый первый аргумент, всегда присутствующий, 
//имя исполняемой программы, учитывать не нужно


#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	FILE* f = fopen("hw9.txt", "a+");

	fprintf(f, "Home Work 9", "a+");

	for (int i = 1; i < argc; ++i)
	{
		fprintf(f, "%s\n", argv[i]);
	}
	fclose(f);
	if (argc == 1)
	{
		f = fopen("hw9.txt", "r");
		char buff[255];
		while (fscanf(f, "%s\n", buff) != -1)
		{
			cout << buff << endl;
		}
		fclose(f);
	}
}