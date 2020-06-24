#include "Fail.h"

void File::setFile(char fileName[], char acc[])
{
	strcpy_s(_fileName,50, fileName);
	
	fopen_s(&_fd, fileName, acc);
	if (!_fd)
	{
		std::cerr << "can't open file: " << fileName << std::endl;
		exit(1);
	}

	const char* string = "test";
	for (int i = 0; i < 6; ++i)
	{
		fputs(string, _fd);
	}

	if (fclose(_fd) == EOF) {
		std::cerr << "can't close file" << std::endl;
		exit(1);
	}
}

FILE* File::openFile(char acc[])
{
	fopen_s(&_fd, _fileName, acc);
	if (!_fd)
	{
		std::cerr << "can't open file: " << _fileName << std::endl;
		exit(1);
	}
	return _fd;
}

void File::closeFile()
{
	if (fclose(_fd) == EOF) 
	{
		std::cerr << "can't close file" << std::endl;
		exit(1);
	}
}

void File::renameFile(char newName[])
{
	if (rename(_fileName, newName) != 0)
	{
		strcpy_s(_fileName, 50, newName);
		std::cout << "Error";
	}
	else std::cout << "Ok";
}

void File::moveFile(char source[], char destination[])
{
	wchar_t* pSource = charInWchar_t(source);
	wchar_t* pDestination = charInWchar_t(destination);
	LPWSTR soursLPWSTR= pSource;
	LPWSTR destinationLPWSTR = pDestination;
	if (int a = CopyFile(soursLPWSTR, destinationLPWSTR, true) != 0)
	{
		std::cout << "File " << "copied" << std::endl;
	}
	else std::cout << "File " << "not  copied" << std::endl;
	removeFile();
	delete pSource;
	delete pDestination;
}

void File::removeFile()
{
	if (remove(_fileName) != 0)
		std::cout << "File not deleted." << std::endl;
	else
	{
		_fd = nullptr;
		std::cout << "File deleted." << std::endl;
	}
}

bool File::fileExist()
{
	return _fd!=nullptr;
}

void File::showFile()
{
	
	char str[100];
	do {
		if (fgets(str, 100, _fd) != nullptr)
			std::cout << str << std::endl;
	} while (!feof(_fd));
}

wchar_t* File::charInWchar_t(char filePath[])
{
	size_t size = strlen(filePath) + 1;
	wchar_t* pName = new wchar_t[size];
	size_t outSize;
	mbstowcs_s(&outSize, pName, size, filePath, size - 1);
	return pName;
}
