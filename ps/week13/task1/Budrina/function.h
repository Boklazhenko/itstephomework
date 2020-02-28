#pragma once
#ifdef INTEGER
void writeArrayInt(int arr[], int size);
void showArrayInt(int arr[], int size);
void sortArrayInt(int arr[], int size);
void scanMinInt(int arr[], int size);
void scanMaxInt(int arr[], int size);
int editInt(int arr[], int size);
#define FillArrRand writeArrayInt
#define ShowArr showArrayInt
#define Sort sortArrayInt
#define SearchMinValue scanMinInt
#define SearchMaxValue scanMaxInt
#define EditValue editInt
#endif
#ifdef DOUBLE
void writeArrayDouble(double arr[], int size);
void showArrayDouble(double arr[], int size);
void sortArrayDouble(double arr[], int size);
void scanMinDouble(double arr[], int size);
void scanMaxDouble(double arr[], int size);
double editDouble(double arr[], int size);
#define FillArrRand writeArrayDouble
#define ShowArr showArrayDouble
#define SearchMinValue scanMinDouble
#define SearchMaxValue scanMaxDouble
#define Sort sortArrayDouble
#define EditValue editDouble
#endif
#ifdef CHAR
void writeArrayChar(char arr[], int size);
void showArrayChar(char arr[], int size);
void sortArrayChar(char arr[], int size);
void scanMinChar(char arr[], int size);
void scanMaxChar(char arr[], int size);
char editChar(char arr[], int size);
#define FillArrRand writeArrayChar
#define ShowArr showArrayChar
#define Sort sortArrayChar
#define SearchMinValue scanMinChar
#define SearchMaxValue scanMaxChar
#define EditValue editChar
#endif

