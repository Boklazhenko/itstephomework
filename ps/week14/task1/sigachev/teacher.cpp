#define _CRT_SECURE_NO_WARNINGS
#include "teacher.h"
#include <string>

char* toString(const Teacher& const teacher)
{
	char* buff = new char[777];
	sprintf(buff, "Teacher name: %s, Last name: %s, Salary: %d, Experience: %d years", 
		teacher.Name, teacher.LastName, teacher.Salary, teacher.Experience);
	return buff;
}