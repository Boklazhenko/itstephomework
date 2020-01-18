#include <iostream>

using namespace std;

void calcWordsInLine(char* line, int size)
{
	int wordCount = 1;
	for (int i = 0; i < size; ++i)
	{
		if (line[i] == ' ')
		{
			++wordCount;
		}
	}

	cout << "Your line has " << wordCount << " words!" << endl;
}

int main()
{
	int size = 0;
	char line[256];
	cout << "Enter your line: \n";
	cin.getline(line, 256);

	while (line[size])
	{
		++size;
	}

	calcWordsInLine(line, size);

	return 0;
}
