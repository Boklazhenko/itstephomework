#include "SmartPtr.h"

ForTest::ForTest(int value)
	: _value(value) {}

void ForTest::print() const
{
	std::cout << _value << std::endl;
}

SmartPtr::SmartPtr(ForTest* ptr)
{
	_ptr = ptr;
	_pCount = new int(1);
}

SmartPtr::SmartPtr(const SmartPtr& other)
{
	_ptr = other._ptr;
	_pCount = other._pCount;
	++* _pCount;
}

SmartPtr SmartPtr::operator=(SmartPtr other)
{
	swap(*this, other);
	return *this;
}

ForTest* SmartPtr::operator->()
{
	return _ptr;
}

SmartPtr::~SmartPtr()
{
	--(*_pCount);
	if (*_pCount == 0) {
		delete _ptr;
		delete _pCount;
	}

}

void swap(ForTest& lhs, ForTest& rhs)
{
	int temp = lhs._value;
	lhs._value = rhs._value;
	rhs._value = temp;
}

void swap(SmartPtr& lhs, SmartPtr& rhs)
{
	swap(*lhs._ptr, *rhs._ptr);
	int* pTemp = lhs._pCount;
	lhs._pCount = rhs._pCount;
	rhs._pCount = pTemp;
}
