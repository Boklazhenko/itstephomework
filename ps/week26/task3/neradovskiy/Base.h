#pragma once
#include <iostream>

template<typename T1, typename T2>
class Base
{
public:
	Base()
		: value1(""), value2("") {}
	Base(const T1& value1, const T2& value2)
		: value1(value1), value2(value2) {}
	virtual const T1& getValue() const {
		return value1;
	}
	virtual const T2& getOtherValue() const {
		return value2;
	}
private:
	T1 value1;
	T2 value2;
};