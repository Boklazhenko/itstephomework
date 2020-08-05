#include "LinearEquaion.h"

Linear::Linear(int a, int value)
	: _a(a), _value(value) {}

int Linear::findRoot() const
{
	return _a - _value;
}
