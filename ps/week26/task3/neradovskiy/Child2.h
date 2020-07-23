#pragma once
#include"Child.h"

template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>

class Child2 : public Child<T1, T2, T3, T4>
{
public:
	Child2(const T5& value5, const T6& value6)
		: value5(value5), value6(value6) {}
	const T5& getValue() const {
		return value5;
	}
	const T6& getOtherValue() const {
		return value6;
	}

private:
	T5 value5;
	T6 value6;
};