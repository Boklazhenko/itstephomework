#pragma once
#include <iostream>
using namespace std;

template<class T>
class Deque {
	struct node {
		node* prev, * next;
		T     val;
		node(void) noexcept : prev(nullptr), next(nullptr) {}
		node(const T& v) : prev(nullptr), next(nullptr), val(v) {}
	};
private:
	node* _head, * _tail;
public:
	Deque(void) noexcept : _head(nullptr), _tail(nullptr) {}
	~Deque() { clear(); }

	Deque(const Deque&) = delete;
	Deque& operator = (const Deque&) = delete;
public:
	//вставка в начало
	void addBegin(const T& v) { add_beg(new node(v)); }

	void addBegin(T&& v) {
		node* p = new node();
		p->val = std::forward<T>(v);
		add_beg(p);
	}

	//вставка в конец
	void addEnd(const T& v) { add_end(new node(v)); }

	void addEnd(T&& v) {
		node* p = new node();
		p->val = std::forward<T>(v);
		add_end(p);
	}

	//удалить первый
	T outBegin(void) {
		T v = _head->val;
		pop_beg();
		return v;
	}

	void popBegin(void) { pop_beg(); }

	//удалить последний
	T outEnd(void) {
		T v = _tail->val;
		pop_end();
		return v;
	}

	void popEnd(void) { pop_end(); }

	//удаление всех
	void clear(void) {
		node* p;
		while (_head != nullptr) {
			p = _head;
			_head = _head->next;
			delete p;
		}
		_tail = nullptr;
		cout << "Clear" << endl;
	}

	//кол-во
	size_t getCount(void) const noexcept {
		size_t i = 0;
		for (const node* p = _head; p != nullptr; p = p->next)
			++i;
		return i;
	}

	T& Begin(void) { return _head->val; }
	const T& Begin(void) const { return _head->val; }

	T& End(void) { return _tail->val; }
	const T& End(void) const { return _tail->val; }

	bool isEmpty(void) const noexcept { return (_head == nullptr); }
private:
	void add_beg(node* p) noexcept {
		if (_head == nullptr)
			_head = _tail = p;
		else {
			_head->prev = p;
			p->next = _head;
			_head = p;
		}
	}

	void add_end(node* p) noexcept {
		if (_head == nullptr)
			_head = _tail = p;
		else {
			p->prev = _tail;
			_tail->next = p;
			_tail = p;
		}
	}

	void pop_beg(void) {
		node* p = _head;
		if ((_head = _head->next) != nullptr)
			_head->prev = nullptr;
		else
			_tail = nullptr;
		delete p;
	}

	void pop_end(void) {
		node* p = _tail;
		if ((_tail = _tail->prev) != nullptr)
			_tail->next = nullptr;
		else
			_head = nullptr;
		delete p;
	}
};