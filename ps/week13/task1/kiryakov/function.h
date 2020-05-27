#pragma once
#ifdef INTEGER
void fillArrInt(int arr[], const int size);
void printArrInt(int arr[], const int size);
void sortArrInt(int arr[], const int size);
int findArrIntMin(int arr[], const int size);
int findArrIntMax(int arr[], const int size);
void editArrInt(int arr[], const int size, int elem, int newVal);
#define fillArr fillArrInt
#define printArr printArrInt
#define sortArr sortArrInt
#define findArrMax findArrIntMax
#define findArrMin findArrIntMin
#define editArr editArrInt
#endif 

#ifdef DOUBLE
void fillArrDouble(double arr[], const int size);
void printArrDouble(double arr[], const int size);
void sortArrDouble(double arr[], const int size);
double findArrDoubleMin(double arr[], const int size);
double findArrDoubleMax(double arr[], const int size);
void editArrDouble(double arr[], const int size, int elem, double newVal);
#define fillArr fillArrDouble
#define printArr printArrDouble
#define sortArr sortArrDouble
#define findArrMax findArrDoubleMax
#define findArrMin findArrDoubleMin
#define editArr editArrDouble
#endif 

#ifdef CHAR
void fillArrChar(char arr[], const int size);
void printArrChar(char arr[], const int size);
void sortArrChar(char arr[], const int size);
char findArrCharMin(char arr[], const int size);
char findArrCharMax(char arr[], const int size);
void editArrChar(char arr[], const int size, int elem, char newVal);
#define fillArr fillArrChar
#define printArr printArrChar
#define sortArr sortArrChar
#define findArrMax findArrCharMax
#define findArrMin findArrCharMin
#define editArr editArrChar
#endif 