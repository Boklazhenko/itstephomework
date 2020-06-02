#include "Stek.h"

Stek::Stek() :_top(_empty){}

Stek::~Stek() {}

void Stek::push(char c)
{
	if (!isFull())
		_st[++_top] = c;
}

char Stek::pop()
{
	if (!isEmpty())
	return _st[_top--];
	else return 0;
}

void Stek::clear()
{
	_top = _empty;
}

bool Stek::isEmpty()
{
	return _top == _empty;
}

bool Stek::isFull()
{
	return _top == _full;
}

int Stek::getCount()
{
	return _top+1;
}
