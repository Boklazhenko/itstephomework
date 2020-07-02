#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Caezar.h"


using namespace std;

void encryption() {
	setlocale(LC_ALL, "");
	char a;
	const int size = 256; // ���������, ���������� ������������ ����� �����.
	char* fileName = new char[size]; // ������ ��� �������� ����� ����� �����.
	char* fileOut = new char[size]; // ������ ��� �������� ����� ����� ������.
	FILE* f1 = nullptr, * f2 = nullptr;

	cout << "���� ������ \n";
	cout << "������� ����������" << endl;
	cout << "���� � ����� �����: \n";
	cin >> fileName;
	cout << "���� � ����� ������: \n";
	cin >> fileOut;

	FILE* f = fopen(fileName, "r");
	FILE* fo = fopen(fileOut, "w");
	int n, * key;

	if (f == nullptr)
	{
		cout << "���� ����� ����������� \n";

	}
	else {
		cout << "������� ����: \n";
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
		cout << "������� ���������� �������� \n";
		cout << "������� Enter ��� ������ �� ��������� \n";
		fclose(f);
		fclose(fo);

	}
}

void decryption() {
	setlocale(LC_ALL, "");
	char a;
	const int size = 256; // ���������, ���������� ������������ ����� �����.
	char* fileName = new char[size]; // ������ ��� �������� ����� ����� �����.
	char* fileOut = new char[size]; // ������ ��� �������� ����� ����� ������.
	FILE* f1 = nullptr, * f2 = nullptr;

	cout << "���� ������ \n";
	cout << "������� ������������" << endl;
	cout << "���� � ����� �����: \n";
	cin >> fileName;
	cout << "���� � ����� ������: \n";
	cin >> fileOut;

	FILE* f = fopen(fileName, "r");
	FILE* fo = fopen(fileOut, "w");
	int n, * key;

	if (f == nullptr)
	{
		cout << "���� ����� ����������� \n";

	}
	else {
		cout << "������� ����: \n";
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
		cout << "������� ������������ �������� \n";
		cout << "������� Enter ��� ������ �� ��������� \n";
		fclose(f);
		fclose(fo);

	}
}