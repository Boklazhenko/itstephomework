#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class Str {
public:
	Str() {
		_str = new char[81]{};
		_str[80] = '\0';
	}
	Str(const Str& str) {
		int size = strlen(str._str) + 1;
		_str = new char[size];
		strcpy(_str, str._str);
	}
	Str(const char* str) {
		if (str != nullptr) {
			int size = strlen(str) + 1;
			_str = new char[size];
			strcpy(_str, str);
		}
	}
	Str(const char* str, size_t size) {
		if (str != nullptr)
			_str = new char[size];
		strcpy(_str, str);
	}
	~Str() {
		delete[] _str;
	}

public:
	void print() {
		std::cout << _str << std::endl;
	}
	void remove(const char* str) {
		if (str != nullptr) {
			int size = strlen(str) + 1;
			_str = new char[size];
			strcpy(_str, str);
		}
	}
	void concat(const Str* str) {
		if (str != nullptr) {
			size_t size = strlen(str->_str) + strlen(_str) + 1;
			char* buff = new char[size];
			sprintf(buff, "%s%s\0", _str, str->_str);
			_str = buff;
		}
	}
	void ofCinStr() {
		_str = new char[512];
		std::cin >> _str;
	}
private:
	char* _str;
};

int main()
{
	Str str;
	Str str2("Hello");
	str.print();
	str.remove(" World!!!");
	str.concat(&str2);
	str.print();
	str.ofCinStr();
	str.print();
}