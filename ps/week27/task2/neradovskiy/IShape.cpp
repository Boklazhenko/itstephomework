#include "IShape.h"

std::ostream& operator<<(std::ostream& out, const Point& p)
{
	return out << p.X << " " << p.Y;
}

std::istream& operator>>(std::istream& in, Point& p)
{
	in >> p.X;
	in.ignore();
	return in >> p.Y;
}

#include "Ellipse.h"
#include "Circle.h"
void IShape::parse(std::istream& in, std::shared_ptr<IShape>& pShape)
{
	int code;
	in >> code;
	switch (code)
	{
	case FigureCode::square:
		pShape = std::shared_ptr<IShape>(new Square);
		break;
	case FigureCode::rectangle:
		pShape = std::shared_ptr<IShape>(new Rectangle);
		break;
	case FigureCode::circle:
		pShape = std::shared_ptr<IShape>(new Circle);
		break;
	case FigureCode::ellipse:
		pShape = std::shared_ptr<IShape>(new Ellipse);
		break;
	default:
		pShape = nullptr;
		break;
	}
}
