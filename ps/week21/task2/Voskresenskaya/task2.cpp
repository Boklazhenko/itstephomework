

#include <iostream>
#include "Stek.h"

bool compareChar(char a, char b)
{
	if (a == '{' && b == '}' || a == '(' && b == ')' || a == '[' && b == ']')
		return true;
	else false;
}

int main()
{
	char str[] = "([x - y - z}[x + 2y) - {z + 4x)].";  /*"({x-y-z}*[x+2y]-(z+4x));";*/
	int size = strlen(str) + 1;

	std::cout << size;
	Stek stek;

	for (int i = 0; i < size; ++i)
	{
		if (str[i] == '(' || str[i] == '{' || str[i] == '[')
		{
			stek.push(str[i]);
		}
		if (str[i] == ')' || str[i] == '}' || str[i] == ']')
		{
			if (!(stek.isEmpty()) && compareChar(stek.pop(), str[i]) == 1)
				continue;
			std::cout << "bad line" << std::endl;
			return 0;
		}
	}
	std::cout << "good line" << std::endl;

	return 0;
}


