#pragma once

struct Teacher
{
	const char* Name;
	const char* LastName;
	int Salary;
	int Experience;
};

char* toString(Teacher& teacher);