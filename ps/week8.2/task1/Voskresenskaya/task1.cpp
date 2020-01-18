// Написать функцию, которая удаляет из строки символ с заданным номером.


#include <iostream>
using namespace std;
/*#include <string>*/
void deleteСharacter(char* &str, int &size, int numChar)
{

	char* str2 = new char[size - 1];

	for (int i = 0, j = 0; i < size; ++i, ++j)
	{
		if (i < numChar-1)
		{
			str2[j] = str[i];
		}
		else
		{
			str2[j]= str[i+1];
		}
	}
	cout << str2;
	str2[size - 1] = '\0';
	delete[] str;
	str = str2;
}
int main()

{
	int  size = 36;
	char* line = new char[36] { "Remove character from this sentence" };
	cout << line << endl;
	deleteСharacter(line, size, 9);
	return 0;
}


