#include "Pointr.h"
using namespace std;
#pragma once
class Test
{
public:
	explicit Test(int Value);
	~Test() {};
	int Value();
	void setValue(int Value);
	
private:
	int _Value;
	
};