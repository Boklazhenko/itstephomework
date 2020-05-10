//Создать класс Overcoat(верхняя одежда)
//Реализовать перегруженные операторы :
//1. Проверка на равенство типов одежды(операция = = );
//2. Операцию присваивания одного объекта в другой
//(операция = );
//3. Сравнение по цене двух пальто одного типа(операция > ).

#define _CRT_SECURE_NO_WARNINGS
#include "Overcoat.h"


int main() {

	setlocale(0, "");

	Overcoat coat1("Зимнее пальто ", 25000);
	Overcoat coat2("Демисезонное пальто ", 18000);
	Overcoat coat3 = coat1;
	coat1.print();
	coat2.print();
	coat3.print();
	if (coat1 == coat2)
		cout << "Тип товара 1 и 2 одинаковый" << endl;
	else
		cout << "Тип товара 1 и 2  разный" << endl;
	if (coat3 > coat2)
		cout << "Товар 3 более дорогой чем 2" << endl;
	else
		cout << "Товар 2 более дорогой чем 3" << endl;
	return 0;
}