
#include <iostream>
#include "Fail.h"
#include <io.h>
#include <string.h>
#include <iostream>
#include <stdio.h>
#include <windows.h>

int main()
{
	File txt;
	std::cout << "Please, select preffer number...\n";
	char ch;
	do {

		std::cout << "\n1 - Create\n";
		std::cout << "\n2 - Rename\n";
		std::cout << "\n3 - Move\n";
		std::cout << "\n4 - Show\n";
		std::cout << "\n5 - Remove\n";
		std::cout << "0 - Exit\n\n";
		std::cin >> ch;
		switch (ch)
		{
		case '1':
			std::cout << "\nEnter file name\n";
			char fl[40];
			std::cin >> fl;
			std::cout << "\nEnter access type\n";
			char acc[5];
			std::cin >> acc;
			txt.setFile(fl, acc);
			break;
			case '2':
				if (txt.fileExist())
				{
					std::cout << "\nEnter new file name\n";
					char newName[50];
					std::cin >> newName;
					txt.renameFile(newName);
				}
				else
					std::cout << "\nFile does not exist\n";
				break;
			case '3':
				if (txt.fileExist())
				{
					std::cout << "\nFile does not exist\n";
					std::cout << "\nEnter the path and name file to be copied\n";
					char source[_MAX_PATH];
					std::cin >> source;
					if (_access(source, 00) == -1)
					{
						std::cout << "\nWrong path or file name\n";
						return 1;
					}
					std::cout << "\nEnter the path and name of the new file\n";
					char destination[_MAX_PATH];
					std::cin >> destination;
					if (_access(destination, 00) == 0)
					{
						std::cout << "\nFile already exists\n";
						return 1;
					}
					txt.moveFile(source, destination);
				}
				else
					std::cout << "\nFile does not exist\n";
				break;
			case '4':
				if (txt.fileExist())
				{
					std::cout << "\nEnter access type\n";
					char access[5];
					std::cin >> access;
					txt.openFile(access);
					txt.showFile();
					txt.closeFile();
				}
				else
					std::cout << "\nFile does not exist\n";
				
				break;
			case '5':
			if(txt.fileExist())
				txt.removeFile();
			else
				std::cout << "\nFile does not exist\n";
				break;
			}
		} while (ch != '0');
	return 0;
}


