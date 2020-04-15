#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, char* argv[])
{
	FILE *file;
	fopen_s(&file, "text1.txt", "a+");
	if (file == NULL)
	{
		printf("error");
		return 1;
	}
	for (int i = 1; i < argc; ++i)
	{
		fprintf(file, "%s\n", argv[i]);
	}
	char str[126] = " ";
	if (argc == 1)
	{
		while (!feof(file))
		{
			if (fgets(str, 126, file))
			{
				printf("%s", str);
			}
		}
	}
	fclose(file);
	system("pause");
	return 0;
}
