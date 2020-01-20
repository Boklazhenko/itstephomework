#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char** argv)
{
	FILE* pFile;
	errno_t err;

	err = fopen_s(&pFile, "TestFile.txt", "a+");

	for (int i = 1; i < argc; ++i)
	{
		fprintf(pFile, "%s\n", argv[i]);
	}

	fclose(pFile);

	if (argc == 1)
	{
		err = fopen_s(&pFile, "TestFile.txt", "r");
		char buff[255];

		while (fscanf_s(pFile, "%s\n", buff, _countof(buff)) != -1)
		{
			cout << buff << endl;
		}

		fclose(pFile);
	}

	system("pause");

	return 0;
}
