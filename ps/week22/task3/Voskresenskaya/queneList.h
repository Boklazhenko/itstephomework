#pragma once
#pragma once
#include <iostream>
template<typename T>
struct Elem
{
	Elem<T>* _next;
	Elem<T>* _prev;
	T _data;
};
template<typename T>
class QueneList
{
public:
	QueneList();
	QueneList(const QueneList& other);
	~QueneList();
	T count() const;
	void add();
	void add(T data);
	Elem<T>* extract();
	void clearAll();
	bool isEmpty()const;
	void show()const;
	/*bool isFull();*/
	void showElem(Elem <T>* tmp) const;
private:
	Elem<T>* _head;
	Elem<T>* _tail;
	int _count = 0;
};
template<typename T>
QueneList<T>::QueneList()
{
	_head = _tail = 0;
	_count = 0;
}

template<typename T>
QueneList<T>::QueneList(const QueneList& other)
{
	_head = _head = 0;
	_count = 0;
	Elem<T>* tmp = other._head;
	while (tmp != 0)
	{
		add(tmp->_data);
		tmp = tmp->_next;
	}
}

template<typename T>
inline QueneList<T>::~QueneList()
{
	if(!isEmpty())
	clearAll();
}

template<typename T>
inline T QueneList<T>::count()const
{
	return _count;
}

template<typename T>
void QueneList<T>::add()
{
	Elem<T>* tmp = new  Elem<T>;
	T data;
	std::cout << "Enter data" << std::endl;
	std::cin >> data;
	tmp->_data = data;
	tmp->_next = nullptr;
	tmp->_prev = _tail;
	if (_tail != nullptr)
		_tail->_next = tmp;
	if (isEmpty())
	{
		_tail = _head = tmp;
	}
	else _tail = tmp;
	++_count;
}

template<typename T>
inline void QueneList<T>::add(T data)
{
	Elem<T>* tmp = new  Elem<T>;
	tmp->_data = data;
	tmp->_next = nullptr;
	tmp->_prev = _tail;
	if (_tail != nullptr)
		_tail->_next = tmp;
	if (isEmpty())
	{
		_tail = _head = tmp;
	}
	else _tail = tmp;
	++_count;
}

template<typename T>
Elem<T>* QueneList<T>::extract()
{
	if (!isEmpty())
	{
		Elem <T>* tmp = new Elem <T>;
		tmp->_data = _head->_data;
		tmp->_next = nullptr;
		tmp->_prev = nullptr;
		if (!_head->_next == 0)
		{
			_head = _head->_next;
			_head->_prev = 0;
		}
		else
		{
			_head = _tail;
		}
		--_count;
		return tmp;
	}
	else return 0;
}

template<typename T>
inline void QueneList<T>::clearAll()
{
	while (_head->_next!= nullptr)
	{
		Elem<T>* dell = _head;
		_head = dell->_next;
		_head->_prev = 0;
		delete dell;
		--_count;
	 }
	delete _head;
	--_count;
}

template<typename T>
inline bool QueneList<T>::isEmpty() const
{
	return _count == 0;
}

template<typename T>
inline void QueneList<T>::show() const//весь лист
{
	if (isEmpty())

	{
		std::cout << "no element" << std::endl;
		return;
	}
	Elem <T>* tmp= _head;
	
	while (tmp->_next != 0)
	{
		std::cout << tmp->_data;
		tmp = tmp->_next;
	}
	std::cout << tmp->_data << std::endl;

}

template<typename T>
inline void QueneList<T>::showElem(Elem<T>* tmp) const
{
	if (!isEmpty())
		std::cout << tmp->_data << std::endl; 
	else
		std::cout << "no element" << std::endl;
}
