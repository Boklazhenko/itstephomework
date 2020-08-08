#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:
	Circle();
	Circle(const Point& center, int radius);
	virtual void serialize(std::ostream& out) const;
	virtual void deserialize(std::istream& in);

protected:
	Point _center;
	int _radius;
};