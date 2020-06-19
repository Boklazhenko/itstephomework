//	Реализуйте класс «умного указателя», а также код по тестированию данного класса.

#include <iostream>

class smartPtr
{
	int* ptr;
	int count;
public:
	smartPtr(int* p = NULL) {
		count = 0;
		ptr = p;
	}
	smartPtr(const smartPtr& other) {
		ptr = other.ptr;
		count++;
	}
	~smartPtr() {
		if (ptr != NULL && count == 0) {
			std::cout << "Destructor for original" << std::endl;
			delete[]ptr;
		}
		else {
			count--;
			std::cout << "Destructor for copy" << std::endl;
		}
	}
	smartPtr operator=(const smartPtr& other) {
		ptr = other.ptr;
		count++;
		return *this;
	}

	int* operator->() {
		return ptr;
	}
};

void main()
{
	int* buff = new int;
	smartPtr test(buff);
	smartPtr test2 = test;
}
