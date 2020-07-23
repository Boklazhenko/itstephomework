#include "MyString.h"

MyString::MyString()
	: _str("") {}

MyString::MyString(const char* str)
	: _str(str) {}

MyString::MyString(const MyString& other)
{
	_str = other._str;
}

MyString& MyString::operator=(MyString other)
{
	 _str.swap(other._str);
	 return *this;
}

size_t MyString::getSize() const
{
	return _str.size();
}

void MyString::clear()
{
	_str.clear();
}

const std::string& MyString::getStr() const
{
	return _str;
}

MyString MyString::operator+(const MyString& other) const
{
	return MyString((_str + other._str).c_str());
}

MyString MyString::operator+=(const MyString& other)
{
	return MyString((_str += other._str).c_str());
}

bool MyString::operator==(const MyString& other) const
{
	return _str == other._str;
}

bool MyString::operator!=(const MyString& other) const
{
	return !(*this == other);
}

