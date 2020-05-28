//Реализуйте класс «умного указателя», а также код по тестированию данного класса.

#include <iostream>
using namespace std;

class Test {
public:
	explicit Test(int value) : _value(value) {
		cout << "test ctor " << _value << endl;
	}
	~Test(){
		cout << "test dtor " << _value << endl;
}

	void testValue() {
		cout << "This is test: " << _value << endl;
	}
	void setValue(int value) {
		_value = value;
	}

private:
	int _value;
};

class SmartPointer
{
public:
	explicit SmartPointer(Test* ptr) : _ptr(ptr), _pCount(new int(1)) {}
	
	SmartPointer(const SmartPointer& other) {
		_ptr = other._ptr;
		_pCount = other._pCount;
		++(*_pCount);
	}
	~SmartPointer() {
		--(*_pCount);
		cout << "last count " << *_pCount << endl;
		if (*_pCount == 0) {
			delete _ptr;
			delete _pCount;
		}
	}
	
	Test* operator->() {
		return _ptr;
	}
	
private:

	Test* _ptr;
	int* _pCount;
};

int main()
{
	Test* pTest = new Test(555);
	SmartPointer p1(pTest);
	SmartPointer p2 = p1;
	SmartPointer p3 = p2;

	p1->testValue();
	p2->testValue();
	p3->testValue();

	p2->setValue(111);

	p1->testValue();
	p2->testValue();
	p3->testValue();

	return 0;
}

