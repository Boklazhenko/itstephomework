#include "PrintFIle.h"

PrintFile::PrintFile(const char* fileName)
{
	_file = fopen(fileName, "w");
	if (!_file)
		std::cerr << "File not open" << std::endl;
}

PrintFile::~PrintFile()
{
	fclose(_file);
}

void PrintFile::add(const char* str)
{
	fputs(str, _file);
}

void PrintFile::add(char simb)
{
	fputc(simb, _file);
}

void PrintFile::close()
{
	fclose(_file);
}
