#pragma once
#include "DoublyLinkedList.h"

template<typename T>
class Array {
public:
	Array();
	~Array();
	void add(const T& data);
	size_t getSize() const;
	size_t GetUpperBound() const;
	bool isEmpty();
	void removeAll();
	void append(const Array& arr);
	void insertAt(size_t index, T& data);
	void removeAt(size_t index);
private:
	DoublyLinkedList<T>* _lst;
};

template<typename T>
inline Array<T>::Array() {
	_lst = new DoublyLinkedList<T>;
}

template<typename T>
inline Array<T>::~Array() {
	delete _lst;
}

template<typename T>
inline void Array<T>::add(const T& data) {
	_lst->add(data);
}

template<typename T>
inline size_t Array<T>::getSize() const {
	return _lst->getSize();
}

template<typename T>
inline size_t Array<T>::GetUpperBound() const {
	return getSize() - 1;
}

template<typename T>
inline bool Array<T>::isEmpty() {
	return _lst->isEmpty();
}

template<typename T>
inline void Array<T>::removeAll() {
	_lst->clear();
}


template<typename T>
inline void Array<T>::append(const Array& arr) {
	for (int i = 0; i < arr.getSize(); ++i)
		_lst->add(arr[i]);
}

template<typename T>
inline void Array<T>::insertAt(size_t index, T& data) {
	_lst->insert(index, data);
}

template<typename T>
inline void Array<T>::removeAt(size_t index) {
	_lst->deleteAt(index);
}
