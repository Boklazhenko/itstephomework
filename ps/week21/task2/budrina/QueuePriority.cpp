#include "QueuePriority.h"
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

QueuePriority::QueuePriority(int size)
{
	_maxQueueLength = size;
	//������� �������
	_wait = new int[_maxQueueLength];
	_pri = new int[_maxQueueLength];
	// ���������� ������� �����
	_queueLength = 0;
}

QueuePriority::~QueuePriority()
{
	delete[]_wait;
	delete[]_pri;
}

void QueuePriority::add(int c, int p)//p=����� ������� ��������
{
		// ���� � ������� ���� �����, �� ����������� ����������
		// �������� � ��������� ����� �������
		p = passengerComing(1);
		if (!isFull())
		{
			_wait[_queueLength] = c;
			_pri[_queueLength] = p;
			_queueLength++;
		}
}

int QueuePriority::extract()
{
	// ���� � ������� ���� ��������, �� ���������� ���, 
	// ������� ����� ������ � �������� �������    
	if (!isEmpty())
	{
		//����� ������������ ������� - �������
		int max_pri = _pri[0];
		//� ������������ ������ = 0
		int pos_max_pri = 0;
		//���� ���������
		for (int i = 1; i < _queueLength; i++)
			//���� �������� ����� ������������ �������
			if (max_pri<_pri[i] && i++>i) {
				max_pri = _pri[i];
				pos_max_pri = i;
			}
		//����������� ������������ �������
		int temp1 = _wait[pos_max_pri];
		int temp2 = _pri[pos_max_pri];
		//�������� ��� ��������
		for (int i = pos_max_pri; i < _queueLength - 1; i++)
		{
			_wait[i] = _wait[i + 1];
			_pri[i] = _pri[i + 1];
		}
		//��������� ����������
		_queueLength--;
		// ������� ������������ ��������    
		return temp1;
	}
	else return -1;
}

void QueuePriority::clear()
{
	// ������� ������� 
	_queueLength = 0;
}

bool QueuePriority::isEmpty()
{
	// ����?
	return _queueLength == 0;
}

bool QueuePriority::isFull()
{
	// �����?
	return _queueLength == _maxQueueLength;
}

int QueuePriority::getCount()
{
	// ���������� �������������� � ����� ���������
	return _queueLength;
}

void QueuePriority::show()
{
	int tempPri;
	//������������ �������
	for (int i = 0; i < _queueLength; i++)
	{

		if (_wait[i] == _wait[i + 1] && _pri[i] < _pri[i + 1])
		{
			tempPri = _pri[i];
			_pri[i] = _pri[i + 1];
			_pri[i + 1] = tempPri;
		}
	}
	for (int i = 0; i < _queueLength; i++)
	{
		cout << _wait[i] << " - " << _pri[i] << "\n";
	}
	cout << "-------------------------------------\n";
}

void QueuePriority::sort()
{
	int max, temp, temp2;
	for (int i = 0; i < _queueLength - 1; i++)
	{
		max = i;
		for (int j = i + 1; j < _queueLength; j++)
		{
			if (_wait[j] > _wait[max])
				max = j;
		}
		if (max == i)
			continue;
		temp = _pri[i];
		_pri[i] = _pri[max];
		_pri[max] = temp;
		temp2 = _wait[i];
		_wait[i] = _wait[max];
		_wait[max] = temp2;
	}
}

int QueuePriority::passengerComing(double coming)
{
	double time = 0;
	// ������������ ���������������� ����� ������������� �����������
	time = ceil(-coming * 60 * log(1 - (double)rand() / (RAND_MAX + 1)));
	return (int)time;
	
}
