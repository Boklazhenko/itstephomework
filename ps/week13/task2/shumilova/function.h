#pragma once

#ifdef Integer

#define fillArr fillArrayInt
#define showArr showArrayInt
#define searchMin searchMinArrayInt
#define searchMax searchMaxArrayInt
#define sortArr sortArrayInt
#define editArr editArrayInt

void fillArrayInt(int array[], const int size);
void showArrayInt(int array[], const int size);
int searchMinArrayInt(int array[], int size);
int searchMaxArrayInt(int array[], int size);
void sortArrayInt(int array[], int size);
void editArrayInt(int array[], int index, int newNum);

#endif


#ifdef Double

#define fillArr fillArrayDouble
#define showArr showArrayDouble
#define searchMin searchMinArrayDouble
#define searchMax searchMaxArrayDouble
#define sortArr sortArrayDouble
#define editArr editArrayDouble

void fillArrayDouble(double array[], const int size);
void showArrayDouble(double array[], const int size);
double searchMinArrayDouble(double array[], int size);
double searchMaxArrayDouble(double array[], int size);
void sortArrayDouble(double array[], int size);
void editArrayDouble(double array[], int index, double newNum);

#endif

#ifdef Char

#define fillArr fillArrayChar
#define showArr showArrayChar
#define searchMin searchMinArrayChar
#define searchMax searchMaxArrayChar
#define sortArr sortArrayChar
#define editArr editArrayChar

void fillArrayChar(char array[], const int size);
void showArrayChar(char array[], const int size);
char searchMinArrayChar(char array[], int size);
char searchMaxArrayChar(char array[], int size);
void sortArrayChar(char array[], int size);
void editArrayChar(char array[], int index, char newNum);

#endif 