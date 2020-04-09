#pragma once
#include <iostream>
#include <stdio.h>

class  File
{
public:
	File(const char* fileName);
	File(const char* fileName, const char* text);
	~File();
	void write(const char* str);
	void write(int num);
	void write(double num);
	void write(bool value);
private:
	const char* _fileName;
	FILE* _pFile;
	errno_t _err;
};
