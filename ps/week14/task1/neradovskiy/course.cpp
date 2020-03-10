#include "course.h"
#include <iostream>

Error set(Course& course, Teacher* pTeacher) {
	if (pTeacher->Name != nullptr && pTeacher->LastName != nullptr && pTeacher->Salary != 0 &&
		pTeacher->Experience != 0) {
		course.Teacher = pTeacher;
		return No;
	}
	return TeacherAlreadyRegistered;


}

void unsetTeacher(Course& course)
{
	course.Teacher = nullptr;
}

void remove(Course& course, const Student& student)
{
	int size = getStudentsCount(&course);
	for (int i = 0; i < size; ++i) {
		if (course.Group[i]->Registration != student.Registration)
			continue;
		if ((strcmp(course.Group[i]->Name, student.Name) == 0) && (strcmp(course.Group[i]->LastName, student.LastName) == 0)) {
			course.Group[i] = nullptr;
		}
	}
}

int getStudentsCount(const Course* course)
{
	return course->GroupCount;
}

void add(Course& course, const Student& student)
{
	int count = getStudentsCount(&course);
	course.Group[count] = &student;
}

void add(Course* course, const Student* const student)
{
	add(*course, *student);
}

void add(Course& course, const Student* const* pStudents)		
{
	int size = sizeof(**pStudents) / sizeof(*pStudents);
	int count = getStudentsCount(&course);
	for (int i = 0; i <= size; ++count, ++i)
		course.Group[count] = pStudents[i];
}

void print(const Course& course)		
{
	std::cout << "Course: " << course.Name << std::endl;
	std::cout << "Teacher: ";
	Teacher tempTeacher = *course.Teacher;
	print(tempTeacher);
	int count = getStudentsCount(&course);
	for (int i = 0; i < count; ++i)
		print(*course.Group[i]);
}

void print(const Course& course, void(*stream)(char* str))
{
	char buf[100];
	sprintf(buf, "Cource: %s", course.Name);
	stream(buf);
	print(*course.Teacher, stream);
	int size = getStudentsCount(&course);
	for (int i = 0; i < size; ++i)
		print(*course.Group[i], stream);
}

bool isExist(const Course& course, const Student& student)
{
	int size = getStudentsCount(&course);
	for (int i = 0; i < size; ++i) {
		if (course.Group[i]->Registration != student.Registration)
			continue;
		if ((strcmp(course.Group[i]->Name, student.Name) == 0) && (strcmp(course.Group[i]->LastName, student.LastName) == 0))
			return true;

	}
	return false;
}
void sortStudents(Course& course, int(*comp)(const void* lhs, const void* rhs))
{
	int count = sizeof(course.Group) / sizeof(Student);
	qsort(course.Group, count, sizeof(Student), (comp));
	std::reverse(&course.Group[0], &course.Group[count]);
}

char* toString(Course& course)
{
	char* buff = new char[1000];
	sprintf(buff, "Cource: %s ", course.Name);
	char* pTeacher = toString(*course.Teacher);
	strcat(buff, pTeacher);
	int size = getStudentsCount(&course);
	char** ppStudents = new char* [size];
	for (int i = 0; i < size; ++i) {
		ppStudents[i] = toString(course.Group[i]);
		strcat(buff, ppStudents[i]);
	}
	return buff;
}
