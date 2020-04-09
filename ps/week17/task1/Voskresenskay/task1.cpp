
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <chrono>
using namespace std;
class File
{
public:
	explicit  File(string fileName)
	{
		errno_t err;
		err = fopen_s(&_pFile, fileName.c_str(), "w+");
		if (err == 0)
		{
			printf("The file 'fileName' was opened\n");
		}
		else
		{
			printf("The file 'fileName' was not opened\n");
		}
	}
	~File()
	{
		printf("The file 'fileName' was closed\n");
		(_pFile);
	}
	void writeInt()
	{
		srand(time(nullptr));
		p._Int = rand() % 10;
		fprintf(_pFile, "Int:%d ", p._Int);
	}
	void writeChar()
	{
		p._Char = "Hello";
		fprintf(_pFile, "Char:%s ", p._Char);
	}
	void writeBool()
	{
		srand(time(nullptr));
		p._Bool = rand() % 3;
		fprintf(_pFile, "Bool:%d ", p._Bool);
	}
	void writeDouble()
	{
		srand(time(nullptr));
		p._Double = 0.01 * (rand() % 101);
		fprintf(_pFile, "Double:%e ", p._Double);
	}

private:
	FILE* _pFile;
	struct Struct
	{
		int _Int;
		const char* _Char;
		double _Double;
		bool _Bool;

	}p;
};
class Goude
{
public:
	explicit Goude(string operation)
	{
		_operation = operation;
		_start = std::chrono::system_clock::now();
	}
	~Goude()
	{
		_end = std::chrono::system_clock::now();
		cout << _operation << " " << std::chrono::duration_cast<std::chrono::milliseconds>
			(_end - _start).count() << " milliseconds" << endl;
	}

private:
	std::chrono::time_point<std::chrono::system_clock> _start, _end;
	string _operation;

};
int main()
{
	File className("First");
	int index = 1000000000;
	{
		Goude gouge("writeInt");
		for (int i = 0; i < index; ++i)
		{
			className.writeInt();
		}
	}
	{
		Goude gouge("writeChar");
		for (int i = 0; i < index; ++i)
		{
			className.writeChar();
		}
	}
	{
		Goude gouge("writeBool");
		for (int i = 0; i < index; ++i)
		{
			className.writeBool();
		}
	}
	{
		Goude gouge("writeDouble");
		for (int i = 0; i < index; ++i)
		{
			className.writeDouble();
		}
	}
		return 0;
}

