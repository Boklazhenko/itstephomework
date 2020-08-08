#include "Square.h"

Square::Square()
	: _lt{ 0, 0 }, _length(0) {}

Square::Square(const Point& lt, int length)
	: _lt(lt), _length(length) {}

void Square::serialize(std::ostream& out) const
{
	out << FigureCode::square << " ";
	out << _lt << " ";
	out << _length << std::endl;
}

void Square::deserialize(std::istream& in)
{
	in >> _lt;
	in.ignore();
	in >> _length;
}
