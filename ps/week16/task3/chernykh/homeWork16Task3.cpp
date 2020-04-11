#include <iostream>

using namespace std;

class MyString
{
public:
	MyString()
	{
		_length = 80;
		_str = new char[_length + 1];
	}

	MyString(const char* str)
	{
		_str = copyStr(str);
	}

	MyString(int length)
	{
		_length = length;
		_str = new char[_length];
	}

	MyString(const MyString& other)
	{
		_length = strlen(other._str);
		_str = new char[_length + 1];

		for (int i = 0; i < _length; ++i)
		{
			_str[i] = other._str[i];
		}

		_str[_length] = '\0';
	}

	MyString(MyString&& other)
	{
		_length = other._length;
		_str = other._str;
		other._str = nullptr;
	}

	~MyString()
	{
		delete[] _str;
	}

	MyString& operator =(const MyString& other)
	{
		if (_str != nullptr)
		{
			delete[] _str;
		}

		_str = copyStr(other._str);

		return *this;
	}

	MyString operator +(const MyString& other)
	{
		MyString newStr;

		int thisLength = strlen(_str);
		int otherLength = strlen(other._str);

		newStr._length = thisLength + otherLength;

		newStr._str = new char[thisLength + otherLength + 1];

		int i = 0;

		for (; i < thisLength; ++i)
		{
			newStr._str[i] = _str[i];
		}

		for (int j = 0; j < otherLength; ++j, ++i)
		{
			newStr._str[i] = other._str[j];
		}

		newStr._str[thisLength + otherLength] = '\0';

		return newStr;
	}

	bool operator ==(const MyString& other)
	{
		if (_length != other._length)
		{
			return false;
		}

		for (int i = 0; i < _length; ++i)
		{
			if (_str[i] != other._str[i])
			{
				return false;
			}
		}

		return true;
	}

	bool operator !=(const MyString& other)
	{
		return !(this->operator==(other));
	}

	char& operator [](int index)
	{
		return _str[index];
	}

	void print()
	{
		cout << _str;
	}

	int length()
	{
		return _length;
	}

	MyString inStr()
	{
		cin.getline(_str, _length);
		_length = strlen(_str) + 1;
		return _str;
	};

private:
	char* copyStr(const char* str)
	{
		_length = strlen(str);
		_str = new char[_length + 1];

		for (int i = 0; i < _length; ++i)
		{
			_str[i] = str[i];
		}

		_str[_length] = '\0';

		return _str;
	}

private:
	char* _str;
	int _length;
};

int main()
{
	MyString str("Hello");
	MyString str2("world");
	MyString str3("Yahooooo");
	MyString str4;
	MyString str5(150);

	str = str2;
	str5 = str3;

	MyString result = str + str3;

	result.print();
	cout << endl;

	cout << str.length() << endl;
	cout << str2.length() << endl;
	cout << result.length() << endl;

	cout << (str != str2) << endl;
	cout << (str == str2) << endl;

	cout << str[0] << endl;

	str.print();
	cout << "\n\n";
	str[0] = 'Q';
	str.print();
	cout << "\n\n";

	cout << "Please enter a word: " << endl;
	str4.inStr();
	str4.print();
	cout << endl;

	str5.print();

    return 0;
}