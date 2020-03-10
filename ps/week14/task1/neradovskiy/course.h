#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "teacher.h"
#include "student.h"
struct Course
{
	const char* Name;
	Teacher* Teacher;
	const Student* Group[255];		//так и не смог сделать без объ€влени€ размерности группы
	int GroupCount = 0;
};

enum Error {
	No,
	TeacherAlreadyRegistered
};

Error set(Course& course, Teacher* pTeacher);
void unsetTeacher(Course& course);
void remove(Course& course, const Student& student);
int getStudentsCount(const Course* course);
void add(Course& course, const Student& studen);
void add(Course* course, const Student* const student);
void add(Course& course, const Student* const* pStudents);
void print(const Course& course);
void print(const Course& course, void (*stream)(char* str));
bool isExist(const Course& course, const Student& student);
void sortStudents(Course& course, int (*comp)(const void* lhs, const void* rhs));
char* toString(Course& course);