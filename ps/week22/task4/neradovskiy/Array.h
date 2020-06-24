#pragma once
#include "LinkedList.h"
template<typename T>
class Array {
public:
	Array() {
		_list = new LinkedList<T>;

	}
	Array(const Array& other) {
		_list = new LinkedList<T>(*other._list);
	}

	~Array() {
		delete _list;
	}

	void add(const T& value) {
		_list->add(value);
	}

	size_t getSize() const {
		return _list->getSize();
	}

	size_t GetUpperBound() const {
		return getSize() - 1;
	}

	bool isEmpty() {
		return _list->empty();
	}

	void removeAll() {
		_list->clear();
	}

	T& getAt(size_t index) const {
		LinkedList<T> temp(*_list);
		int size = temp.getSize();
		if (index >= size)
			std::cout << "Index bigger size" << std::endl;
		else {
			for (int i = 0; i <= index; ++i) {
				if (i == index) {
					ListNode <T>* buff = _list->getNode(temp.getHead());		//Don`t correct work
					if (buff)
						return buff->_value;
				}
				temp.deleteHead();
			}
		}
	}

	void setAt(size_t index,const T& value) {
		getAt(index) = value;
	}

	T& operator[](size_t index) const {
		return getAt(index);
	}

	void append(const Array& arr) {
		for (int i = 0; i < arr.getSize(); ++i)
			_list->add(arr[i]);
	}

	void insertAt(size_t index, T& value) {
		_list->insert(index, value);
	}

	void removeAt(size_t index) {
		_list->deleteAt(index);
	}

private:
	LinkedList<T>* _list;
};