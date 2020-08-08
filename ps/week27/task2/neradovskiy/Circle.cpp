#include "Circle.h"

Circle::Circle()
	: _center{ 0, 0 }, _radius(0) {}

Circle::Circle(const Point& center, int radius)
	: _center(center), _radius(radius) {}

void Circle::serialize(std::ostream& out) const
{
	out << FigureCode::circle << " " << _center << " " << _radius << std::endl;
}

void Circle::deserialize(std::istream& in)
{
	in >> _center;
	in.ignore();
	in >> _radius;
}
