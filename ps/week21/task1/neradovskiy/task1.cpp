#include <iostream>
#include "MyStack.h"

void print(const char* str, size_t size) {
	for (int i = 0; i < size; ++i)
		std::cout << str[i];
	std::cout << std::endl;
}

bool isBackBracket(char a, char b) {
	return a == '{' && b == '}' || a == '(' && b == ')' || a == '[' && b == ']';
}




int main()		// Algorithm by Voskresenskaya
{
	const char* str = "x-y-z]x+2y-z+4x;";
	int size = strlen(str) + 1;

	MyStack<char> strSteck;
	size_t index;
	for (int i = 0; i < size; ++i)
	{
		if (str[i] == '(' || str[i] == '{' || str[i] == '[')
		{
			strSteck.push(str[i]);
			index = i;
		}
		if (str[i] == ')' || str[i] == '}' || str[i] == ']')
		{
			if (!strSteck.empty() && isBackBracket(strSteck.top(), str[i])) {
				strSteck.pop();
				continue;
			}
			for (int x = 0; x < i; ++x)
				std::cout << str[x];
			return 0;
		}
	}
	if (!strSteck.empty()) {
		print(str, index);
		return 0;
	}

	if (str[size - 2] != ';') {
		print(str, size - 2);
		return 0;
	}

	std::cout << "good line" << std::endl;
	return 0;
}