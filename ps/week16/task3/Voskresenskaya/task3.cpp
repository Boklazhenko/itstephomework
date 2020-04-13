

#include  "stafx.h"
#include <iostream>
#include <stdio.h>
#include <tchar.h>
using namespace std;
class MyString
{
public:
	MyString()
	{
		_str = nullptr;
	}
	MyString( const char* str)
	{
		int lengh = 0;
		while (str[lengh] != '\0')
		{
			++lengh;
		}
		this->_str = new  char[lengh + 1];
		for (int i = 0; i < lengh; ++i)
			this->_str[i] = str[i];
		this->_str[lengh] = '\0';
	}

	~MyString() 
	{
		delete[] _str;
	}
	void print()
	{
		cout << _str << endl;
	}
	int strlenn(const char* str)
	{
		int i = 0;
		while (str[i] != '\0')
		{
			++i;
		}
		return i;
	}
	char* strcpyy(char str[], int size, const char* forCopy)
	{
		str[size];
		int sizeCopy =strlenn(forCopy);
		for (int i = 0; i < sizeCopy+1; ++i)
			str[i] = forCopy[i];
		str[sizeCopy] = '\0';
		return str;
	}
	int strcmpp(const char* str, const char* forСomparison)
	{

		int index = 0;
		while (str[index] == forСomparison[index] && str[index] != '\0'|| forСomparison[index] != '\0')
		{
			++index;
		}

		if (strlenn(str) == strlenn(forСomparison) && index == strlenn(str))
			return 0;
		else if (strlenn(str) > strlenn(forСomparison))
			return 1;
		else  
			return -1;
	}
	char* strcatt(const char* str, const char* forСatt)
	{
		int size = strlenn(str);
		int size2 = strlenn(forСatt);
		char* buff = new char[size+ size2+1];
		for (int i = 0; i < size; ++i)
		{
			buff[i] = str[i];
		 }
		for (int i = size, j=0; i < (size+ size2+1 ); ++i,++j)
			buff[i] = forСatt[j];
		buff[size + size2]= '\0'; //memory leak. how to delete buff ?
	
		return buff;
	}
	
	char* squeeze(const char* str, char a)
	{
		int size = strlenn(str);
		int index = 0;
		for (int i = 0; i < size; ++i)
		{
			if (str[i] == a)
				++index;
		}
		int newSize = size - index;
		char* buff = new char[newSize+1];
		for (int i=0,j = 0; i < size+1; ++i)
		{
			if (str[i] == a)
				continue;
			buff[j] = str[i];
			++j;
		}
		buff[newSize]= '\0'; //memory leak. how to delete buff ?
		return buff;
	}
private:
	 char* _str;

};



using namespace std;
int main()
{
	MyString str("test");
	str.print();
	const char* test = "testtt";
	const char* test1 = "testtt";
	int i=str.strlenn(test);
	cout << i << endl;
	char copy[255];
	cout << str.strcpyy(copy, 255, test)<<endl;
	cout << str.strcmpp(test, test1) << endl;
	cout << str.strcatt(test, test1) << endl;
	char a = 't';
	cout << str.squeeze(test, a);
}

