#include <iostream>
#include "cplx.h"

int cplx::ctr = 0;

int cplx::getCtr()
{
	return cplx::ctr;
}
cplx::cplx()
{
	_rl = 0;
	_img = 0;
	++ctr;
}

cplx::cplx(double rl, double img)
{
	_rl = rl;
	_img = img;
	++ctr;
}

cplx::cplx(const cplx& other)
{
	_rl = other._rl;
	_img = other._img;
	++ctr;
}

cplx::~cplx()
{
	--ctr;
}

void cplx::show()
{
	std::cout << "(" << _rl << ") + (" << _img << "i)" << std::endl;
}

cplx cplx::operator+(const cplx& var)
{
	return cplx(_rl + var._rl, _img + var._img);
}
cplx cplx::operator-(const cplx& var)
{
	return cplx(_rl - var._rl, _img - var._img);
}

cplx cplx::operator*(const cplx& var)
{
	return cplx(_rl * var._rl - _img * var._img, _rl * var._img + _img * var._rl);
}

cplx cplx::operator/(const cplx& var)
{
	return cplx((_rl * var._rl + _img * var._img) / (var._rl * var._rl + var._img * var._img),
		(_img * var._rl - _rl * var._img) / (var._rl * var._rl + var._img * var._img));
}

