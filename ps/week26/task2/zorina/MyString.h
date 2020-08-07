#pragma once
#include <iostream>
using namespace std;

class MyString {
public:
	MyString();
	MyString(const char* str);
	MyString(const MyString& other);
	MyString& operator=( MyString& other);
	size_t getStringLength()const;
	void cleanStr();
	virtual ~MyString();
	MyString operator+( const MyString& other);
	MyString operator+= (const MyString& other);
	bool operator == (const MyString& other) const;
	bool operator != (const MyString& other) const;
	
protected:
	string _str;	
};
