#include <iostream>

template<typename T1, typename T2>
class Base {
public:
	Base()
		: _value1(T1()), _value2(T2()) {}

	Base(const T1& value1, const T2& value2)
		: _value1(value1), _value2(value2) {}

	virtual ~Base() {}

	const T1& getValue1() const {
		return _value1;
	}

	const T2& getValue2() const {
		return _value2;
	}

protected:
	T1 _value1;
	T2 _value2;
};

template<typename T1, typename T2, typename T3, typename T4>
class Child : public Base<T1, T2> {

public:
	Child() :Base<T1, T2>() {
		_value3 = T3();
		_value4 = T4();
	}
	Child(const T1& value1, const T2& value2, const T3& value3, const T4& value4) :Base<T1, T2>(value1, value2) {
		_value3 = value3;
		_value4 = value4;
	}
	const T3& getValue3() const {
		return _value3;
	}
	const T4& getValue4() const {
		return _value4;
	}


protected:
	T3 _value3;
	T4 _value4;

};

template<typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
class Child2 : public Child<T1, T2, T3, T4> {

public:
	Child2() :Child<T1, T2, T3, T4>() {
		_value5 = T5();
		_value6 = T6();
	}

	Child2(const T1& value1, const T2& value2, const T3& value3, const T4& value4, const T5& value5, const T6& value6)
		:Child<T1, T2, T3, T4>(value1, value2, value3, value4) {
		_value5 = value5;
		_value6 = value6;
	}
	const T5& getValue5() const {
		return _value5;
	}
	const T6& getValue6() const {
		return _value6;
	}

protected:
	T5 _value5;
	T6 _value6;

};


int main()
{
	Base<int, int> base(111, 222);

	Child<int, int, int, int> ch(11, 22, 333, 444);
	Child2 <int, int, int, int, int, int> ch2(1, 2, 33, 44, 555, 666);
	std::cout << base.getValue1() << " " << base.getValue2() << std::endl;
	std::cout << ch.getValue3() << " " << ch.getValue4() << std::endl;
	std::cout << ch2.getValue5() << " " << ch2.getValue6() << std::endl;
	std::cout << ch2.getValue1() << " " << ch2.getValue3() << std::endl;
}