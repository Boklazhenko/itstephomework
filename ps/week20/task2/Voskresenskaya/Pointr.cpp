#include "Pointr.h"
#include "test.h"
#include <iostream>
using namespace std;
smartPoitr::smartPoitr(Test* ptr) :
	_ptr(ptr), _count(new int(1)) {}

smartPoitr::smartPoitr(const smartPoitr& sptr)
{
	_ptr = sptr._ptr;
	_count = sptr._count;
	++(*_count);
}

smartPoitr::~smartPoitr()
{
	remuve();
}
Test* smartPoitr::ptr()
{
	return _ptr;
}

Test* smartPoitr::operator->()
{
	return _ptr;
}

Test smartPoitr::operator*()
{
	return *_ptr;
}

smartPoitr& smartPoitr::operator=(smartPoitr& sptr)
{
	if (*_count > 0)
		remuve();
	if (this != &sptr)
	{
		_ptr = sptr._ptr;
		_count = sptr._count;
		++(*_count);
	}
	return *this;
}

void smartPoitr::remuve()
{
	--(*_count);
	if (*_count == 0)
	{
		delete _ptr;
		delete _count;
		_ptr = nullptr;
		_count = nullptr;
	}
}

void smartPoitr::printThis()
{
	std::cout << this << endl;
}


