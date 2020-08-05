#include "Ellipse.h"

Ellipse::Ellipse()
	: Rectangle({ 0,0 }, 0, 0), _top({ 0, 0 }) {}

Ellipse::Ellipse(const Point& top, int length, int height)
{
	_top = top;
	Point rectanglePoint = top;
	rectanglePoint.X -= length / 2;		// left shift
	rectanglePoint.Y += height / 2;		// up shift
	_lt = rectanglePoint;
	_length = length;
	_height = height;
}
void Ellipse::serialize(std::ostream& out) const
{
	out << FigureCode::ellipse << " " << _top << " " << _lt << " " << _length << " " << _height << std::endl;
}

void Ellipse::deserialize(std::istream& in)
{
	in >> _top;
	in.ignore();
	in >> _lt;
	in.ignore();
	in >> _length;
	in.ignore();
	in >> _height;
}
