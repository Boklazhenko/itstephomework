#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "student.h"

Student* createStudent(const char* name, const char* lastName, time_t registration)
{
	registration = time(nullptr);
	Student* student = new Student{ name,lastName,registration };
	return student;
}

char* toString(Student* student)
{
	char* buff = new char[255];
	sprintf(buff, "STUDENT Name: %s Lastname: %s Registration: %d", student->Name, student->LastName,(int) student->Registration);
	return buff;
}
char* toStringForOtherFunc(Student* student)
{
	char* buff = new char[255];
	sprintf(buff, "%s %s ", student->Name, student->LastName);
	return buff;
}
void print( Student* student, void(*stream)(char*)) 
{
	char* buff = new char[255];
	sprintf(buff, "%s %s", student->Name, student->LastName);
	stream(buff);
}