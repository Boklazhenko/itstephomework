#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>


int main()
{
	const int size = 20;
	const int strLen = 1000;
	char toSearch[size];
	std::cout << "Input the word, you want to find" << std::endl;
	std::cin.getline(toSearch, size);
	size_t counter = 0;
	char buff[strLen];
	FILE* fl = fopen("smText.txt", "r");
	if (fl == nullptr) {
		std::cerr << "File isn`t opend";
		exit(-1);
	}
	while (!feof(fl)) {
		char buff[strLen];
		if (fgets(buff, strLen, fl) != nullptr) {
			char* temp = buff;
			while ((temp = strstr(temp, toSearch)) != nullptr) {
				++counter;
				temp += strlen(toSearch);
			}
		}
	}
	std::cout << counter;
	fclose(fl);
}