#pragma once
#include"clientReq.h"
class Queue {
public:
	Queue();
	Queue(const Queue& other);
	~Queue();
	bool isEmpty() const;
	void push(const ClientReq&);
	void priorityPush( ClientReq&);
	void pop();
	ClientReq head()const;
	size_t size()const;

private:
	void copyBuff(ClientReq* dst, ClientReq* src, size_t size);
private:
	ClientReq* _buff;
	size_t _queueLength = 0;
	size_t _capacity;
};