#pragma once
#include "test.h"
using namespace std;
class smartPoitr
{
public:
	explicit smartPoitr(Test* ptr);
	smartPoitr(const smartPoitr& sptr);
	~smartPoitr();
	Test* ptr();
	Test* operator->();
	Test operator*();
	smartPoitr& operator=(smartPoitr& sptr);
	void remuve();
	void printThis();

private:
	Test* _ptr;
	int* _count;
};