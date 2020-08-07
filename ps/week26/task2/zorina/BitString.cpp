#include "BitString.h"
#include "MyString.h"

BitString::BitString() : MyString() {}

BitString::BitString(const char* str) {

	if (!isBitStr(str))
		str = "";
	_str = str;
}

BitString::~BitString() {}

BitString BitString::operator+(const BitString& other) {
	string result = "";
	int s = 0;
	int i = this->_str.size() - 1, j = other._str.size() - 1;
	while (i >= 0 || j >= 0 || s == 1)	{
		s += ((i >= 0) ? this->_str[i] - '0' : 0);
		s += ((j >= 0) ? other._str[j] - '0' : 0);
		result = char(s % 2 + '0') + result;
		s /= 2;
		i--; j--;
	}
	BitString temp = result.c_str();
	return temp;
}

//BitString BitString::operator+=(const BitString& other){ //не работает, я так поняла, потому что надо перегрузить оператор =, не могу понять, почему он
//	return *this=*this+other;                              //не наследуется от базового класса, хотя в мэйне все ок.
//}


string BitString::toString() const {
	string buff;
	buff = _str;
	return buff;
}

bool BitString::isBitStr(const char* str) const {
	for (size_t i = 0; i < strlen(str); ++i) {
		if (str[i] != '0' && str[i] != '1')
			return false;
	}
	return true;
}
void BitString::swap(BitString& lhs, BitString& rhs){
	lhs._str.swap(rhs._str);
}
