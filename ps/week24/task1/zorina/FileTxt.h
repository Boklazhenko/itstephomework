#pragma once
#include <iostream>
#include <stdio.h>

class FileTxt {
public:
	static uint8_t len;
	FileTxt(const char* name, const char* modeopen);
	~FileTxt();
	char* getLine(char* buff);
	void writeLine(char* string);
	bool endOfFile();

private:
	FILE* _file;
};