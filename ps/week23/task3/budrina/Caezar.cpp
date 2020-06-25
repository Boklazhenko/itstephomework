#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Caezar.h"


using namespace std;

void encryption() {
	setlocale(LC_ALL, "");
	char a;
	const int size = 256; // Константа, содержащая максимальную длину имени.
	char* fileName = new char[size]; // Строка для хранения имени файла ввода.
	char* fileOut = new char[size]; // Строка для хранения имени файла вывода.
	FILE* f1 = nullptr, * f2 = nullptr;

	cout << "Шифр Цезаря \n";
	cout << "Процесс шифрования" << endl;
	cout << "Путь к файлу ввода: \n";
	cin >> fileName;
	cout << "Путь к файлу вывода: \n";
	cin >> fileOut;

	FILE* f = fopen(fileName, "r");
	FILE* fo = fopen(fileOut, "w");
	int n, * key;

	if (f == nullptr)
	{
		cout << "Файл ввода отсутствует \n";

	}
	else {
		cout << "Введите ключ: \n";
		cin >> n;
		key = new int[n];
		while ((a = fgetc(f)) != EOF) {
			if (a >= 'a' && a <= 'z') {
				a = ('a' + (a - 'a' + n) % 26);
				fprintf(fo, "%c", a);
			}
			else if (a >= 'A' && a <= 'Z') {
				a = ('A' + (a - 'A' + n) % 26);
				fprintf(fo, "%c", a);
			}
			
			else {
				fprintf(fo, "%c", a);
			}
		}
		cout << "Процесс шифрования завершен \n";
		cout << "Нажмите Enter для выхода из программы \n";
		fclose(f);
		fclose(fo);

	}
}

void decryption() {
	setlocale(LC_ALL, "");
	char a;
	const int size = 256; // Константа, содержащая максимальную длину имени.
	char* fileName = new char[size]; // Строка для хранения имени файла ввода.
	char* fileOut = new char[size]; // Строка для хранения имени файла вывода.
	FILE* f1 = nullptr, * f2 = nullptr;

	cout << "Шифр Цезаря \n";
	cout << "Процесс дешифрования" << endl;
	cout << "Путь к файлу ввода: \n";
	cin >> fileName;
	cout << "Путь к файлу вывода: \n";
	cin >> fileOut;

	FILE* f = fopen(fileName, "r");
	FILE* fo = fopen(fileOut, "w");
	int n, * key;

	if (f == nullptr)
	{
		cout << "Файл ввода отсутствует \n";

	}
	else {
		cout << "Введите ключ: \n";
		cin >> n;
		key = new int[n];
		while ((a = fgetc(f)) != EOF) {
			if (a >= 'a' && a <= 'z') {
				a = ('z' - ('z' - a + n) % 26);
				fprintf(fo, "%c", a);
			}
			else if (a >= 'A' && a <= 'Z') {
				a = ('Z' - ('Z' - a + n) % 26);
				fprintf(fo, "%c", a);
			}
			
			else {
				fprintf(fo, "%c", a);
			}
		}
		cout << "Процесс дешифрования завершен \n";
		cout << "Нажмите Enter для выхода из программы \n";
		fclose(f);
		fclose(fo);

	}
}