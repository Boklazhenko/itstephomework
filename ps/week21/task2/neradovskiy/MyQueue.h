#pragma once
template <typename T>
class MyQueue {
public:
	MyQueue() {
		_capacity = 20;
		_size = 0;
		_buff = new T[_capacity];
	}


	MyQueue(const MyQueue& other) {
		_size = other._size;
		_capacity = other._capacity;
		_buff = new T[_capacity];
		copyBuff(_buff, other._buff, _size);
	}
	~MyQueue() {
		delete[] _buff;
	}
	bool empty() {
		return _size == 0;
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
	void priorityPush(const T& something, size_t priority) {
		if (priority > _size)
			priority = _size;
		if (_size == _capacity) {
			_capacity += 20;
		}
			T* tempBuff = new T[_capacity];
			for (int i = 0; i < priority; ++i)
				tempBuff[i] = _buff[i];
			tempBuff[priority] = something;
			++_size;
			for (int x = priority + 1; x < _size; ++x)
				tempBuff[x] = _buff[x - 1];
			delete[] _buff;
			_buff = tempBuff;
	}
	void pop() {
		--_size;
		for (int i = 0; i < _size; ++i)
			_buff[i] = _buff[i + 1];
	}
	T front() {
		return _buff[0];
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
	size_t _size = 0;
	size_t _capacity;
};