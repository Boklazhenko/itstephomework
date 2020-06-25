#include <iostream>
#include <queue>
#include <string>
#include "FileTxt.h"

//const uint8_t strLen = 1000;

int main()
{
	std::queue<char*> myQueue;
	FileTxt file("smText.txt", "r");
	uint16_t length = 0;
	while (!file.endOfFile()) {
		uint16_t temp = 0;
		char buff[1000];
		file.getLine(buff);
		temp = strlen(buff);
		if (temp > length)
			length = temp;
	}
	std::cout << length;


	/*FILE* fl = fopen("smText.txt", "r");
	if (fl == nullptr) {
		std::cerr << "File isn`t opend";
		exit(-1);
	}
	uint16_t length = 0;
	while (!feof(fl)) {
		uint16_t temp = 0;
		char buff[strLen];
		fgets(buff, strLen, fl);
		temp = strlen(buff);
		if (temp > length)
			length = temp;
	}
	std::cout << length;

	fclose(fl);*/

}
