#pragma once
#ifdef INTEGER
void fillArrInt(int Arr[], const int size);
void showArrInt(int Arr[], const int size);
void sortInt(int Arr[], const int size);
int findMinInArrInt(int Arr[], const int size);
int findMaxInArrInt(int Arr[], const int size);
void changElArrInt(int Arr[], const int size);
#define fillArr fillArrInt
#define showArr showArrInt
#define sort sortInt 
#define findMinInArr findMinInArrInt
#define findMaxInArr findMaxInArrInt
#define changElArr changElArrInt 
#endif
#ifdef DOUBLE
void fillArrDouble(double Arr[], const int size);
void showArrDouble(double Arr[], const int size);
void sortDouble(double Arr[], const int size);
double findMinInArrDouble(double Arr[], const int size);
double findMaxInArrDouble(double Arr[], const int size);
void changElArrDouble(double Arr[], const int size);
#define fillArr fillArrDouble
#define showArr showArrDouble
#define sort sortDouble
#define findMinInArr findMinInArrDouble
#define findMaxInArr findMaxInArrDouble
#define changElArr changElArrDouble
#endif
#ifdef CHAR
void fillArrChar(char Arr[], const int size);
void showArrChar(char Arr[], const int size);
void sortChar(char Arr[], const int size);
char findMinInArrChar(char Arr[], const int size);
char findMaxInArrChar(char Arr[], const int size);
void changElArrChar(char Arr[], const int size);
#define fillArr fillArrChar
#define showArr showArrChar
#define sort sortChar
#define findMinInArr findMinInArrChar
#define findMaxInArr findMaxInArrChar
#define changElArr changElArrChar

#endif

