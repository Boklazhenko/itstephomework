#pragma once
#include "Equation.h"

class Quadratic : public Equation {				// ax2 + bx + c = 0
public:
	Quadratic(double a, double b, double c);
	int findRoot() const;

private:
	double _a;
	double _b;
	double _c;
};
