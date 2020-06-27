#define _CRT_SECURE_NO_WARNINGS
#include "FileTxt.h"

uint8_t FileTxt::len = 1000;


FileTxt::FileTxt(const char* name, const char* modeopen) {
	_file = fopen(name, modeopen);
	if (_file == nullptr) {
		std::cerr << "File isn`t opend";
		exit(-1);
	}
}
FileTxt::~FileTxt() {
	fclose(_file);
}
char* FileTxt::getLine(char* buff) {
	return fgets(buff, len, _file);
}
void FileTxt::writeLine(char* string) {
	fputs(string, _file);
}
bool FileTxt::endOfFile() {
	return feof(_file);
}
