#pragma once
#include "teacher.h"
#include "student.h"

using namespace std;

struct Course
{
	const char* Name;
	Teacher* pTeacher = nullptr;
	Student** Students;// = new const Student * [0];
	int studentsCount = 0;
};

enum Error
{
	No,
	TeacherAlreadyRegistered
};
Error set(Course& course, Teacher* teacher);
void unsetTeacher(Course& course);
void remove(Course& course, Student& student);
void add(Course& course, Student& student);
//void add(Course& course, Student* student);
void print(Course& course);
void print(Course& course, void(*)(const char*));
int getStudentsCount(Course* course);
bool isExist(Course& course, Student& student);
void sortStudents(Course& course, int(*)(const void*, const void*));
char* toString(Course& course);