#include "Rectangle.h"

Rectangle::Rectangle()
	: _height(0) {}

Rectangle::Rectangle(const Point& lt, int lenght, int height)
	: Square(lt, lenght), _height(height) {}

void Rectangle::serialize(std::ostream& out) const
{
	out << FigureCode::rectangle << " " << _lt << " " << _length << " " << _height << std::endl;
}

void Rectangle::deserialize(std::istream& in)
{
	in >> _lt;
	in.ignore();
	in >> _length;
	in.ignore();
	in >> _height;
}
