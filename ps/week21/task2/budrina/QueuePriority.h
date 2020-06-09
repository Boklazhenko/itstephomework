#pragma once

class QueuePriority
{
	
	int* _wait;                      
	int* _pri;                      // Приоритет очереди   
	int _maxQueueLength;            // Максимальный размер очереди
	int _queueLength;            // Текущий размер очереди
public:
	QueuePriority(int size);        // Конструктор
	~QueuePriority();            // Деструктор
	void add(int c, int p);        // Добавление элемента
	int extract();                // Извлечение элемента      
	void clear();                // Очистка очереди   
	bool isEmpty();                // Проверка существования элементов в очереди
	bool isFull();                // Проверка на переполнение очереди  
	int getCount();                // Количество элементов в очереди
	void show();                //демонстрация очереди
	void sort();                  //сортировка очереди
	int passengerComing(double coming);
};
