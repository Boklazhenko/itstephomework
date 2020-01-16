#include <iostream>

using namespace std;

void removeSymbol(char line[], int size, int indexToDelete)
{
	--size;
	char* newLine = new char[size];

	for (int i = 0; i < size; ++i)
	{
		if (i == indexToDelete - 1)
		{
			continue;
		}
		newLine[i] = line[i];

		cout << newLine[i];
	}
}

int main()
{
	int arraySize = 13;
	char hello[] = "Hello world";
	removeSymbol(hello, arraySize, 5);

	return 0;
}
