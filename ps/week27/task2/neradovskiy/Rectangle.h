#pragma once
#include "Square.h"

class Rectangle : public Square
{
public:
	Rectangle();
	Rectangle(const Point& lt, int lenght, int height);
	virtual void serialize(std::ostream& out) const;
	virtual void deserialize(std::istream& in);

protected:
	int _height;
};