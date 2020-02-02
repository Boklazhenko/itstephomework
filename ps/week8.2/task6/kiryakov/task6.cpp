
#include <iostream>
using namespace std;

int main()
{
	char str[256];
	int counterOfNumbers = 0, counterOfLetters = 0, otherCounter = 0;
	cout << "Input text\n";
	cin.getline(str, 256);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 48 && str[i] <= 57)
		{
			++counterOfNumbers;
		}
		if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
		{
			++counterOfLetters;
		}
		if (str[i] >= 33 && str[i] <= 47 || str[i] >= 58 && str[i] <= 64 ||
			str[i] >= 91 && str[i] <= 96 || str[i] >= 123 && str[i] <= 126)
			++otherCounter;
	}

	cout << "The amount of digits in your sentence is " << counterOfNumbers << endl;
	cout << "The amount of letters in your sentence is " << counterOfLetters << endl;
	cout << "The amount of other simbols in your sentence is " << otherCounter << endl;
}