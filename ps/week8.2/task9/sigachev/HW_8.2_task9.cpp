//Дана строка символов.Необходимо проверить является ли эта строка палиндромом.

#include <iostream>
using namespace std;

int main()
{
	int size, counter = 0;
	char line[] = "pull up if i pull up";		// проверку на регистр не стал делать
	size = strlen(line);
	for (int i = 0, j = size - 1; i < size;) {
		if (line[i] == line[j]) {
			++counter;
			++i; --j;
			continue;
		}
		if (line[i] == ' ') {
			++i;
			++counter;
		}
		if (line[j] == ' ') {
			--j;
		}
	}
	cout << "String is" << (counter == size ? " " : " not ") << "palindrome." << endl;
}