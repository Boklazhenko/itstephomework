#define _CRT_SECURE_NO_WARNINGS

#include "QueueStat.h"
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

QueueStat::QueueStat(int size)
{
	//�������� ������
	_maxQueueLength = size;
	//������� �������
	_inTimeArray = new time_t[_maxQueueLength];
	_outTimeArray = new time_t[_maxQueueLength];
	// ���������� ������� �����
	_queueLength = 0;
}

QueueStat::~QueueStat()
{
	//�������� �������
	delete[]_inTimeArray;
	delete[]_outTimeArray;
}

void QueueStat::add(time_t inTime, time_t outTime)
{
	// ���� � ������� ���� �����, �� ����������� ����������
	// �������� � ��������� ����� �������
	if (!isFull())
	{
		_inTimeArray[_queueLength] = inTime;
		_outTimeArray[_queueLength] = outTime;
		_queueLength++;
	}
}

double QueueStat::extract()
{
	if (!isEmpty())
	{
		_queueLength--;
		// ������� ������������ ��������    
		return difftime(_outTimeArray[_queueLength], _inTimeArray[_queueLength]);
	}
	else return -1;
}

void QueueStat::clear()
{
	// ������� ������� 
	_queueLength = 0;
}

bool QueueStat::isEmpty()
{
	// ����?
	return _queueLength == 0;
}

bool QueueStat::isFull()
{
	// �����?
	return _queueLength == _maxQueueLength;
}

int QueueStat::getCount()
{
	// ���������� �������������� � ����� ���������
	return _queueLength;
}

void QueueStat::show()
{
	//������������ �������
	char inT[26];
	char outT[26];
	cout << "Processed:\n";
	for (int i = 0; i < _queueLength; i++)
	{
		strncpy(inT, ctime(&_inTimeArray[i]), 25);
		inT[25] = '\0';
		strncpy(outT, ctime(&_outTimeArray[i]), 25);
		outT[25] = '\0';
		cout << "In Time:  " << inT\
			<< "Out Time: " << outT\
			<< "processing, sec: " << difftime(_outTimeArray[i], _inTimeArray[i]) << "\n";
	}
	cout << "-------------------------------------\n";
}
