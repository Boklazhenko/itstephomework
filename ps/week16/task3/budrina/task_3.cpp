#define _CRT_SECURE_NO_WARNINGS  
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class MyString
{
private:
	int _size;
	char* _str;
public:
	MyString() {         //Конструкт по умолчанию создающий строку в 80 символов.
		_str = nullptr;
		_size = 80 + 1;

	}
	MyString(const char* s) { //Конструктор принимающий строку
		_str = getMyString(s);
	}
	MyString(int size) {         //конструктор принимающий размер строки
		_size = size;
		_str = new char[_size];
	}
	MyString(const MyString& other) { //конструктор копирования

		_size = strlen(other._str);
		_str = new char[_size + 1];
		for (int i = 0; i < _size; ++i)
		{
			_str[i] = other._str[i];
		}

		this->_str[_size] = '\0';

	}


	~MyString() {          //Деструктор
		delete[] _str;
	}

	MyString& operator =(const MyString& other) { //оператор присваивания
		if (_str != nullptr) {
			delete[]_str;  //если строка не пустая - очистить
		}
		_size = strlen(other._str);
		_str = new char[_size + 1];
		for (int i = 0; i < _size; ++i)
		{
			_str[i] = other._str[i];
		}

		this->_str[_size] = '\0';

		return *this;
	}



	char* getMyString(const char* s) {
		_size = strlen(s);
		_str = new char[_size + 1];

		for (int i = 0; i < _size; ++i)
		{
			_str[i] = s[i];
		}

		_str[_size] = '\0';

		return _str;
	}
	void setString()
	{
		char s[255];
		cout << "Введите свою строку: " << endl;
		cin.getline(s, 255);
		_size = strlen(s) + 1;//просчитываем размер
		_str = new char[_size];//выделяем память
		strcpy(_str, s);//переписываем в объект введенную строку
	}

	void printString() {
		cout << _str << "\n";
	}

	void printStringLength() {

		int len = strlen(_str);
		cout << " Длинна введенной строки: " << len << endl;
	}
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	MyString str;
	MyString str1 = "Привет всем";
	str1.printString();
	str1.printStringLength();
	str1.setString();
	str1.printStringLength();
	MyString str2 = "1234567891012345678921234567893123456789412345678951234567896123456789712345678981234567891";
	str2.printString();
	str2.printStringLength();
	str2 = str1;
	str2.printString();
	str2.printStringLength();
	return 0;
}
