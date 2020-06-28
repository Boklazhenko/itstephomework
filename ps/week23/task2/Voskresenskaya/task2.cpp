
#include <iostream>
#include <string.h>
#include <string>
#include <stdio.h>

char cons[43] = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";
char vow[11] = "AEIOUaeiou";
int nonPrint[33] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32};
int num[10] = { 48,49,50,51,52,53,54,55,56,57 };
template<typename T>
bool compari (char ch, const int size, T arr[] )
{
	const int sizeArr = size;
	for (int i = 0; i < size; ++i) {
		if (ch == arr[i]) 
			return true;
	}
	return false;
}
int countSymbol()
{
	FILE* file;
	fopen_s(&file, "file1.txt", "a+");
	if (file == nullptr)
	{
		printf("error");
		return 1;
	}
	int c;
	int counter = 0;
	do
	{
		c = getc(file);
		if (c != EOF && !compari<int>(c, 33, nonPrint))
			++counter;
	} while (!feof(file)); 
	fclose(file);
	return counter;
}
int countString()
{
	FILE* file;
	fopen_s(&file, "file1.txt", "a+");
	if (file == nullptr)
	{
		printf("error");
		return 1;
	}
	int counter = 0;
	char str[100];
	do {
		if (fgets(str, 100, file) != nullptr)
			++counter;
	} while (!feof(file));
	fclose(file);
	return counter;
}
int countVow()
{
	FILE* file;
	fopen_s(&file, "file1.txt", "a+");
	if (file == nullptr)
	{
		printf("error");
		return 1;
	}
	int c;
	int counter = 0;
	do
	{
		c = getc(file);
		if (compari<char>(c, 11, vow))
			++counter;
	} while (!feof(file)); 
	fclose(file);
	return counter;
}
int countCons()
{
	FILE* file;
	fopen_s(&file, "file1.txt", "a+");
	if (file == nullptr)
	{
		printf("error");
		return 1;
	}
	int c;
	int counter = 0;
	do
	{
		c = getc(file);
		if (compari<char>(c, 43,cons))
			++counter;
	} while (!feof(file)); 
	fclose(file);
	return counter;
}
int countNum()
{
	FILE* file;
	fopen_s(&file, "file1.txt", "a+");
	if (file == nullptr)
	{
		printf("error");
		return 1;
	}
	int c;
	int counter = 0;
	do
	{
		c = getc(file);
		if (compari<int> (c, 10, num))
			++counter;
	} while (!feof(file)); 
	fclose(file);
	return counter;
}
const char* toString(char* str1, char* str2)
{
	int strSize = strlen(str1) + 31;
	char* buff = new char [strSize];
	strcpy_s(buff, strSize, str1);
	strcat_s(buff, strSize, str2);
		
	return buff;
}

int main()
{

	int countSym = countSymbol();
	int countStr = countString();
	int countV = countVow();
	int countC = countCons();
	int countN = countNum();

	char str1[] = "Homework 9";
	char str2[]="Characters in file: ";
	char cSym[30];
	_itoa_s(countSym, cSym, _countof(cSym),10);
	char str3[] = "Lines in a file ";
	char cStr[30];
	_itoa_s(countStr, cStr, _countof(cStr), 10);
	char str4[] = "Vowels in a file ";
	char cVow[30];
	_itoa_s(countV, cVow, _countof(cVow), 10);
	char str5[] = "Сonsonants in the file ";
	char cCons[30];
	_itoa_s(countC, cCons, _countof(cCons), 10);
	char str6[] = "Numbers in file ";
	char cNum[30];
	_itoa_s(countN, cNum, _countof(cNum), 10);
	
	FILE* file2;
	fopen_s(&file2, "file2.txt", "a+");
	if (file2 == nullptr)
	{
		printf("error");
		return 1;
	}

	fprintf(file2, " %s  \n", str1);
	fprintf(file2, "% s \n", toString(str2, cSym));
	fprintf(file2, "% s \n", toString(str3, cStr));
	fprintf(file2, "% s \n", toString(str4, cVow));
	fprintf(file2, "% s \n", toString(str5, cCons));
	fprintf(file2, "% s \n", toString(str6, cNum));
	fclose(file2);
	
	return 0;

}


