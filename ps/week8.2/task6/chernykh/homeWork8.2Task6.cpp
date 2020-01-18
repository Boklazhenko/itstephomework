#include <iostream>

using namespace std;

void defineCharacter(char* line, int size)
{
	int letterCount = 0, digitCount = 0, otherSymbolCount = 0;
	for (int i = 0; i < size; ++i)
	{
			if (line[i] >= 33 && line[i] <= 47 || line[i] >= 58 && line[i] <= 64 ||
				line[i] >= 91 && line[i] <= 96 || line[i] >= 123 && line[i] <= 126)
			{
				++otherSymbolCount;
			}
			if (line[i] >= 48 && line[i] <= 57)
			{
				++digitCount;
			}
			if (line[i] >= 65 && line[i] <= 90 || line[i] >= 97 && line[i] <= 122)
			{
				++letterCount;
			}
	}
	cout << "Your line has " << otherSymbolCount << " other symbols!" << endl;
	cout << "Your line has " << digitCount << " digit symbols!" << endl;
	cout << "Yout line has " << letterCount << " letter symbols!" << endl;
}

int main()
{
    setlocale(LC_ALL, "ru");

	/*for (int i = 0; i <= 255; i++) //все ASCII символы
	{
		cout << "Code = " << i << "\t" << "char = " << (char)i << endl;
	}*/

	int size = 0;
	char line[256];
	cout << "Enter your line: \n";
	cin.getline(line, 256);

	while (line[size])
	{
		++size;
	}

	defineCharacter(line, size);

	return 0;
}