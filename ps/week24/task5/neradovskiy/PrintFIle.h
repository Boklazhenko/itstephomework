#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
class PrintFile
{
public:
	PrintFile(const char* fileName);
	~PrintFile();
	void add(const char* str);
	void add(char simb);
	void close();

private:
	FILE* _file;
};