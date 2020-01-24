//создать приложение, принимающую через командную строку аргументы.
//
//если аргументы есть - то записать их в файл
//1 аргумент в 1 строке
//(дописать, если файл существует)
//если аргументов нет - вывести все записи в консоль



#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv) {
	FILE* f;
	
	f = fopen("test.txt", "a+");

	for (int i = 1; i < argc; ++i) {
		fprintf(f, "%s\n", argv[i]);
	}
	fclose(f);
	if (argc == 1)
	{

		f = fopen("test.txt", "r+");
		char buff[255];
		int age;
		while (fscanf(f, "%s%d\n", buff, &age) != -1) {

			cerr << buff << " " << age << endl;
		};
		fclose(f);

	}
	return 0;
}