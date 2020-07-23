#pragma once
#include "MyString.h"
#include <stack>

class BitString : public MyString
{
public:
	BitString();
	explicit BitString(const char* bitNum);
	BitString(const BitString& other);
	BitString operator+(const BitString& other);
	BitString& operator= (BitString other);
	const std::string& getStr() const;
	void changeSign();
	size_t getSize() const;
	void clear();
	BitString operator+= (const BitString& other);
	bool operator == (const BitString& other) const;
	bool operator != (const BitString& other) const;

private:
	void swap(BitString& lhs, BitString& rhs);
	bool isCorrectStr(const char* bitNum) const;
	std::string sum(std::string lhs, std::string rhs);
	std::string& changeSign(std::string num);
	char inversValue(const char num)const;
	std::string _num;
};