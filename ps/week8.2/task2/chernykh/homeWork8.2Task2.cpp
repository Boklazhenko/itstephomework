#include <iostream>

using namespace std;

void removeSymbol(char line[], int lineSize, char symbolToRemove)
{
	int newLineSize = 0;
	
	for (int i = 0; i < lineSize; ++i)
	{
		bool isEqual = false;
		if (line[i] == symbolToRemove)
		{
			isEqual = true;
		}
		if (!isEqual)
		{
			++newLineSize;
		}
	}

	char* newLine = new char[newLineSize];
	int newLineIndex = 0;

	for (int i = 0; i < lineSize; ++i)
	{
		bool isEqual = false;
		if (line[i] == symbolToRemove)
		{
			isEqual = true;
		}
		if (!isEqual)
		{
			newLine[newLineIndex] = line[i];
			++newLineIndex;
		}
	}

	cout << newLine << endl;
}

int main()
{
    int lineSize = 13;
    char line [] = "Hello World!";

    removeSymbol(line, lineSize, 'l');

	return 0;
}
