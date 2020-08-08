#pragma once
#include "Equation.h"

class Linear : public Equation				//  x + a = value;
{
public:
	Linear(int a, int value);
	int findRoot() const;

private:
	int _a;
	int _value;
};