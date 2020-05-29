#pragma once

class Test {
public:
	explicit Test(int value);	
	void print();

private:
	int _value;
};

class SmartPointer {
public:
	explicit SmartPointer(Test* pTest);
	SmartPointer(const SmartPointer& other);		
	~SmartPointer();	
	SmartPointer& operator=(const SmartPointer& other);
	Test* operator->();
	Test& operator*() const;
	

private:
	int* _pCount;
	Test* _pTest;
};