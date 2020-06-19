#pragma once
#include <iostream>

template<typename T>
struct Node {
	T Data;
	Node* Next = nullptr;
	Node* Prev = nullptr;
};
template<typename T>
class  DoublyLinkedList {
public:
	DoublyLinkedList();
	~DoublyLinkedList();
	bool isEmpty() const;
	void add(const T& data);
	void clear();
	void insert(size_t index, const T& data);
	void print() const;
	size_t getSize() const;


private:
	Node<T>* _pHead;
	Node<T>* _pTail;
	size_t _size;
};

template<typename T>
inline DoublyLinkedList<T>::DoublyLinkedList()
	:_pHead(nullptr), _pTail(nullptr), _size(0) {}

template<typename T>
inline DoublyLinkedList<T>::~DoublyLinkedList() {
	clear();
}

template<typename T>
inline bool DoublyLinkedList<T>::isEmpty() const {
	return _pHead == nullptr;
}

template<typename T>
inline void DoublyLinkedList<T>::add(const T& data) {
	if (_pHead == nullptr) {
		_pHead = new Node<T>{ data };
		_pTail = _pHead;
	}
	else {
		_pTail = new Node<T>{ data };
		Node<T>* node = _pHead;
		while (node) {
			if (!node->Next) {
				node->Next = _pTail;
				_pTail->Prev = node;
				break;
			}
			else
				node = node->Next;
		}
	}
	++_size;
}

template<typename T>
inline void DoublyLinkedList<T>::clear() {
	Node<T>* node = _pHead;
	while (node) {
		Node<T>* temp = node;
		node = node->Next;
		delete temp;
		--_size;
	}
	_pHead = nullptr;
}

template<typename T>
inline void DoublyLinkedList<T>::insert(size_t index, const T& data) {
	Node<T>* node = _pHead;
	int count = 0;
	while (node) {
		if (count == index && count < _size - 1) {
			Node<T>* temp = new Node<T>{ data };
			temp->Next = node->Next;
			temp->Prev = node;
			node->Next = temp;
			break;
		}
		if (count >= _size - 1) {
			add(data);
			break;
		}
		node = node->Next;
		++count;
	}
	++_size;
}

template<typename T>
inline void DoublyLinkedList<T>::print() const {
	Node<T>* node = _pHead;
	while (node) {
		std::cout << node->Data << std::endl;
		node = node->Next;
	}
}

template<typename T>
inline size_t DoublyLinkedList<T>::getSize() const {
	return _size;
}

