#include "flat.h"

Flat& Flat::operator = (const Flat& other)
{
	if (this == &other)
	{
		return *this;
	}

	price = other.price;
	area = other.area;
	return *this;
}

bool operator == (const Flat& lhs, const Flat& rhs)
{
	return lhs.area == rhs.area;
}

bool operator != (const Flat& lhs, const Flat& rhs)
{
	return !(lhs.area == rhs.area);
}

bool operator > (const Flat& lhs, const Flat& rhs)
{
	return lhs.price > rhs.price;
}

bool operator < (const Flat& lhs, const Flat& rhs)
{
	return lhs.price < rhs.price;
}

void Flat::print()const {

	cout << "ѕлощадь квартиры: " << area << " м.кв    ÷ена: " << price << " м.руб." << endl;

}