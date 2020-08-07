#pragma once
#include <iostream>
#include "MyString.h"
using namespace std;

class BitString :public MyString {

public:
	BitString();
	BitString(const char* str);
	~BitString() override;
	BitString operator+(const BitString& other);
	BitString operator+=(const BitString& other);
	string toString()const;

private:
	bool isBitStr(const char* str) const;
	void swap(BitString& lhs, BitString& rhs);
};
