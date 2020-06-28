#include <iostream>
#include "BinaryTree.h"
#include <fstream>

int main()
{
	char temp;
	BinaryTree<char> test;

	std::ifstream readFile("TestText.txt");

	if (!readFile) {
		std::cout << "File not open" << std::endl;
		return 1;
	}
	while (!readFile.eof())
	{
		readFile.get(temp);
		test.add(temp);
	}
	readFile.close();
	std::ofstream statisticFile;
	statisticFile.open("Statistic.txt");

	statisticFile << "Simbols:  " << test.getSumValue() << std::endl;
	char simb = '\n';
	statisticFile << "String: " << test.getValue(simb) + 1 << std::endl;

	const size_t vowelsSize = 10;
	const size_t consonantsSize = 42;
	char vowels[vowelsSize] = { 'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u' };
	char consonants[consonantsSize] = { 'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Y', 'Z',
							'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'y', 'z' };

	int vowelsCount = 0;
	int consonantsCount = 0;

	for (int i = 0; i < vowelsSize; ++i)
		vowelsCount += test.getValue(vowels[i]);

	for (int x = 0; x < consonantsSize; ++x)
		consonantsCount += test.getValue(consonants[x]);

	statisticFile << "Vowels: " << vowelsCount << std::endl;
	statisticFile << "Consonansts: " << consonantsCount << std::endl;

	int numCount = 0;
	char num[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	for (int z = 0; z < 10; ++z)
		numCount += test.getValue(num[z]);

	statisticFile << "Numbers: " << numCount << std::endl;
	statisticFile.close();
}