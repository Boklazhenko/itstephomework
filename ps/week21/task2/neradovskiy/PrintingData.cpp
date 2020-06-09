#include "PrintingData.h"

DataPrinting::DataPrinting()
	: _name(0), _time(0), _printValue(0) {}

DataPrinting::DataPrinting(const char* name, int printValue)
	: _name(name), _time(time(nullptr)), _printValue(printValue) {}

int DataPrinting::value()
{
	return _printValue;
}

void DataPrinting::print()
{
	std::cout << '[' << _name << ']' << " [" << _time << "] " << "[" << _printValue << "]" << std::endl;
}
