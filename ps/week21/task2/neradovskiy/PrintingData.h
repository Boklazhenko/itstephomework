#pragma once
#include <iostream>
#include <ctime>
class DataPrinting {
public:
	DataPrinting();
	DataPrinting(const char* name, int printValue);

	int value();
	void print();
private:
	const char* _name;
	time_t _time;
	int _printValue;
};