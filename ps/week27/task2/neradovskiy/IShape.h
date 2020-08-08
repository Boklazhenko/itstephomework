#pragma once
#include <iostream>

class IShape
{
public:
	virtual ~IShape() = default;
	virtual void serialize(std::ostream& out) const = 0;
	virtual void deserialize(std::istream& in) = 0;
	static void parse(std::istream& in, std::shared_ptr<IShape>& pShape);
};

struct Point
{
	int X;
	int Y;
};

std::ostream& operator<< (std::ostream& out, const Point& p);

std::istream& operator>> (std::istream& in, Point& p);

enum FigureCode
{
	square,
	rectangle,
	circle,
	ellipse
};

