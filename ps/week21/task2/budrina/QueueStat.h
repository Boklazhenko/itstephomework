#pragma once

#include <iostream>
#include <ctime>
#include <cmath>

class QueueStat
{
	// �������
	time_t* _inTimeArray;
	time_t* _outTimeArray;
	int _maxQueueLength;            // ������������ ������ �������
	int _queueLength;            // ������� ������ �������
public:
	QueueStat(int size);       
	~QueueStat();           
	void add(time_t inTime, time_t outTime);        // ���������� ��������
	double extract();                // ���������� ��������      
	void clear();                // ������� �������   
	bool isEmpty();                // �������� ������������� ��������� � �������
	bool isFull();                // �������� �� ������������ �������  
	int getCount();                // ���������� ��������� � �������
	void show();                //������������ �������
};