//	����������� ����������, ����������� ������� ������ ��������. ������ 
//	���� �������, ���������� ������� �� �������, � ������� �� ������� ���� ���� 
//	���������. ������ ����� ������ �������� � ������� � ����������� �� 
//	������ ����������. ���������� ��������� ���������� ������(������������,
//	�����) � ��������� �������. ������������� ����� ���������� �� �����.

#include <iostream>
#include <time.h>
#include "queue.h"
#include "printingQueue.h"

void delay(int ms) // ��������- ��������� ����� �������� � �������������
{
	int c = clock() + ms;
	while (clock() < c);
}

void main()
{
	Queue Printer(3);
	PrintingQueue clients(3);

	Printer.add(111, 2);
	Printer.add(222, 1);
	Printer.add(333, 3);
	


	delay(100);
	std::cout << "all queue:" << std::endl;
	Printer.show();
	
	int var1 = Printer.extract();
	std::cout << "Now printing: " << var1 << std::endl;
	int t1 = clock();
	std::cout << "time:" << t1 << std::endl;
	clients.add(var1, t1);
	delay(100);
	
	int var2 = Printer.extract();
	std::cout << "Now printing: " << var2 << std::endl;
	int t2 = clock();
	std::cout << "time:" << t2 << std::endl;
	clients.add(var2, t2);
	delay(100);

	int var3 = Printer.extract();
	std::cout << "Now printing: " << var3 << std::endl;
	int t3 = clock();
	std::cout << "time:" << t3 << std::endl;
	clients.add(var3, t3);

	std::cout << "clients in queue: " << std::endl;
	clients.show();
}