#pragma once
#include "Teacher.h"
#include "Course.h"
#include <cstdint>

struct  Teacher
{
	const char* Name;
	const char* LastName;
	int Salary;
	int Experience;
};

char* toString(Teacher teacher);

