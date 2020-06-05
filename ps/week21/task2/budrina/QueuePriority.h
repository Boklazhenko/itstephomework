#pragma once

class QueuePriority
{
	
	int* _wait;                      
	int* _pri;                      // ��������� �������   
	int _maxQueueLength;            // ������������ ������ �������
	int _queueLength;            // ������� ������ �������
public:
	QueuePriority(int size);        // �����������
	~QueuePriority();            // ����������
	void add(int c, int p);        // ���������� ��������
	int extract();                // ���������� ��������      
	void clear();                // ������� �������   
	bool isEmpty();                // �������� ������������� ��������� � �������
	bool isFull();                // �������� �� ������������ �������  
	int getCount();                // ���������� ��������� � �������
	void show();                //������������ �������
	void sort();                  //���������� �������
	int passengerComing(double coming);
};
