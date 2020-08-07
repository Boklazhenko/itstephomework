#pragma once
#include <list>
#include <exception>

template <typename T>

class LinkedList
{
public:
	LinkedList() = default;
	LinkedList(const T& value)
		:_list(value) {}

	void add(const T& value) {
		if (value == nullptr)
			throw std::runtime_error("Value is nullptr");
		_list.push_back(value);
	}

	void pop() {
		if (_list.empty())
			throw std::runtime_error("_List is empty");
		_list.pop_front();
	}

	const T& front() {
		if (_list.empty())
			throw std::runtime_error("List is empty");
		return _list.front();
	}

	size_t size() {
		return _list.size();
	}

private:
	std::list<T> _list;
};