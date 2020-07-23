#pragma once
#include "Base.h"

template <typename T1, typename T2, typename T3, typename T4>
class Child : public Base<T1, T2>
{
public:
	Child()
		: value3(""), value4("") {}
	Child(const T3& value3, const T4& value4)
		: value3(value3), value4(value4) {}
	const T3& getValue() const {
		return value3;
	}
	const T4& getOtherValue() const {
		return value4;
	}
private:
	T3 value3;
	T4 value4;
};