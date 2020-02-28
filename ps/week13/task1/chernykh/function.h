#pragma once

#ifdef INTEGER

void fillArrayInt(int array[], const int SIZE);

void printArrayInt(int array[], const int SIZE);

int searchMinElementInArrayInt(int array[], const int SIZE);

int searchMaxElementInArrayInt(int array[], const int SIZE);

void quickSortIntR(int* array, const int SIZE);

void editElementInArrayInt(int array[], const int SIZE, int elementToChange, int newValue);

#define fill fillArrayInt
#define print printArrayInt
#define searchMin searchMinElementInArrayInt
#define searchMax searchMaxElementInArrayInt
#define sort quickSortIntR
#define editEl editElementInArrayInt

#endif //INTEGER

#ifdef DOUBLE

void fillArrayDouble(double array[], const int SIZE);

void printArrayDouble(double array[], const int SIZE);

double searchMinElementInArrayDouble(double array[], const int SIZE);

double searchMaxElementInArrayDouble(double array[], const int SIZE);

void quickSortDoubleR(double* array, const int SIZE);

void editElementInArrayDouble(double array[], const int SIZE, int elementToChange, double newValue);

#define fill fillArrayDouble
#define print printArrayDouble
#define searchMin searchMinElementInArrayDouble
#define searchMax searchMaxElementInArrayDouble
#define sort quickSortDoubleR
#define editEl editElementInArrayDouble

#endif // DOUBLE

#ifdef CHAR

void fillArrayChar(char array[], const int SIZE);

void printArrayChar(char array[], const int SIZE);

char searchMinElementInArrayChar(char array[], const int SIZE);

char searchMaxElementInArrayChar(char array[], const int SIZE);

void quickSortCharR(char* array, const int SIZE);

void editElementInArrayChar(char array[], const int SIZE, int elementToChange, char newValue);

#define fill fillArrayChar
#define print printArrayChar
#define searchMin searchMinElementInArrayChar
#define searchMax searchMaxElementInArrayChar
#define sort quickSortCharR
#define editEl editElementInArrayChar

#endif // CHAR
