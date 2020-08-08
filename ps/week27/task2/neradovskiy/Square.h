#pragma once
#include "IShape.h"

class Square : public IShape
{
public:
	Square();
	Square(const Point& lt, int length);
	virtual void serialize(std::ostream& out) const;
	virtual void deserialize(std::istream& in);

protected:
	Point _lt;
	int _length;
};
