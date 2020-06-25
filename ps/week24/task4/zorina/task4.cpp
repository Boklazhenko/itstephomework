#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;

int main()
{
	queue<char*> myQueue;
	const int size = 20;
	const int strLen = 1000;
	char toSearch[size];
	char toChange[size];
	std::cout << "Input the word, you want to be changed" << std::endl;
	std::cin >> toSearch;
	std::cout << "Input the new word" << std::endl;
	std::cin >> toChange;
	char buff[strLen];

	FILE* fl = fopen("smTxt.txt", "r");
	if (fl == nullptr) {
		std::cerr << "File isn`t opend";
		exit(-1);
	}
	while (!feof(fl)) {
		char* buff = new char[strLen];
		fgets(buff, strLen, fl);

		int count = 0;
		int temporalIndex = 0;
		for (int i = 0; i < strlen(buff) + 1; i++) {
			if (buff[i] != ' ' && buff[i] != '.' && buff[i] != '?' && buff[i] != ',' && buff[i] != '!' && buff[i] != '\n' && buff[i] != '\0') {
				count++;
			}
			else {
				char* temp = new char[count + 1]{};
				int x = 0;
				for (int j = temporalIndex; j < i; j++, x++) {
					temp[x] = buff[j];
				}
				if (strcmp(temp, toSearch) == 0)
					myQueue.push(toChange);
				else
					myQueue.push(temp);
				count = 0;
				temporalIndex = i + 1;
			}
		}
	}
	fclose(fl);
	remove("smTxt.txt");
	FILE* fl2 = fopen("smTxt.txt", "w");
	if (fl == nullptr) {
		std::cerr << "File isn`t opend";
		exit(-1);
	}
	int qSize = myQueue.size();
	for (int i = 0; i < qSize; ++i) {
		fputs(myQueue.front(), fl2);
		fputs(" ", fl2);
		myQueue.pop();
	}
	fclose(fl2);
}