#pragma once

#include <iostream>
#include <ctime>
#include <cmath>

class QueueStat
{
	// Очередь
	time_t* _inTimeArray;
	time_t* _outTimeArray;
	int _maxQueueLength;            // Максимальный размер очереди
	int _queueLength;            // Текущий размер очереди
public:
	QueueStat(int size);       
	~QueueStat();           
	void add(time_t inTime, time_t outTime);        // Добавление элемента
	double extract();                // Извлечение элемента      
	void clear();                // Очистка очереди   
	bool isEmpty();                // Проверка существования элементов в очереди
	bool isFull();                // Проверка на переполнение очереди  
	int getCount();                // Количество элементов в очереди
	void show();                //демонстрация очереди
};