#pragma once
#include "teacher.h"
#include "student.h"

struct Course
{
	const char* Name;
	Student** Group;
	Teacher* Teacher;
	int CountOfStudents=0;
};
enum class Error { No,  TeacherAlreadyRegistered};

Error set(Course& course, Teacher* teacher);
Course* unsetTeacher(Course& course);
int getStudentsCount(Course* course);
void remove(Course& course, Student& student);
void add(Course& course, Student& student);
void add(Course& course, Student* student);
void print(Course& course);
void print(Course& course, void(*)(const char*));
bool isExist(Course& course, Student& student);
void sortStudents(Course& course, int(*)(const void*, const void*));
char* toString(Course& course);