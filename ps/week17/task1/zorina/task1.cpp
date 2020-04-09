//Создать класс File, служаший оберткой над структурой FILE.Релизовать методы write, принимающие int, const char* . double, bool
//Создать класс Gauge, измеряющий время выполнения операции
//Замерить время выполнения записи в файл по 1 000 000 000 рандомных строк, даблов, булов, интов


#include <iostream>
#include "file.h"

int main()
{
	int count = 1000000;
	srand(time(nullptr));

	File intFile("intFile.txt"); {
		Gauge intG("IntG");

		for (int i = 0; i < count; ++i) {
			int num = rand() % 11;
			intFile.write(num);
		}
	}

	File doubleFile("doubleFile.txt"); {
		Gauge doubleG("doubleG");

		for (int i = 0; i < count; ++i) {
			double doubles = 0.1111111 * (rand() % 1000);
			doubleFile.write(doubles);
		}
	}

	File charFile("charFile.txt"); {
		Gauge charG("charG");
		const uint8_t length = 10;
		char str[length];
		for (int i = 0; i < count; ++i) {
			for (int j = 0; j < length; ++j)
				str[j] = rand() % 127;
			charFile.write(str);
		}
	}

	File boolFile("boolFile.txt"); {
		Gauge boolG("boolG");
		for (int i = 0; i < count; ++i) {
			bool bools = rand() % 2;
			boolFile.write(bools);
		}
	}
}