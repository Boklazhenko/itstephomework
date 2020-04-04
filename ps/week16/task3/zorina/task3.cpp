//–азработать класс String, который в дальнейшем будет использоватьс€ дл€ работы со строками. ласс должен содержать :
//Х  онструктор по умолчанию, позвол€ющий создать строку длиной 80 символов; Х  онструктор, позвол€ющий создавать строку произвольного размера;
//Х  онструктор, который создаЄт строку и инициализирует еЄ строкой, полученной от пользовател€.Х Ќеобходимо создать деструктор, а также
//использовать механизмы делегировани€ конструкторов, если это возможно.Х  ласс должен содержать методы дл€ ввода строк с клавиатуры и вывода строк на экран.
////

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>


class String {
public:
	String() {
		_length = 80;
		_string = new char[_length + 1]{};
	}
	String(int length) {
		_length = length;
		_string = new char[_length] {};
	}
	String(const char* string) {
		_length = strlen(string) + 1;
		_string = new char[_length];
		strcpy(_string, string);
	}

	String(const String& other) {
		_length = strlen(other._string) + 1;
		_string = new char[_length];
		strcpy(_string, other._string);
	};

	~String() {
		delete[]_string;
	}

public:

	String cin() {
		gets_s(_string, _length);
		_length = strlen(_string) + 1;
		return _string;
	}
	void cout() {
		for (int i = 0; i < _length; ++i)
			std::cout << _string[i];
	}
private:
	char* _string;
	int _length;
};

int main()
{
	String str;
	String str1(120);
	String str2("Hello");
	str2.cout();
	std::cout << std::endl;
	std::cout << "Please, enter some chars/string\n";
	str1.cin();
	str1.cout();
}

