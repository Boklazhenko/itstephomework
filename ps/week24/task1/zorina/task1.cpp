#include <iostream>
#include <queue>
#include <string>
#include "FileTxt.h"

//const int strLen = 1000;

int main()
{
	std::queue<char*> myQueue;
	FileTxt file("smText.txt", "r");
	while (!file.endOfFile()) {
		uint8_t size = file.len;
		char* buff = new char[size];
		file.getLine(buff);
		myQueue.push(buff);
	}
	FileTxt newFile("newText.txt", "w");
	uint16_t count = myQueue.size() - 1;
	for (int i = 0; i < count; ++i) {
		char* temp = myQueue.front();
		newFile.writeLine(temp);
		myQueue.pop();
		delete[] temp;
	}

	/*FILE* fl = fopen("smText.txt", "r");
if (fl == nullptr) {
	std::cerr << "File isn`t opend";
	exit(-1);
}
while (!feof(fl)) {
	char* buff = new char[strLen];
	fgets(buff, strLen, fl);
	myQueue.push(buff);
}

fclose(fl);

FILE* fl2 = fopen("newText.txt", "w");
if (fl == nullptr) {
	std::cerr << "File isn`t opend";
	exit(-1);
}
uint16_t count = myQueue.size()-1;
for (int i = 0; i <count; ++i) {
	char* temp = myQueue.front();
	fputs(temp, fl2);
	myQueue.pop();
	delete[] temp;
}
fclose(fl2);*/
}