#include <iostream>
#include "ReadFile.h"
#include "PrintFIle.h"

const char* CREATE_FLAG = "-create";
const char* DELETE_FLAG = "-delete";
const char* RENAME_FLAG = "-rename";
const char* MOVE_FLAG = "-move";
const char* PRINT_FLAG = "-print";
const char* HELP_FLAG = "-help";


int main(int argc, char* argv[])
{
	for (int i = 0; i < argc; ++i) {
		if (strcmp(argv[1], CREATE_FLAG) == 0)
			if (argv[2] != nullptr) {
				std::string fileName(argv[2]);
				PrintFile printFile(fileName.c_str());
				std::cout << "Create file " << fileName << std::endl;
				return 0;
			}
		if (strcmp(argv[1], DELETE_FLAG) == 0)
			if (argv[2] != nullptr) {
				std::string FileName(argv[2]);
				remove(FileName.c_str());
				std::cout << FileName << " deleted" << std::endl;
				return 0;
			}
		if (strcmp(argv[1], RENAME_FLAG) == 0) {

			if (argv[2] != nullptr && argv[3] != nullptr) {
				std::string oldName(argv[2]);
				std::string newName(argv[3]);
				rename(oldName.c_str(), newName.c_str());
				std::cout << oldName << " name change to " << newName << std::endl;
				return 0;
			}
		}

		if (strcmp(argv[1], MOVE_FLAG) == 0) {
			if (argv[2] != nullptr && argv[3] != nullptr) {
				std::string fileName(argv[2]);
				std::string moveFile(argv[3]);
				ReadFile rFile(fileName.c_str());
				PrintFile printFIle(moveFile.c_str());
				while (!rFile.eof())
				{
					printFIle.add(rFile.getChar());
				}
				rFile.close();
				printFIle.close();
				remove(fileName.c_str());
				std::cout << "Moving complited" << std::endl;
				return 0;
			}

		}

		if (strcmp(argv[1], PRINT_FLAG) == 0)
			if (argv[2] != nullptr) {
				std::string fileName(argv[2]);
				ReadFile rFile(fileName.c_str());
				while (!rFile.eof())
				{
					std::cout << rFile.getChar();
				}
				std::cout << std::endl;
				return 0;
			}

		if (strcmp(argv[1], HELP_FLAG) == 0) {
			std::cout << "Enter: [ " << CREATE_FLAG << " file name ] " << " for the create file" << std::endl;
			std::cout << "Enter: [ " << DELETE_FLAG << " file name ] " << " for the delete file" << std::endl;
			std::cout << "Enter: [ " << RENAME_FLAG << " file name  new file name] " << " for the rename file" << std::endl;
			std::cout << "Enter: [ " << MOVE_FLAG << " full file name new file directory and file name] " << " for move file" << std::endl;
			std::cout << "Enter: [ " << PRINT_FLAG << " file name ] " << " for the print to dispay file" << std::endl;
			return 0;
		}
	}
	std::cout << "This is file manager create by Neradovskiy N" << std::endl;
	std::cout << "Enter -help for to display help" << std::endl;
	return 0;
}