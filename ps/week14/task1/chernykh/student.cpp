#define _CRT_SECURE_NO_WARNINGS
#include "student.h"
#include <string>

Student* createStudent(const char* name, const char* lastName)
{
	srand(time(nullptr));

	return new Student{ name, lastName, static_cast<int>(time(nullptr)) };
}

char* toString(const Student* const student)
{
	char* studentStr = new char[255];
	sprintf(studentStr, "Student name: %s, Student last name: %s, Student registration: %d", student->Name, student->LastName, &student->Registration);
	return studentStr;
}


