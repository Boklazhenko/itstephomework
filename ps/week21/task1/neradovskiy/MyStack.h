#pragma once
template<typename T>
class MyStack
{
public:
	MyStack() {
		_size = 0;
		_capacity = 20;
		_buff = new T[_capacity];
	}
	MyStack(const MyStack& other) {
		_size = other._size;
		_capacity = other._capacity;
		_buff = new T[_capacity];
		copyBuff(_buff, other._buff, _size);
	}
	~MyStack() {
		delete[] _buff;
	}
	void push(const T& something) {
		if (_size == _capacity) {
			_capacity += 20;
			T* tempBuff = new T[_capacity];
			copyBuff(tempBuff, _buff, _size);
			delete[] _buff;
			_buff = tempBuff;
		}
		_buff[_size++] = something;
	}
	bool empty() {
		return _size == 0;
	}
	void pop() {
		--_size;
	}
	T top() {
		return	_buff[_size - 1];
	}
	size_t size() {
		return _size;
	}
private:
	void copyBuff(T* dst, T* src, size_t size) {
		for (int i = 0; i < size; ++i)
			dst[i] = src[i];
	}
private:
	T* _buff;
	size_t _size;
	size_t _capacity;
};