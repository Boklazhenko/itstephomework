#pragma once
#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
void printBuff(const std::vector<T>& buff) {
	std::copy(buff.begin(), buff.end(), std::ostream_iterator<T>(std::cout));
}
template<typename T>
class Max
{
public:
	Max(T& value)
		: _result(value) {}
	const T& operator()(const T& value) {
		if (_result < value)
			_result = value;
		return _result;
	}
private:
	T& _result;
};

template <typename T>
class Min
{
public:
	Min(T& value)
		: _result(value) {}
	void operator()(const T& value) {
		if (_result >= value)
			_result = value;
	}

private:
	T& _result;
};
template <typename T>
class Up
{
public:
	bool operator()(const T& lhs, const T& rhs) {
		return lhs < rhs;
	}

};

template <typename T>
class Down
{
public:
	bool operator()(const T& lhs, const T& rhs) {
		return lhs > rhs;
	}

};

template <typename T>
class Increase
{
public:
	Increase(const T& num)
		: _num(num) {}

	void operator()(T& value) {
		value += _num;
	}
private:
	T _num;
};

template <typename T>
class Decrease
{
public:
	Decrease(const T& num)
		: _num(num) {}

	void operator()(T& value) {
		value -= _num;
	}
private:
	T _num;
};
template <typename T>
class Equal
{
public:
	Equal(const T& value)
		: _value(value) {}
	bool operator()(const T& value) {
		return _value == value;
	}

private:
	T _value;
};