#include "queue.h"
#include"clientReq.h"

Queue::Queue()
	:_capacity(20), _queueLength(0), _buff(new ClientReq[_capacity]) {}

Queue::Queue(const Queue& other)
	: _queueLength(other._queueLength), _capacity(other._capacity), _buff(new ClientReq[_capacity]) {
	copyBuff(_buff, other._buff, _queueLength);
}

Queue::~Queue() {
	delete[] _buff;
}

bool Queue::isEmpty()const {
	return _queueLength == 0;
}

void Queue::push(const ClientReq& client) {
	if (_queueLength == _capacity) {
		_capacity += 20;
		ClientReq* tempBuff = new ClientReq[_capacity];
		copyBuff(tempBuff, _buff, _queueLength);
		delete[] _buff;
		_buff = tempBuff;
	}
	_buff[_queueLength++] = client;
}

void Queue::priorityPush(ClientReq& client) {
	int priority = client.showPriority();
	if (priority > _queueLength)
		priority = _queueLength;
	if (_queueLength == _capacity) {
		_capacity += 20;
	}
	ClientReq* tempBuff = new ClientReq[_capacity];
	for (int i = 0; i < priority; ++i)
		tempBuff[i] = _buff[i];
	tempBuff[priority] = client;
	++_queueLength;
	for (int x = priority + 1; x < _queueLength; ++x)
		tempBuff[x] = _buff[x - 1];
	delete[] _buff;
	_buff = tempBuff;
}

void Queue::pop() {
	--_queueLength;
	for (int i = 0; i < _queueLength; ++i)
		_buff[i] = _buff[i + 1];
}

ClientReq Queue::head() const {
	return _buff[0];
}

size_t Queue::size() const {
	return _queueLength;
}

void Queue::copyBuff(ClientReq* dst, ClientReq* src, size_t size) {
	for (int i = 0; i < size; ++i)
		dst[i] = src[i];
}