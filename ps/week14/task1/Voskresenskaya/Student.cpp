#include "Student.h"
#include "Course.h"
#include <iostream>
#include <ctime>
#include <string.h>
using namespace std;
void print(Student p)
{
	cout << p.Name << endl;
	cout << p.LastName << endl;
	cout << p.Registration << endl;
}
Student* createStudent(const char name[], const char lastName[])
{
	return  new Student { name, lastName, time(nullptr) };
}

char* toString( Student* const pStudent)
{
	char* buff = new char[255];
	sprintf_s(buff, 255, "[Name:%s LastName:%s  %ju  ]", pStudent->Name, pStudent->LastName, pStudent->Registration);
	return buff;
}