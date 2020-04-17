#define _CRT_SECURE_NO_WARNINGS
#include "file.h"

File::File(string fileName) {
	_pFile = fopen(fileName.c_str(), "a+");
	if (_pFile == nullptr)
		std::cerr << "File is not opened!";
}

File::~File() {
	fclose(_pFile);
}

void File::write(int num) {
	fprintf(_pFile, "%d ", num);
}

void File::write(const char* str) {
	fprintf(_pFile, "%s ", str);
}

void File::write(double doubles) {
	fprintf(_pFile, "%f ", doubles);
}

void File::write(bool bools) {
	fprintf(_pFile, "%s ", (!bools ? "true" : "false"));
}

Gauge::Gauge(string operation) : _operation(move(operation)), _started(steady_clock::now()) {}

Gauge::~Gauge() {
	cout << _operation << ": elapsed " << duration_cast<milliseconds>(steady_clock::now() - _started).count() << " mls" << endl;
}