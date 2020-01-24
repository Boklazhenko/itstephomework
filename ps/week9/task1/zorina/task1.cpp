//создать приложение, принимающую через командную строку аргументы.
//если аргументы есть - то записать их в файл 1 аргумент в 1 строке(дописать, если файл существует)
//если аргументов нет - вывести все записи в консоль
//
//п.с.самый первый аргумент, всегда присутствующий, имя исполняемой программы, учитывать не нужно

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>


int main(int argc, char** argv)
{
	FILE* test;
	system("chcp 1251");//чтобы можно было русский записывать
	system("cls");//каждый раз чистит консоль
	test = fopen("test.txt", "a+");

	for (int i = 1; i < argc; ++i) {
		fprintf(test, "%s\n", argv[i]);
	}
	fclose(test);
	if (argc == 1)
	{
		test =fopen("test.txt", "r");
		char buff[255];
		while (fscanf(test, "%s\n", buff) != -1)
		{
			std::cout << buff << std::endl;
		}
		 fclose(test);
	}
	return 0;
}