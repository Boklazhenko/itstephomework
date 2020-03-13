#pragma once
#include "teacher.h"
#include "student.h"
#include <string>

struct Course
{
	const char* Name;
	Teacher* pTeacher;
	Student** Students;
	int studentsCount = 0;
};

enum Error
{
	TeacherAlreadyRegistered,
	No
};

Error set(Course& course, Teacher* teacher);
void unsetTeacher(Course& course);
void remove(Course& course, Student& student);
int getStudentsCount(const Course* const course);
Student** add(Course& course, Student& student);
void print(const Course& course);
void print(Course& course, void(*toStream)(const char* str));
bool isExist(const Course& const course, const Student& const student);
void sortStudents(Course& course, int(*comp)(const void* lhs, const void* rhs));
char* toString(Course& course);