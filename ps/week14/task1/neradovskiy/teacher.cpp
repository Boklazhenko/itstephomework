#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "teacher.h"

void print(const Teacher& teacher)
{
	std::cout << "Name: " << teacher.Name << " Last name: " << teacher.LastName << " Salary: " << teacher.Salary <<
		" Experience: " << teacher.Experience << std::endl;
}
void print(const Teacher& teacher, void(*stream)(char* str))
{
	stream(toString(teacher));
}

Teacher* createTeacher(const char* name, const char* lastName)
{
	Teacher* pTeacher = new Teacher;
	pTeacher->Name = name;
	pTeacher->LastName = lastName;
	return pTeacher;
}
char* toString(const Teacher& teacher)
{
	char* buff = new char[510];
	sprintf(buff, "Name: %s Last name: %s Salary: %d Experience: %d", teacher.Name,
		teacher.LastName, teacher.Salary, teacher.Experience);
	return buff;
}
