#define _CRT_SECURE_NO_WARNINGS
#include "manager.h"
#include <iostream>
#include <stdio.h>
#include <io.h>
#include <cstringt.h>

void createNewFile(const char* fileName) {
	FILE* file = fopen(fileName, "w");
	if (file == nullptr) {
		std::cerr << "File isn`t opend";
		exit(-1);
	}
	fclose(file);
}

void deleteFile(const char* fileName) {
	if (remove(fileName) != 0)
		std::cout << "Error!\n Couldn't remove file. Please, check filename...\n";
	else
		std::cout << "File is successfully deleted \n";
}

void renameFile(char* fileName, const char* newFileName) {
	if (rename(fileName, newFileName) != 0)
		std::cout << "Error!\n Couldn't rename file. Please, check old and new filenames...\n\n";
	else
		std::cout << "File is successfully renamed\n\n";
}

void transferFile(const char* fileName, const char* dirToTransfer) {
	int size =strlen(dirToTransfer)+  strlen(fileName) + 3; ;
	char* dest = new char[size];
	sprintf(dest, "%s%s%s%s", dirToTransfer, "\\","\\", fileName);
	FILE* file = fopen(dest, "w");
	fclose(file);
	copyFile(fileName, dest);
	deleteFile(fileName);
	delete[]dest;
}

void printFile(const char* fileName) {
	FILE* src = fopen(fileName, "r");
	if (src == nullptr) {
		std::cerr << "File isn`t opend";
		exit(-1);
	}
	while (!feof(src)) {
		char temp[1000];
		std::cout << fgets(temp, 1000, src);
	}
	fclose(src);
}

bool copyFile(const char* source, const char* destination) {
	const int size = 65536;
	FILE* src, * dest;
	if (!(src = fopen(source, "rb"))) {
		return false;
	}
	int handle = _fileno(src);
	char* data = new char[size];
	if (!data) {
		return false;
	}
	if (!(dest = fopen(destination, "wb"))) {
		delete[]data;
		return false;
	}    int realsize;
	while (!feof(src)) {
		realsize = fread(data, sizeof(char), size, src);
		fwrite(data, sizeof(char), realsize, dest);
	}
	fclose(src);
	fclose(dest);
	return true;
}