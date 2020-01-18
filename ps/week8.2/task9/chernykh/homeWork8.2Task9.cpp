#include <iostream>

using namespace std;

bool isPalindrome(char* line, int size)
{
	int countEqualSymbol = 0, countNotEqualSymbol = 0;
	for (int i = 0, j = size - 1; i < j; ++i, --j)
	{
		line[i] == line[j] ? ++countEqualSymbol : ++countNotEqualSymbol;
	}

	if (countEqualSymbol > countNotEqualSymbol)
	{
		return true;
	}
	else
	{
		return false;
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

	if (isPalindrome(line, size))
	{
		cout << "Your line is palindrome!" << endl;
	}
	else
	{
		cout << "Your line isn't palindrome!" << endl;
	}

	return 0;
}
