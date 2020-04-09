#include "File.h"

File::File(const char* fileName)
{
	_err = fopen_s(&_pFile, fileName, "a+");
	if (_err)
		std::cout << "File not open " << _err << std::endl;
}
File::File(const char* fileName, const char* text)
{
	_err = fopen_s(&_pFile, fileName, "a+");
	if (_err)
		std::cout << "File not open " << _err << std::endl;
	else {
		write(text);
	}
}
File::~File()
{
	fclose(_pFile);
}

void File::write(const char* str)
{
	fprintf(_pFile, "%s", str);
}

void File::write(int num)
{
	fprintf(_pFile, "%d", num);
}

void File::write(double num)
{
	fprintf(_pFile, "%f", num);
}

void File::write(bool value)
{
	fprintf(_pFile, "%s", value ? "true" : "false");
}
