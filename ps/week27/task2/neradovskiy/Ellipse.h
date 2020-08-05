#pragma once
#include "Rectangle.h"

class Ellipse : public Rectangle
{
public:
	Ellipse();
	Ellipse(const Point& top, int length, int height);
	virtual void serialize(std::ostream& out) const;
	virtual void deserialize(std::istream& in);

private:
	Point _top;
};