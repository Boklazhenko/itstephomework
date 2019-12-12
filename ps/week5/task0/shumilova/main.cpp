// dz0-w5.cpp : 
// ДЕЛАТЬ ЭТО НЕОБЯЗАТЕЛЬНО!!
/*
1.	вывести на экран карту 10 на 10. заполненную символом '.' (пустота)
2.	принять от пользователя ввод, куда поставить героя. на карте символ 'h'
3.	принять от пользователя ввод, куда разместить сокровище. символ '1'. Посчитать расстояние от героя до сокровища
4.	принять от пользователя ввод, куда разместить еще 2 сокровища. символы '2' и '3'. Посчитать какое из трех сокровищ ближе всего к герою.
5.	пользователь вводит координату x,y на карте и и радуис r. сказать пользователю сколько сокровищ попадает в эту область (радиусом считать половину стороны квадрата )
6.	вывести на экран путь героя до ближайшего сокровища. например "up up left left left up"
*/

#include <iostream>
using namespace std;
int main()
{
    
	//1.	вывести на экран карту 10 на 10. заполненную символом '.' (пустота)
	const int size = 10;
	char map[size][size];
	
	//рисуем карту
	for (int x = 0; x < size; ++x)
	{
		for (int y = 0; y < size; ++y)
		{
			map[x][y] = '.';
			cout << map[x][y]<<" ";
		}
		cout << endl;
	}
	cout << endl;

	//2.	принять от пользователя ввод, куда поставить героя. на карте символ 'h'
	
	//вводим координаты героя
	int heroX, heroY;
	cout << "Enter hero coordinate 1-10: \n\n";
	cin >> heroX >>heroY;
	cout << endl;

	//проверка на диапазон карты	
	if (heroX < 1||heroX>size|| heroY < 1 || heroY>size)
	{
		cout << "Error! Enter from 1 to 10!\n \n" ;
	}
	else 

	//рисуем карту с героем
	map[heroX-1][heroY-1] = 'h';
	for (int x = 0; x < size; ++x)
	{
		for (int y = 0; y < size; ++y)
		{
			cout << map[x][y] << " ";
		}
		cout << endl;
	}
	cout << endl;

	//3. принять от пользователя ввод, куда разместить сокровище. символ '1'.

	//вводим координаты сокровища 1
	int treasure1X, treasure1Y;
	cout << "Enter first treasure coordinate 1-10: \n\n";
	cin >> treasure1X >> treasure1Y;
	cout << endl;

	//проверка на диапазон карты
	if (treasure1X < 1 || treasure1X>size || treasure1Y < 1 || treasure1Y>size)
		cout << "Error! Enter from 1 to 10!\n \n";
	
	//проверка на совместимость с героем
	if (treasure1X== heroX && treasure1Y== heroY)
	cout << "Error!\n\n";

	//рисуем карту с сокровищем 1
	map [treasure1X - 1][treasure1Y - 1] = '1';
	for (int x = 0; x < size; ++x)
	{
		for (int y = 0; y < size; ++y)
		{
			cout << map[x][y] << " ";
		}
		cout << endl;
	}
	cout << endl;

//Посчитать расстояние от героя до сокровища
int x1, y1;

if (treasure1X < heroX)
	x1 = heroX - treasure1X;
else x1 = treasure1X - heroX;

if (treasure1Y < heroY)
	y1 = heroY - treasure1Y;
else y1 = treasure1Y - heroY;
	
cout <<"From hero to first treasure: "<< x1 + y1 <<"\n\n";

//4. принять от пользователя ввод, куда разместить еще 2 сокровища. символы '2' и '3'.

//вводим координаты сокровища 2
int treasure2X, treasure2Y;
cout << "Enter second treasure coordinate 1-10: \n\n";
cin >> treasure2X >> treasure2Y;
cout << endl;

//проверка на диапазон карты
if (treasure2X < 1 || treasure2X>size || treasure2Y < 1 || treasure2Y>size)
	cout << "Error! Enter from 1 to 10!\n \n";

//проверка на совместимость с героем и сокровищем 1
if (treasure2X == heroX && treasure2Y == heroY)
cout << "Error!\n\n";
if (treasure2X == treasure1X && treasure2Y == treasure1X)
cout << "Error!\n\n";

//вводим координаты сокровища 3
int treasure3X, treasure3Y;
cout << "Enter third treasure coordinate 1-10: \n\n";
cin >> treasure3X >> treasure3Y;
cout << endl;

//проверка на диапазон карты
if (treasure3X < 1 || treasure3X>size || treasure3Y < 1 || treasure3Y>size)
	cout << "Error! Enter from 1 to 10!\n \n";

//проверка на совместимость с героем и сокровищем 1 и сокровищем 2
if (treasure3X == heroX && treasure3Y == heroY)
cout << "Error!\n\n";
if (treasure3X == treasure1X && treasure3Y == treasure1X)
cout << "Error!\n\n";
if (treasure3X == treasure2X && treasure3Y == treasure2X)
cout << "Error!\n\n";

//рисуем карту с сокровищем 2 и сокровищем 3
map [treasure2X - 1][treasure2Y - 1] = '2';
map [treasure3X - 1][treasure3Y - 1] = '3';

for (int x = 0; x < size; ++x)
{
	for (int y = 0; y < size; ++y)
	{
		cout << map[x][y] << " ";
	}
	cout << endl;
}
cout << endl;

//считаем расстояние от героя до сокровища 2
int x2, y2;

if (treasure2X < heroX)
	x2 = heroX - treasure2X;
else x2 = treasure2X - heroX;
	
if (treasure2Y < heroY)
	y2 = heroY - treasure2Y;
else y2 = treasure2Y - heroY;

cout << "From hero to first treasure: " << x1 + y1 << "\n\n";
cout << "From hero to second treasure: " << x2 + y2 << "\n\n";

//считаем расстояние от героя до сокровища 3
int x3, y3;

if (treasure3X < heroX)
	x3 = heroX - treasure3X;
else x3 = treasure3X - heroX;

if (treasure3Y < heroY)
	y3 = heroY - treasure3Y;
else y3 = treasure3Y - heroY;

cout << "From hero to third treasure: " << x3 + y3 << "\n\n";

//Посчитать какое из трех сокровищ ближе всего к герою.

int minX=10, minY=10; //minX и minY - кратчайшее расстояние от героя до любого сокровища
if (x1 + y1 < minX + minY)
{
	minX = x1, minY = y1;
	
	if (x2 + y2 < minX + minY)
	{
		minX = x2, minY = y2;

		if (x3 + y3 < minX + minY)
		{
			minX = x3, minY = y3;
		}
	}
}
int count = 0; //в счетчик записывается ближайшее сокровище
if (minX == x1 && minY == y1)
{
	cout << "The closest treasure: first\n";
	count = 1;
}

if (minX == x2 && minY == y2)
{
	cout << "The closest treasure: second\n";
	count = 2;
}

if (minX == x3 && minY == y3)
{
	cout << "The closest treasure: third\n";
	count = 3;
}
cout << endl;

//6.	вывести на экран путь героя до ближайшего сокровища.например "up up left left left up"

int countX, countY; //счетчики для определения направления
if (count == 1) 
{
	if (treasure1X < heroX)
		countX = -1;
	if (treasure1X > heroX)
		countX = 1;
	if (treasure1X == heroX)
		countX = 0;

	if (treasure1Y < heroY)
		countY = -1;
	if (treasure1Y > heroY)
		countY = 1;
	if (treasure1Y == heroY)
		countY = 0;
}
else
if (count == 2)
{
	if (treasure2X < heroX)
		countX = -1;
	if (treasure2X > heroX)
		countX = 1;
	if (treasure2X == heroX)
		countX = 0;

	if (treasure2Y < heroY)
		countY = -1;
	if (treasure2Y > heroY)
		countY = 1;
	if (treasure2Y == heroY)
		countY = 0;
}
else
if (count == 3)
{
	if (treasure3X < heroX)
		countX = -1;
	if (treasure3X > heroX)
		countX = 1;
	if (treasure3X == heroX)
		countX = 0;

	if (treasure3Y < heroY)
		countY = -1;
	if (treasure3Y > heroY)
		countY = 1;
	if (treasure3Y == heroY)
		countY = 0;
}

cout << "---------------\n";
cout << "You must go: \n";

int i = 0; //счетчик для количества шагов
while (i < minX)
{
	if (countX == 1)
		cout << "down, ";
	if (countX == -1)
		cout << "up, ";
	++i;
}
cout << "\n";

int j = 0;
while (j < minY)
{
	if (countY == 1)
		cout << "right, ";
	if (countY == -1)
		cout << "left, ";
	++j;
}
cout << "\n";
cout << endl;

// !!! в шестом пункте получилось много счетчиков, сильно намудрено, зато ВСЁ РАБОТАЕТ!!!!!)))

//5. пользователь вводит координату x, y на карте и и радуис r.
//сказать пользователю сколько сокровищ попадает в эту область (радиусом считать половину стороны квадрата)

cout << "---------------\n";
int coorX, coorY, rad; //вводим координаты Х и радиус
cout << "Enter coordinate 1-10: \n\n";
cin >> coorX >> coorY;
cout << "\nEnter radius: \n\n";
cin >> rad;
cout << endl;

//рисуем карту с Х
map [coorX - 1][coorY - 1] = 'X';

for (int x = 0; x < size; ++x)
{
	for (int y = 0; y < size; ++y)
	{
		cout << map[x][y] << " ";
	}
	cout << endl;
}

//определяем диапазон поиска
int up = coorX - rad;
int down = coorX + rad;
int left = coorY - rad;
int right = coorY + rad;

//сравниваем сокровища с диапазоном
int count2 = 0;// счетчик для подсчета сокровищ в диапазоне

if (treasure1X <= down && treasure1X >= up && treasure1Y >= left && treasure1Y <= right)
++count2;
if (treasure2X <= down && treasure2X >= up && treasure2Y >= left && treasure2Y <= right)
++count2;
if (treasure3X <= down && treasure3X >= up && treasure3Y >= left && treasure3Y <= right)
++count2;

cout << "\nThere are " <<count2<<" treasures in a radius\n\n";


}

