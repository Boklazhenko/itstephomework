#include "Teacher.h"
#include "Course.h"
#include "Student.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <time.h>

using namespace std;

char* toString(const Teacher teacher)
{
	char* buff = new char[255];
	sprintf_s(buff, 255, "[%s %s %d %d ]", teacher.Name, teacher.LastName, teacher.Salary, teacher.Experience);
	return buff;
}
