#include <iostream>
#include <stdio.h>
#include "manager.h"

enum WhatToDo { Create, Delete, Rename, Transfer, Print, Exit };

int main()
{
	while (true) {

		char fileName[20];
		std::cout << "Enter the file`s name\n";
		std::cin.getline(fileName, 20);
		std::cout << "What do you want to do?\n"
			"If you want to create a file press 0\n"
			"If you want to delete a file press 1\n"
			"If you want to rename a file press 2\n"
			"If you want to transfer a file press 3\n"
			"If you want to print the text the file contains press 4\n"
			"If you want to exit press 5\n" << std::endl;
		int WhatToDo;
		std::cin >> WhatToDo;
		switch (WhatToDo)
		{
		case Exit:
			return 0;
		default:
			std::cout << "Wrong input, try 0 to 5\n";
			break;
		case Create:
			createNewFile(fileName);
			break;
		case Delete:
			deleteFile(fileName);
			break;
		case Rename:
			char newFileName[20];
			std::cout << "Enter new file`s name\n";
			std::cin >> newFileName;
			renameFile(fileName, newFileName);
			break;
		case Transfer:
			char newDir[100];
			std::cout << "Enter new file`s derictory, please use double '\'\n";
			std::cin >> newDir;
			transferFile(fileName, newDir);
			break;
		case Print:
			printFile(fileName);
		}
	}
}