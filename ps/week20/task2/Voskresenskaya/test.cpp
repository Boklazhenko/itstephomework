#include "Pointr.h"
#include "test.h"
using namespace std;

Test::Test(int Value) : _Value(Value) {}
void Test::setValue(int Value)
{
	_Value = Value;
}
int Test::Value()
{
	return _Value;
}
