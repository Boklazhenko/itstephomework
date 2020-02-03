//Реализовать структуру «Автомобиль»(длина, клиренс(высота посадки), объем двигателя,
//	мощность двигателя, диаметр колес, цвет, тип коробки передач).Создайте функции для задания
//	значений, отображения значений, поиска значений.

#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>
#include <vector>
#define _CRT_SECURE_NO_WARNINGS
using namespace std;

struct Info
{
	char phone[30]; // Телефон
	char email[40]; // Е-майл
};

struct TAvto
{
	char marka[30]; //марка машины 
	float length_avto; // длина
	float clearance; // клиренс
	int potencia; // объем двигателя
	int engine_power; // мощность двигателя
	float diameter_of_wheels; // диаметр колес
	char color[30]; // цвет
	char transmission_type[30]; // тип коробки передач
	Info inf;
};

typedef char* Name; // Тип данных для имени файла
typedef FILE File; //Тип данных для файловой переменной
Name NameFile = new char[32]; // Переменная для имени файла
File* file; // Файловая переменная
TAvto Avto; // Перменная для структуры TAvto
int flag = 0; // Флаг открытия файла

void menu(void) // Меню программы
{
	setlocale(0, "");
	system("cls");
	cout << "МЕНЮ" << endl
		<< "1.Создание / открытие базы  автомобилей" << endl
		<< "2.Добавление автомобиля в базу" << endl
		<< "3.Удаление автомобиля из базы" << endl
		<< "4.Просмотр всей базы" << endl
		<< "5.Обновление записи с заданным номером" << endl
		<< "6.Поиск автомобилей по <высоте посадки> (не менее 15.0 см). " << endl
		<< "7.Выход [ESC]" << endl;
}

void enter_Avto(TAvto& Avto) // Ввод данных
{
	setlocale(0, "");

	cout << "Марка автомобиля: ";
	cin >> Avto.marka;
	cout << "Длина автомобиля в м : ";
	cin >> Avto.length_avto;
	cout << "Клиренс (высота посадки в см): ";
	cin >> Avto.clearance;
	cout << "Объем двигателя: ";
	cin >> Avto.potencia;
	cout << "Мощность двигателя: ";
	cin >> Avto.engine_power;
	cout << "Диаметр колес: ";
	cin >> Avto.diameter_of_wheels;
	cout << "Цвет: ";
	cin >> Avto.color;
	cout << "Тип коробки передач: ";
	cin >> Avto.transmission_type;
	cout << "<Информация>" << endl;
	cout << "Телефон: ";
	cin >> Avto.inf.phone;
	cout << "E-mail: ";
	cin >> Avto.inf.email;

}

void show_Avto(TAvto Avto) // Вывод автомобилей
{
	setlocale(0, "");
	cout << "<Автомобиль>" << endl;
	cout << "Марка автомобиля: " << Avto.marka << endl;
	cout << "Длина автомобиля в (м) : " << Avto.length_avto << endl;
	cout << "Клиренс (высота посадки в см): " << Avto.clearance << endl;
	cout << "Объем двигателя: " << Avto.potencia << endl;
	cout << "Мощность двигателя: " << Avto.engine_power << endl;
	cout << "Диаметр колес: " << Avto.diameter_of_wheels << endl;
	cout << "Цвет: " << Avto.color << endl;
	cout << "Тип коробки передач: " << Avto.transmission_type << endl;
	cout << "<Информация>" << endl;
	cout << "Телефон: " << Avto.inf.phone << endl;
	cout << "E-mail: " << Avto.inf.email << endl;
}

void creatOpenFile(Name& NameFile, int& flag) // Создание,открытие файла базы данных
{
	setlocale(0, "");
	char YorN;
	flag = 0;
	cout << "Введите имя файла: ";
	cin >> NameFile;
	cin.clear();
	file = fopen(NameFile, "r+");
	if (file == NULL)
	{
		do
		{
			system("cls");
			cout << "Файла " << NameFile << " " << "не существует!" << endl;
			cout << "Создать файл " << NameFile << " ?" << endl;
			cout << "Нажмите Y / N" << endl;
			YorN = _getch();
			if (YorN == 'Y' || YorN == 'y')
			{
				file = fopen(NameFile, "a+");
				cout << "Файл создан!" << endl;
				system("pause");
				flag = 1;
				fclose(file);
			}
			if (YorN == 'N' || YorN == 'n')
			{
				cout << "Файл не создан!" << endl;
				system("pause");
				fclose(file);
			}
		} while (!(YorN == 'Y' || YorN == 'y' || YorN == 'N' || YorN == 'n'));
	}
	else
	{
		flag = 1;
		fclose(file);
		cout << "Файл успешно открыт!" << endl;
		system("pause");
	}
}

void recordAvto(Name NameFile, TAvto& Avto, int flag) // Добавление авто в базу
{
	setlocale(0, "");
	if (flag)
	{
		file = fopen(NameFile, "a+");
		enter_Avto(Avto);
		fwrite(&Avto, sizeof(Avto), 1, file);
		fclose(file);
	}
	else
	{
		cout << endl << "Выберите файл для работы!" << endl;
		cout << "Выберите пункт 1 в меню!" << endl;
		_getch();
	}
}

void show_File() // Вывод файла на экран
{
	setlocale(0, "");
	int i = 0;
	if (flag)
	{
		file = fopen(NameFile, "r+");
		cout << "База  автомобилей" << endl << endl;
		while (fread(&Avto, sizeof(TAvto), 1, file))
		{
			cout << "Номер записи: " << i + 1 << endl << endl;
			show_Avto(Avto);
			cout << endl << endl;
			i++;

		}
		_getch();
		fclose(file);
	}
	else
	{
		cout << "Выберете файл для работы!" << endl;
		cout << "Выберите пункт 1 в меню!" << endl;
		_getch();
	}
}

long filesize(File* file) // Размер файла
{
	long curpos, length;

	curpos = ftell(file); // Запоминаем текущее положение
	fseek(file, 0L, SEEK_END); // Переходим в конец
	length = ftell(file); // Запоминаем положение в конце
	fseek(file, curpos, SEEK_SET); //Перемещаем на старое положение
	return length;
}

void updateAvto(Name NameFile, TAvto& Avto, int flag)
{
	setlocale(0, "");
	long i = 0;
	if (flag)
	{
		file = fopen(NameFile, "r+");
		cout << "Обновление записи с заданым номером" << endl << endl
			<< "Введите номер записи для обновления "
			<< "(всего записей  "
			<< (filesize(file) / sizeof(Avto))
			<< "): ";
		cin >> i;
		fpos_t t; // Перемещаемся на i запись
		fseek(file, (i - 1) * sizeof(Avto), SEEK_CUR); // Запоминаем текущее положение
		fgetpos(file, &t);

		fread(&Avto, sizeof(Avto), 1, file);
		show_Avto(Avto);
		cout << endl << endl;

		char YorN;
		cout << "Обновить данные?" << endl;
		cout << "Нажмите Y / N" << endl;
		do
		{
			YorN = _getch();
			if (YorN == 'Y' || YorN == 'y')
			{
				system("cls");
				enter_Avto(Avto); // Вводим новые значения
				fsetpos(file, &t); // Переходим на старое место
				fwrite(&Avto, sizeof(Avto), 1, file); // Записываем новые значения
				cout << "Данные обновлены!" << endl;
				fclose(file);
			}
			if (YorN == 'N' || YorN == 'n')
			{
				cout << "Данные не обновленны!" << endl;
				fclose(file);
			}
		} while (!(YorN == 'Y' || YorN == 'y' || YorN == 'N' || YorN == 'n'));
		cout << endl << "Для продолжения нажмите любую клавашу!" << endl;
		_getch();
	}
	else
	{
		cout << endl;
		cout << "Выберите файл для работы" << endl
			<< "Выберите пункт 1 в меню";
		_getch();
	}
}

void deleteAvto(Name NameFile, TAvto& Avto, int flag) // Удаление авто из базы
{
	setlocale(0, "");
	long i = 0, k = 0;
	File* temp;
	if (flag)
	{
		file = fopen(NameFile, "r+");

		cout << "Удаление записи с базы" << endl << endl
			<< "Введите номер записи для удаления "
			<< "(всего записей "
			<< (filesize(file) / sizeof(Avto))
			<< "): ";
		cin >> i;

		fseek(file, (i - 1) * sizeof(Avto), SEEK_CUR); // Перемещаемся на запись с номером i
		fread(&Avto, sizeof(Avto), 1, file);
		show_Avto(Avto);
		cout << endl;

		char YorN;
		cout << "Удалить данные?" << endl;
		cout << "Y / N" << endl;
		do
		{

			YorN = _getch();
			if (YorN == 'Y' || YorN == 'y')
			{
				fseek(file, 0L, SEEK_SET);

				temp = fopen("Temp", "w+");
				while (fread(&Avto, sizeof(Avto), 1, file))
				{
					if (k != (i - 1)) fwrite(&Avto, sizeof(Avto), 1, temp);
					k++;
				}
				cout << "Запись удалена!" << endl;
				fclose(temp);
				fclose(file);
				remove(NameFile);   // Удаляем старый файл
				rename("Temp", NameFile);// Переименовываем временный файл
			}
			if (YorN == 'N' || YorN == 'n')
			{
				cout << "Запись не удалена!" << endl;
				fclose(file);
			}
		} while (!(YorN == 'Y' || YorN == 'y' || YorN == 'N' || YorN == 'n'));

		cout << endl << "Для продолжения нажмите любую клавашу!" << endl;
		_getch();
	}
	else
	{
		cout << endl << "Выберите файл для работы!" << endl
			<< "Выберите пункт 1 в меню!";
		_getch();
	}
}

void poisk_Avto(Name NameFile, TAvto& Avto, int flag)
{
	setlocale(0, "");
	if (flag)
	{
		vector <TAvto> vec_auto;
		file = fopen(NameFile, "r+");
		fread(&Avto, sizeof(TAvto), 1, file);
		int fflag = 0;

		file = fopen(NameFile, "r+");
		while (fread(&Avto, sizeof(TAvto), 1, file))
		{
			if (Avto.clearance > 15)
				vec_auto.push_back(Avto);
		}

		for (unsigned int iter = 0; iter < vec_auto.size(); ++iter)
		{
			cout << "Марка автомобиля: " << vec_auto.at(iter).marka << endl;
			cout << "Длина автомобиля в м: " << vec_auto.at(iter).length_avto << endl;
			cout << "Клиренс (высота посадки в см): " << vec_auto.at(iter).clearance << endl;
			cout << "Объем двигателя: " << vec_auto.at(iter).potencia << endl;
			cout << "Мощность двигателя: " << vec_auto.at(iter).engine_power << endl;
			cout << "Диаметр колес: " << vec_auto.at(iter).diameter_of_wheels << endl;
			cout << "Цвет: " << vec_auto.at(iter).color << endl;
			cout << "Тип коробки передач: " << vec_auto.at(iter).transmission_type << endl;
			cout << "Информация" << endl;
			cout << "Телефон: " << vec_auto.at(iter).inf.phone << endl;
			cout << "E-mail: " << vec_auto.at(iter).inf.email << endl;
			cout << "*******************" << endl;
		}

		_getch();
		fclose(file);
	}
	else
	{
		cout << endl;
		cout << "Выберите файл для работы!" << endl
			<< "Выберите пункт 1 в меню!";
		_getch();
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char YorN;
	system("cls");
	do
	{
		menu();
		YorN = _getch();
		switch (YorN)
		{
		case '1':   system("cls");
			creatOpenFile(NameFile, flag);
			break;
		case '2':   system("cls");
			recordAvto(NameFile, Avto, flag);
			break;
		case '3':   system("cls");
			deleteAvto(NameFile, Avto, flag);
			break;
		case '4':   system("cls");
			show_File();
			break;
		case '5':   system("cls");
			updateAvto(NameFile, Avto, flag);
			break;
		case '6':   system("cls");
			poisk_Avto(NameFile, Avto, flag);
			break;
		case '7':
			exit(1);
		}
	} while (YorN != 27);// код  Esc=27
	return 0;
	delete[] NameFile;
}