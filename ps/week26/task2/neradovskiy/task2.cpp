#include <iostream>
#include "BitString.h"

int main()
{
	const char* str1 = "Hello World!";
	const char* str2 = "Aloha people!!!";
	MyString str(str1);
	MyString testStr(str2);
	MyString testOperator;
	testOperator = str + testStr;
	std::cout << testOperator.getStr() << std::endl;
	
	BitString bitStr("00000101");
	BitString bitStr2("10000111");
	BitString test("10000001");
	BitString result = bitStr + bitStr2;
	std::cout << bitStr.getStr() << " BitStr" << std::endl;
	std::cout << bitStr2.getStr() << " BitStr2" << std::endl;
	std::cout << result.getStr() << " Result" << std::endl;
	result.changeSign();
	std::cout << result.getStr() << " change Result" << std::endl;
	result += bitStr;
	std::cout << result.getStr() << " REsult += bitStr" << std::endl;
	std::cout << (result + test).getStr() << std::endl;
}