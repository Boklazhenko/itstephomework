#include <iostream>
#include "BinaryTree.h"
#include <fstream>

int main()
{
	BinaryTree<char> cipher;
	BinaryTree<char> decoder;
	for (char i = 'A'; i <= 'Z'; ++i) {
		cipher.add(i);
		decoder.addDecoded(i);
	}
	for (char x = 'a'; x <= 'z'; ++x) {
		cipher.add(x);
		decoder.addDecoded(x);
	}


	std::ifstream source("TestText.txt");
	std::ofstream destanation("Dest.txt");

	while (!source.eof()) {
		char buff[1024];
		char temp;
		source.getline(buff, 1024);
		for (int i = 0; i < strlen(buff); ++i) {
			temp = cipher.getValue(buff[i]);
			if (temp == -1) {
				destanation << buff[i];
				std::cout << buff[i];
			}
			else
			{
				destanation << temp;
			}


		}
		destanation << '\n';
	}
	source.close();
	destanation.close();
	std::ifstream encoded("Dest.txt");
	std::ofstream decoded("Decod.txt");

	while (!encoded.eof()) {
		char buff[1024];
		char temp;
		encoded.getline(buff, 1024);
		for (int i = 0; i < strlen(buff); ++i) {
			temp = decoder.getValue(buff[i]);
			if (temp == -1) {
				decoded << buff[i];
				std::cout << buff[i];
			}
			else
			{
				decoded << temp;
			}
		}
		decoded << '\n';
	}
	encoded.close();
	decoded.close();
}