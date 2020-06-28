#pragma once

class Queue
{
	int* wait;
	int* priority;
	int maxQueueLength;
	int currentQueueLength;
public:

	Queue(int m) {
		maxQueueLength = m;
		wait = new int[maxQueueLength];
		priority = new int[maxQueueLength];
		currentQueueLength = 0;
	}

	~Queue() {
		delete[]wait;
		delete[]priority;
	}

	void add(int c, int p) {
		if (!isFull())
		{
			wait[currentQueueLength] = c;
			priority[currentQueueLength] = p;
			currentQueueLength++;
		}
	}
	int extract();
	void clear();
	bool isEmpty();
	bool isFull();
	int getCount();
	void show();

};