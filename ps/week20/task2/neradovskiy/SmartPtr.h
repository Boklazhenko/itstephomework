#pragma once
#include <iostream>

class ForTest {
public:
	explicit ForTest(int value);
	void print() const;
	friend void swap(ForTest& lhs, ForTest& rhs);
private:
	int _value;
};

class SmartPtr {
public:
	explicit SmartPtr(ForTest* ptr);
	SmartPtr(const SmartPtr& other);
	SmartPtr operator=(SmartPtr other);
	ForTest* operator->();
	~SmartPtr();
	friend void swap(SmartPtr& lhs, SmartPtr& rhs);
	
private:
	ForTest* _ptr;
	int* _pCount;
};