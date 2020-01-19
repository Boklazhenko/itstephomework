// Написать функцию, которая удаляет из строки символ с заданным номером.


#include <iostream>
#include<iterator>
using namespace std;

void deleteSymbolByIndex(char* s, size_t i)
{
	size_t length_string = strlen(s);

	for (; i < length_string; ++i)
		s[i] = s[i + 1];
	cout << s << "\n\n";
}
int main()
{
	char s[] = "adfgjklnm";
	cout << s << "\n\n";
	deleteSymbolByIndex(s, 2);
}


