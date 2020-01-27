#define _CRT_SECURE_NO_WARNINGS // Без этого ругается на небезопасную функцию fopen()
#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv)
{
	FILE* test;
	test = fopen("test.txt", "a+");

	for (int i = 1; i < argc; ++i) {
		fprintf(test, "%s\n", argv[i]);
	}
	fclose(test);
	
	if (argc == 1)
	{
		test = fopen("test.txt", "r");
		char arguments[100];
		while (fscanf(test, "%s\n", arguments) != -1) // Не понимаю это сравнение и как меняется значение
		{
			cout << arguments << endl;
		}
		fclose(test);
	}
	return 0;
}

