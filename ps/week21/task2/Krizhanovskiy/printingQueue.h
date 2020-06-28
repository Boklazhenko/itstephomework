#pragma once

class PrintingQueue
{
	int* otherWait;
	int* time;
	int maxQueueLength;
	int currentQueueLength;
public:
	PrintingQueue(int m)
	{
		maxQueueLength = m;
		otherWait = new int[maxQueueLength];
		time = new int[maxQueueLength];
		currentQueueLength = 0;
	}
	~PrintingQueue()
	{
		delete[] otherWait;
	}

	bool isFull()
	{
		return currentQueueLength == maxQueueLength;
	}

	void add(int a, int Time)
	{
		if (!isFull())
		{
			otherWait[currentQueueLength] = a;
			time[currentQueueLength] = Time;
			currentQueueLength++;
		}
	}
	
	void show()
	{
		for (int i = 0; i < currentQueueLength; i++)
		{
			std::cout << "value:" << otherWait[i] << "    time: " << time[i] << std::endl;;
		}
	}
};