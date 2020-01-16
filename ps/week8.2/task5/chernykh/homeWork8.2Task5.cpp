#include <iostream>

using namespace std;

void calcSymbolInLine(char* line, int size, char symbolToCalc)
{
	int count = 0;
	for (int i = 0; i < size; ++i)
	{
		if (line[i] == symbolToCalc)
		{
			++count;
		}
	}

	cout << "The line has symbol " << "\"" << symbolToCalc << "\" " << count << " times";
}

int main()
{
	int size = 0;
	char line[256], symbolToCalc;
	cout << "Enter your line: \n";
	cin.getline(line, 256);
	cout << "Enter which symbol needed to calculate?" << endl;
	cin >> symbolToCalc;

	while (line[size])
	{
		++size;
	}

	calcSymbolInLine(line, size, symbolToCalc);

	return 0;
}
