#include <iostream>
#include "ReadFile.h"
#include "PrintFIle.h"

bool isWord(const char* lhs, const char* rhs) {
	return strcmp(lhs, rhs) == 0;
}

int main()
{
	const char* rFileName = "Test.txt";
	const char* printFileName = "Dest.txt";
	ReadFile rFile(rFileName);
	PrintFile prinFile(printFileName);
	const char* userWord = "Green";
	const char* WordToChange = "sorry";
	std::string buff;
	while (!rFile.eof())
	{
		char temp = rFile.getChar();
		if (temp != ' ' && temp != ',' && temp != '.' && temp != '\n')
			buff += temp;
		else if (isWord(buff.c_str(), WordToChange)) {
			prinFile.add(userWord);
			prinFile.add(temp);
			buff.clear();
		}
		else
		{
			prinFile.add(buff.c_str());
			prinFile.add(temp);
			buff.clear();
		}
	}
	rFile.close();
	prinFile.close();
	if (!remove(rFileName));
	rename(printFileName, rFileName);

}