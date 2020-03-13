#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "teacher.h"

char* toString(Teacher& teacher)
{
	char* buff = new char[255];

	sprintf(buff, "TEACHER Name: %s Lastname: %s Salary: %d Eperience: %d", teacher.Name, teacher.LastName, teacher.Salary, teacher.Experience);
	return buff;
}