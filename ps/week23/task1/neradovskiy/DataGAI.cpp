#include "DataGAI.h"

DataGai::DataGai()
{
	_Data = nullptr;
}

DataGai::~DataGai()
{
	delete _Data;
}

void DataGai::add(const char* number, std::string offenses)
{
	if (_Data == nullptr)
		_Data = new BinaryTree<const char*, std::string>;
	_Data->add(number, offenses);
}

void DataGai::print() const
{
	_Data->print();
}

void DataGai::printCar(const char* number)
{
	_Data->printNode(_Data->search(number, strcmp));
}
