#include "Flat.h"

Flat::Flat(std::string adress, uint32_t area, uint64_t price)
{
	_adress = adress;
	_area = area;
	_price = price;
}

Flat::Flat(const Flat& flat)
{
	_adress = flat._adress;
	_area = flat._area;
	_price = flat._price;
}

void Flat::operator=(const Flat& flat)
{
	Flat tempFlat(flat);
	this->swap(tempFlat);
}

bool Flat::operator==(const Flat& flat) const
{
	return _area == flat._area;
}

bool Flat::operator>(const Flat& flat) const
{
	return _price > flat._price;
}

bool Flat::operator<(const Flat& flat) const
{
	return flat > *this;
}

void Flat::swap(Flat& flat)
{
	std::string tAdress = _adress;
	uint32_t tArea = _area;
	uint64_t tPrice = _price;
	_adress = flat._adress;
	_area = flat._area;
	_price = flat._price;
	flat._adress = tAdress;
	flat._area = tArea;
	flat._price = tPrice;
}

void Flat::changePrice(uint64_t otherPrice)
{
	_price = otherPrice;
}

void Flat::print() const
{
	std::cout << "Adress: " << _adress << "\nPrice: " << _price << "\nArea: " << _area << std::endl;
}
