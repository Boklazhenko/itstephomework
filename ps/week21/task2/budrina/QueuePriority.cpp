#include "QueuePriority.h"
#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

QueuePriority::QueuePriority(int size)
{
	_maxQueueLength = size;
	//создаем очередь
	_wait = new int[_maxQueueLength];
	_pri = new int[_maxQueueLength];
	// »значально очередь пуста
	_queueLength = 0;
}

QueuePriority::~QueuePriority()
{
	delete[]_wait;
	delete[]_pri;
}

void QueuePriority::add(int c, int p)//p=врем€ просто€ принтера
{
		// ≈сли в очереди есть место, то увеличиваем количество
		// значений и вставл€ем новый элемент
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
	// ≈сли в очереди есть элементы, то возвращаем тот, 
	// который вошел первым и сдвигаем очередь    
	if (!isEmpty())
	{
		//пусть приоритетный элемент - нулевой
		int max_pri = _pri[0];
		//а приоритетный индекс = 0
		int pos_max_pri = 0;
		//ищем приоритет
		for (int i = 1; i < _queueLength; i++)
			//если встречен более приоритетный элемент
			if (max_pri<_pri[i] && i++>i) {
				max_pri = _pri[i];
				pos_max_pri = i;
			}
		//вытаскиваем приоритетный элемент
		int temp1 = _wait[pos_max_pri];
		int temp2 = _pri[pos_max_pri];
		//сдвинуть все элементы
		for (int i = pos_max_pri; i < _queueLength - 1; i++)
		{
			_wait[i] = _wait[i + 1];
			_pri[i] = _pri[i + 1];
		}
		//уменьшаем количество
		_queueLength--;
		// возврат извлеченного элемента    
		return temp1;
	}
	else return -1;
}

void QueuePriority::clear()
{
	// очистка очереди 
	_queueLength = 0;
}

bool QueuePriority::isEmpty()
{
	// ѕуст?
	return _queueLength == 0;
}

bool QueuePriority::isFull()
{
	// ѕолон?
	return _queueLength == _maxQueueLength;
}

int QueuePriority::getCount()
{
	//  оличество присутствующих в стеке элементов
	return _queueLength;
}

void QueuePriority::show()
{
	int tempPri;
	//демонстраци€ очереди
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
	// »спользуетс€ экспоненциальный закон распределени€ веро€тности
	time = ceil(-coming * 60 * log(1 - (double)rand() / (RAND_MAX + 1)));
	return (int)time;
	
}
