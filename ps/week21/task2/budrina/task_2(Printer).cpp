#define _CRT_SECURE_NO_WARNINGS

#include "QueuePriority.h"
#include "QueueStat.h"
#include <windows.h> 

using namespace std;

int main()
{
	time_t curTime;
	srand(time(0));
	QueuePriority queuePri(5);        //создание очереди
	QueueStat stat(5);
	for (int i = 0; i < 5; ++i) {
		queuePri.add(rand() % 9 + 1, 0);
	}

	queuePri.sort();                    //сортировка элементов
	queuePri.show();                    //показ очереди

	for (int i = 0; i < 5; ++i) {
		curTime = time(NULL);
		Sleep(queuePri.extract() * 1000);    //извлечение элемента
		stat.add(curTime, time(NULL));
		queuePri.show();                    //показ очереди
		stat.show();
	}


	return 0;
}