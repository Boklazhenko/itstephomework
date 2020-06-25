#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class ReadFile {
public:
	ReadFile(const char* fileName);
	~ReadFile();
	char* getLine(char* str, size_t size) const;
	int eof() const;
	int strCount() const;		//moves the cursor
	void print() const;			//moves the cursor
	void close();
	char* getWord(char* buffWord);
	int getChar();
private:
	FILE* _file;
};