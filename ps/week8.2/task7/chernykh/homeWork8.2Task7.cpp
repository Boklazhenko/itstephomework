#include <iostream>

using namespace std;

void changeSpaceOnTab(char* line, int size)
{
	for (int i = 0; i < size; ++i)
	{
		if (line[i] == ' ')
		{
			line[i] = '\t';
		}
	}
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

	changeSpaceOnTab(line, size);

	cout << line << endl;

	return 0;
}
