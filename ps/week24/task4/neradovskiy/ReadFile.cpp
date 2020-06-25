#include "ReadFile.h"

ReadFile::ReadFile(const char* fileName)
{
	_file = fopen(fileName, "r");
	if (!_file)
		std::cerr << "File not open" << std::endl;
}

ReadFile::~ReadFile()
{
	fclose(_file);
}

char* ReadFile::getLine(char* str, size_t size) const
{
	return fgets(str, size, _file);
}

int ReadFile::eof() const
{
	return feof(_file);
}

int ReadFile::strCount() const
{
	int strCount = 0;
	fseek(_file, 0, SEEK_SET(0));
	while (!feof(_file))
	{
		char str[255];
		fgets(str, 255, _file);
		++strCount;
	}
	fseek(_file, 0, SEEK_SET(0));
	return strCount;
}

void ReadFile::print() const
{
	fseek(_file, 0, SEEK_SET(0));
	char str[255];
	while (!feof(_file))
	{
		std::cout << getLine(str, 255);
	}
	std::cout << std::endl;
}

void ReadFile::close()
{
	fclose(_file);
}

char* ReadFile::getWord(char* buff)
{
	int index = 0;
	while (!eof())
	{
		char temp = getc(_file);
		if (temp != ' ' && temp != ',' && temp != '.' && temp != '\n')
		{
			buff[index++] = temp;
		}
		else
		{
			buff[index] = '\0';
			return buff;
		}
	}
	return nullptr;
}

int ReadFile::getChar()
{
	return fgetc(_file);
}
