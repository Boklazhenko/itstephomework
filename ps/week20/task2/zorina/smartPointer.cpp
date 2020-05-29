#include "smartPointer.h"
#include <iostream>

Test::Test(int value)
	:_value(value) {}

void Test::print(){
	std::cout << _value << std::endl;
}

SmartPointer::SmartPointer(Test* pTest)
	: _pTest(pTest), _pCount(new int(1)) {}

SmartPointer::SmartPointer(const SmartPointer& other){
	_pTest = other._pTest;
	_pCount = other._pCount;
	(*_pCount)++;
}

SmartPointer::~SmartPointer() {
	(*_pCount)--;
	if (*_pCount == 0) {
		delete _pTest;
		delete _pCount;
	}
}

SmartPointer& SmartPointer::operator=(const SmartPointer& other){
	(*_pCount)--;
	if (*_pCount == 0) {
		delete _pTest;
		delete _pCount;
	}
	_pTest = other._pTest;
	_pCount = other._pCount;
	(*_pCount)++;
	return *this;
}

Test* SmartPointer::operator->(){
	return _pTest;
}

Test& SmartPointer::operator*() const{
	return *_pTest;
}