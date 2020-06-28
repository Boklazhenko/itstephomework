//	Задание 1. 
//		Есть строка символов, признаком конца, которой является «; ».
//	В строке могут быть фигурные, круглые, квадратные скобки. Скобки могут 
//	быть открывающими и закрывающими.Необходимо проверить корректность 
//	расстановки скобок.При этом необходимо, чтобы выполнились следующие 
//	правила :
//	
//		Каждая открывающая скобка должна иметь справа такую же закрывающую. 
//	Обратное также должно быть верно. Открывающие и закрывающие пары скобок 
//	разных типов должны быть правильно расположены по отношению друг к другу.
//	■ Пример правильной строки : 
//	({ x - y - z }[x + 2y] - (z + 4x)); 
//	■ Пример неправильной строки : 
//	([x - y - z}[x + 2y) - {z + 4x)].
//	Если все правила соблюдены выведите информационное сообщение о корректности 
//	строки, иначе покажите строку до места возникновения первой ошибки.

#include <iostream>
#include "stack.h"
#include <stdlib.h>

//	general idea belongs to Anna Zorina

void main()
{
	Stack lineCheck;
	char c1[] = "({x-y-z}[x+2y]-(z+4x));";
	char c2[] = "([x-y-z}[x+2y)-{z+4x)];";
	int size = strlen(c1);
	
	char open[] = { '(','[', '{' };
	char close[] = { ')',']', '}' };
	bool isCorrect = true;
	char tempTop;
	int index = 0;

	std::cout << "Now checking " << c1 << std::endl;

	for (int i = 0; isCorrect && c1[i] != ';'; i++) {
		for (int  j = 0; j < 3; j++) {
			if (c1[i] == open[j]) {
				lineCheck.push(c1[i]);
				break;
			}
			else if (c1[i] == close[j]) {
				tempTop = lineCheck.pop();
				if (tempTop != open[j]) {
					isCorrect = false;
					index = i;
				}
				break;
			}
		}
	}

	if (isCorrect && lineCheck.isEmpty())
	    std::cout << "Line is correct" << std::endl << std::endl;
	else {
	    std::cout << "Line contains an error: " << std::endl;
	    for (int i = 0; i < index; ++i)
	        std::cout << c1[i];
	}

	std::cout << "Now checking " << c2 << std::endl;

	for (int i = 0; isCorrect && c2[i] != ';'; i++) {
		for (int j = 0; j < 3; j++) {
			if (c2[i] == open[j]) {
				lineCheck.push(c2[i]);
				break;
			}
			else if (c2[i] == close[j]) {
				tempTop = lineCheck.pop();
				if (tempTop != open[j]) {
					isCorrect = false;
					index = i;
				}
				break;
			}
		}
	}

	if (isCorrect && lineCheck.isEmpty())
		std::cout << "Line is correct" << std::endl << std::endl;
	else {
		std::cout << "Line contains an error: " << std::endl;
		for (int i = 0; i < index; ++i)
			std::cout << c2[i];
	}
	std::cout << std::endl;
}
