#pragma once
#include "Teacher.h"
#include "Student.h"
#include <cstdlib>

struct Course
{
	const char* Name;
	struct Teacher* teacher=nullptr;
	struct Student** studentArr = new Student *[0];
	int StudentCount = 0;
};
enum Error
{
	No,
	TeacherAlreadyRegistered,
};
Error set(Course& cource, Teacher* pTeachar);
void  unsetTeacher(Course & cource);
void add(Course & cource, Student& student);
void remove(Course &cource, Student & student);
void print(Course cource);
void print(Course cource, void(*toCerr)(const char*));
int getStudentsCount(Course* h);
bool isExist(Course& cource, Student& pStudent);
void sortStudents(Course h, int (*byRegistration)(const void*, const void*));
char* toString(Course cource);