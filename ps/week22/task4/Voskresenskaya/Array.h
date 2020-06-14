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
class Array
{
public:
	Array();
	~Array();
	size_t getSize();//получение размера массива
	size_t getCount();// получение количества заполненых элементов
	size_t getGrow();
	void setSize(size_t size, size_t grow);// установка размера массива
	bool isEmpty()const;//пустой ли список
	void removeAll();//удалить все
	int getUpperBound();// получение последнего допустимого индекса в массиве
	T operator [](int index) const; // для реализации двух предыдущих функций
	T getAt(size_t index); //получение определенного элемента(по индексу)*/
	void setAt(size_t index, T data ); //установка нового значения для определенного элемента*/
	void add(T data);//добывление элементов в массив
	Array<T>& operator =(Array& other);// срвнение 2х массивов*
	Elem<T>* getData();//получение адресса массива с данными
	void insertAt(T data, size_t index);// вставка элемента(-ов) в заданную позицию
	void removeAt(size_t index);//удаление элемента(-ов) с заданной позиции.*/

private:
	
	Elem<T>* _head;
	Elem<T>* _tail;
	size_t _countElem;
	size_t _sizeArr;
	size_t _grow;
};

template<typename T>
inline Array<T>::Array() : _head(nullptr), _tail(nullptr), _sizeArr(0), _countElem(0), _grow(0){}

template<typename T>
inline Array<T>::~Array()
{
	if (_sizeArr!=0)
		removeAll();
}

template<typename T>
inline size_t Array<T>::getSize()
{
	return _sizeArr;
}

template<typename T>
inline size_t Array<T>::getCount()
{
	return _countElem;
}

template<typename T>
inline size_t Array<T>::getGrow()
{
	return _grow;
}

template<typename T>
inline T Array<T>::operator[](int index) const
{
	
	int count = 0;
	Elem<T>* tmp = _head;
	while (tmp != nullptr)
	{
		if (count == index)
			return tmp->_data;
	}
	++count;
	tmp = tmp->_next;
}

template<typename T>
inline void Array<T>::add (T data)
{
	Elem<T>* tmp = _head;
	if (_countElem == 0)
	{
		_head->_data = data;
		++_countElem;
		return;
	}
	if (_countElem >=_sizeArr)
	{
		std::cout << "full array" << std::endl;
		return;
	}
	for (size_t i = 0; i < _countElem; ++i)
	{
		tmp = tmp->_next;
	}
	tmp->_data = data;
	++_countElem;
}


template<typename T>
inline Array<T>& Array<T>::operator=(Array & other)
{
	setSize(other.getSize(), other.getGrow());
	_countElem = other.getCount();
	for (size_t i = 0; i <getCount(); ++i)
	{
		setAt(i, other.getAt(i));
	}
	return *this;
}

template<typename T>
inline Elem<T>* Array<T>::getData()
{
	return _head;
}

template<typename T>
inline void Array<T>::insertAt(T data, size_t index)
{
	if (index < 0 || index > _sizeArr)
	{
		std::cout << "bad index" << std::endl;
		return;
	}
	size_t count = 1;
	Elem<T>* beforPtr;
	Elem<T>* afterPtr;
	Elem<T>* ptr;
	ptr = _head;
	while (count < index)
	{
		ptr = ptr->_next;
		++count;
	}
	beforPtr = ptr;
	afterPtr = ptr->_next;
	Elem<T>* tmp = new Elem<T>;
	tmp->_data = data;
	tmp->_next = afterPtr;
	beforPtr->_next = tmp;
	++_sizeArr;
}

template<typename T>
inline void Array<T>::removeAt(size_t index)
{
	if (index < 0 || index > _sizeArr)
	{
		std::cout << "bad index" << std::endl;
		return;
	}
	size_t count = 1;
	Elem<T>* beforPtr;
	Elem<T>* afterPtr;
	Elem<T>* del;
	Elem<T>* ptr;
	ptr = _head;
	while (count < index)
	{
		ptr = ptr->_next;
		++count;
	}
	beforPtr = ptr;
	del = ptr->_next;
	afterPtr = del->_next;
	beforPtr->_next = afterPtr;
	delete del;
	--_sizeArr;
}

template<typename T>
inline void Array<T>::setSize(size_t size, size_t grow)
{
	if (_sizeArr < size)
	{
		_grow = grow;
		for (size_t i = 0; i < _grow; ++i)
		{
			// not working correctly
			Elem<T>* tmp = new  Elem<T>;
			tmp->_next = nullptr;
			tmp->_prev = _tail;
			if (_tail != nullptr)
			{
				_tail->_next = tmp;
			}
			if (_sizeArr == 0)
			{
				_tail = _head = tmp;
			}
			else _tail = tmp;
			++_sizeArr;
		}
	}

	if (_sizeArr > size)
	{
		size_t index = _sizeArr - size;
		for (size_t i = index; i > 0; --i)
		{
			Elem<T>* tmp = _tail;
			_tail = _tail->_prev;
			_tail->_next = nullptr;
			delete tmp;
			--_sizeArr;
		}
	}
}

template<typename T>
inline int Array<T>::getUpperBound()
{
	return _countElem-1;
}

template<typename T>
inline T Array<T>::getAt(size_t index)
{
	if (index < 0 || index > _sizeArr)
	{
		std::cout << "bad index" << std::endl;
		return 0;
	}
	int count = 0;
	Elem<T>* tmp = _head;
	while (tmp != nullptr)
	{
		if (count == index)
			return tmp->_data;
		++count;
		tmp = tmp->_next;
	}
}

template<typename T>
inline void Array<T>::setAt(size_t index, T data)
{
	if (index < 0 || index > _sizeArr)
	{
		std::cout << "bad index" << std::endl;
		return;
	}
	int count = 0;
	Elem<T>* tmp = _head;
	while (tmp != nullptr)
	{
		if (count == index)
		{
			tmp->_data = data;
			return;
		}
		++count;
		tmp = tmp->_next;
	}
}

template<typename T>
inline bool Array<T>::isEmpty() const
{
	return _countElem==0;
}

template<typename T>
inline void Array<T>::removeAll()
{
	if (_sizeArr==0)
	{
		std::cout << " no Elem" << std::endl;
		return;
	}
	else
	{
		while (_head->_next != nullptr)
		{
			Elem<T>* ptr = _head;
			_head = ptr->_next;
			delete ptr;
			--_sizeArr;
		}
		delete _head;
		--_sizeArr;
		_countElem = 0;
	}
}







