#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <string>

Student* createStudent(const char* name, const char* lastName)
{
	return new Student{ name,lastName,static_cast<int>(time(nullptr)) };
}

char* toString(Student* student)
{
	char* buff = new char[777];
	sprintf(buff, "Student name: %s, Last name: %s, Registration: %d", 
		student->Name, student->LastName, &student->Registration);
	return buff;
}
void print(Student* student, void(*stream)(char*))
{
	char* buff = new char[255];
	sprintf(buff, "%s %s", student->Name, student->LastName);
	stream(buff);
}