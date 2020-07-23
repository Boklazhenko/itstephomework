#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class MyString
{
public:
	MyString();
	explicit MyString(const char* str);
	MyString(const MyString& other);
	MyString& operator = (MyString other);
	virtual size_t getSize() const;
	virtual void clear();
	virtual const std::string& getStr() const;
	MyString operator+ (const MyString& other) const;
	MyString operator+= (const MyString& other);
	bool operator == (const MyString& other) const;
	bool operator != (const MyString& other) const;
private:
	std::string _str;
};