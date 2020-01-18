// Подсчитать количество слов во введенном предложении
//

#include <iostream>
using namespace std;

int main()
{
	int size = 0, counter = 0;
	char str[256];
	cout << "Input the text\n";
	cin.getline(str, 256);
	for (int i = 0; str[i] != '\0'; ++i) {
		++size;
	}
	for (int i = 0; i < size; ++i)
	{
		if (str[i - 1] != ' ' && (str[i] == ' ' || str[i + 1] == '\0'))
			++counter;

	}
	cout << counter;
}