#pragma once
#include <io.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>
class File
{
public:
	
	void setFile(char fileName[], char acc[]);
	FILE* openFile(char acc[]);
	void closeFile();
	void renameFile(char newName[]);
	void moveFile(char source[], char destination[]);
	void removeFile();
	bool fileExist();
	void showFile();
private:
	FILE* _fd=nullptr;
	char _fileName[50] = {};
	wchar_t* charInWchar_t(char source[]);
};


