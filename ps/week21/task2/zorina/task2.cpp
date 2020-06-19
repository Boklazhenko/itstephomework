// Разработать приложение, имитирующее очередь печати принтера. Должны быть клиенты, посылающие запросы на принтер,
//у каждого из которых есть свой приоритет. Каждый новый клиент
//попадает в очередь в зависимости от своего приоритета. Необходимо сохранять статистику печати (пользователь, время) в отдельной очереди.
//Предусмотреть вывод статистики на экран.
//

#include <iostream>
#include "clientReq.h"
#include "queue.h"

int main()
{
	Queue printerQueue;
	ClientReq client1("Lubov", 1);
	ClientReq client2("Director", 0);
	printerQueue.priorityPush(client1);
	printerQueue.priorityPush(client2);
	while (!printerQueue.isEmpty()) {
		std::cout << printerQueue.head().toString() << std::endl;
		printerQueue.pop();
	}
}