#include <iostream>
using namespace std;

void deleteSimbFull(char str[], int& size, char simb) {
	int count = 0;
	for (int i = 0; str[i] != '\0'; ++i) {
		if (str[i] == simb) {
			--size;
			continue;
		}
		str[count++] = str[i];
	}
	str[count] = '\0';							
}

int main()
{
	int size = 13;
	char line[13] = "Home Work";
	char simb = 'o';
	deleteSimbFull(line, size, simb);
	cout << line << endl;
}