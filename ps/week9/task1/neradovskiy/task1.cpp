#include <iostream>
#include <stdio.h>

int main(int argc, char** argv)
{
	FILE* pFile;
	errno_t err;
	const int size = 256;
	err = fopen_s(&pFile, "TestText.txt", "a+");
	if (err)
		printf_s("File not opened");

	for (int i = 1; i < argc; ++i)
	{
		fprintf(pFile, "%s\n", argv[i]);
	}
	fclose(pFile);
	if (argc == 1)
	{
		err = fopen_s(&pFile, "TestText.txt", "r");
		char buffer[size];
		while (fscanf_s(pFile, "%s\n", buffer, _countof(buffer)) != -1)
		std::cout << buffer << std::endl;

		fclose(pFile);
	}
}
