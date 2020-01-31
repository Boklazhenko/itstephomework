//создать приложение, принимающую через командную строку аргументы.
//если аргументы есть - то записать их в файл
//1 аргумент в 1 строке
//(дописать, если файл существует)
//если аргументов нет - вывести все записи в консоль
//п.с.самый первый аргумент, всегда присутствующий, имя исполняемой программы, учитывать не нужно

#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "");		// чтобы кирилица отображалась
	
	FILE* test;
	fopen_s(&test, "test.txt", "a+");
	
	for (int i = 1; i < argc; ++i) {
		fprintf(test, "%s\n", argv[i]);
	}
	fclose(test);

	if (argc == 1){

		fopen_s(&test, "test.txt", "r");
		char buff[255];
		while (fscanf_s(test, "%s\n", buff, _countof(buff)) != -1){

			cout << buff << std::endl;
		}
		fclose(test);
	}


	system("pause");
	return 0;
}