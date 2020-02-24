#pragma once

#ifdef INTEGER
void fillArrayInt(int arr[], int size);
void showArrayInt(int arr[], int size);
int searchMinValueInt(int arr[], int size);
int searchMaxValueInt(int arr[], int size);
void sortInt(int arr[], int size);
void editValueInt(int arr[], int itemNum, int newValue);
#define FillArrRand fillArrayInt
#define ShowArr showArrayInt
#define SearchMinValue searchMinValueInt
#define SearchMaxValue searchMaxValueInt
#define Sort sortInt
#define EditValue editValueInt
#endif
#ifdef DOUBLE
void fillArrayDouble(double arr[], int size);
void showArrayDouble(double arr[], int size);
double searchMinValueDouble(double arr[], int size);
double searchMaxValueDouble(double arr[], int size);
void sortDouble(double arr[], int size);
void editValueDouble(double arr[], int itemNum, double newValue);
#define FillArrRand fillArrayDouble
#define ShowArr showArrayDouble
#define SearchMinValue searchMinValueDouble
#define SearchMaxValue searchMaxValueDouble
#define Sort sortDouble
#define EditValue editValueDouble
#endif
#ifdef CHAR
void fillArrayChar(char arr[], int size);
void showArrayChar(char arr[], int size);
char searchMinValueChar(char arr[], int size);
char searchMaxValueChar(char arr[], int size);
void sortChar(char arr[], int size);
void editValueChar(char arr[], int itemNum, char newValue);
#define FillArrRand fillArrayChar
#define ShowArr showArrayChar
#define SearchMinValue searchMinValueChar
#define SearchMaxValue searchMaxValueChar
#define Sort sortChar
#define EditValue editValueChar
#endif