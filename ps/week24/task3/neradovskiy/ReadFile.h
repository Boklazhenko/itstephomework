#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class ReadFile {
public:
	ReadFile(const char* fileName);
	~ReadFile();
	char* getLine(char* str, size_t size) const;
	int eof() const;
	int strCount() const;		//!!!!			
	void print() const;			//!!!!!!
	void close();
	int haveWord(const char* word);
private:
	FILE* _file;
};