#pragma once
#include <ctime>

struct Student
{
	const char* Name;
	const char* LastName;
	int Registration;
};

Student* createStudent(const char* name, const char* lastName);
char* toString(const Student* const student);

