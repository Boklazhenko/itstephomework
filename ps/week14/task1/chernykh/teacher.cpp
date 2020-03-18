#define _CRT_SECURE_NO_WARNINGS
#include "teacher.h"
#include <string>

char* toString(const Teacher& const teacher)
{
	char* teacherStr = new char[255];
	sprintf(teacherStr, "Teacher name: %s, Teacher last name: %s, Teacher salary: %d, Teacher experience: %d years", teacher.Name, teacher.LastName, teacher.Salary, teacher.Experience);
	return teacherStr;
}
