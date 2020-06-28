#pragma once
#include<iostream>

template <typename T>
struct Node {
	T Data;
	Node <T>* PNext;

	Node(T newData, Node <T>* nextNode) {
		Data = newData;
		PNext = nextNode;
	}
};

template <typename T>
class StackInList {

public:
	StackInList()
		: _size(0), _pHead(nullptr) { }

	~StackInList() {
		while (size())
			pop();
	}

	void push(const T newNode) {
		Node <T>* node = new Node <T>(newNode, _pHead);
		++_size;
		_pHead = node;
	}

	void pop() {
		Node <T>* temp = _pHead;
		_pHead = _pHead->PNext;
		delete temp;
		--_size;
	}

	T top() const {
		return _pHead->Data;
	}

	uint16_t size() const {
		return _size;
	}
	bool isEmpty()const {
		return _size == 0;
	}
	void print()const {
		std::cout << top() << std::endl;
	}
private:
	uint16_t _size;
	Node <T>* _pHead;
};
