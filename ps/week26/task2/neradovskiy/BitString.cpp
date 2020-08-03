#include "BitString.h"

BitString::BitString()
	: _num("") {}

BitString::BitString(const char* bitNum)
{
	if (!isCorrectStr(bitNum)) {
		_num = "";
		return;
	}
	if (bitNum[0] == '0')
		_num = bitNum;
	else
	{
		std::string temp;
		size_t size = strlen(bitNum);
		temp = bitNum[0];
		for (int x = 1; x < size; ++x)
			temp += inversValue(bitNum[x]);
		_num = sum(temp, "01");
	}
}

BitString::BitString(const BitString& other)
{
	_num = other._num;
}

BitString BitString::operator+(const BitString& other)
{
	std::string buff = sum(_num, other._num);
	if (buff[0] == '1') {
		std::string temp;
		temp = buff[0];
		for (int x = 1; x < buff.size(); ++x)
			temp += inversValue(buff[x]);
		buff = sum(temp, "01");
	}
	return BitString(buff.c_str());
}

BitString& BitString::operator=(BitString other)
{
	swap(*this, other);
	return *this;
}

const std::string& BitString::getStr() const
{
	return _num;
}

void BitString::changeSign()
{
	if (_num[0] == '1') {
		_num[0] = '0';
		for (int i = 1; i < _num.size(); ++i)
			_num[i] = inversValue(_num[i]);
	}
	else if (_num[0] == '0') {
		for (int i = 0; i < _num.size(); ++i)
			_num[i] = inversValue(_num[i]);
	}
	_num = sum(_num, "01");
}

size_t BitString::getSize() const
{
	return _num.size();
}

void BitString::clear()
{
	_num.clear();
}

BitString BitString::operator+=(const BitString& other)
{
	return *this = *this + other;
}

bool BitString::operator!=(const BitString& other) const
{
	return !(_num == other._num);
}

bool BitString::operator==(const BitString& other) const
{
	return _num == other._num;
}

void BitString::swap(BitString& lhs, BitString& rhs)
{
	lhs._num.swap(rhs._num);
}

bool BitString::isCorrectStr(const char* bitNum) const
{
	if (bitNum == nullptr)
		return false;
	size_t size = strlen(bitNum);

	for (int i = 0; i < size; ++i) {
		char temp = bitNum[i];
		if (temp != '0' && temp != '1') {
			return false;
		}
	}
	return true;
}

std::string BitString::sum(std::string lhs, std::string rhs)
{
	int thisSize = lhs.size();
	int othrSize = rhs.size();
	std::string tempLhs = lhs;
	std::string tempRhs = rhs;
	int tempSize = thisSize > othrSize ? thisSize : othrSize;
	if (thisSize > othrSize)
		for (int i = othrSize; i < thisSize; ++i)
			tempRhs.insert(1, "0");
	if (othrSize > thisSize)
		for (int y = thisSize; y < thisSize; ++y)
			tempLhs.insert(1, "0");
	std::string result;
	bool rank = false;
	while (tempSize >= 0)
	{
		char num1 = tempLhs[tempSize];
		char num2 = tempRhs[tempSize];
		if (num1 != num2) {
			if (rank)
				result.insert(0, "0");
			else
				result.insert(0, "1");
		}
		if (num1 == num2 && num1 == '1') {
			if (rank) {
				result.insert(0, "1");
			}
			else
			{
				result.insert(0, "0");
				rank = true;
			}
		}
		if (num1 == num2 && num2 == '0') {
			if (rank) {
				result.insert(0, "1");
				rank = false;
			}
			else
				result.insert(0, "0");
		}
		--tempSize;
	}
	if (rank)
		result.insert(0, "1");
	return result;
}

std::string& BitString::changeSign(std::string num)
{
	if (num[0] == '1')
		num[0] = '0';
	else if (num[0] == '0')
		num[0] = '1';
	return num;
}

char BitString::inversValue(const char num) const
{
	char temp = num;
	if (num == '0')
		temp = '1';
	else if (num == '1')
	{
		temp = '0';
	}
	return temp;
}
