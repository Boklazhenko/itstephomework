#pragma once

#ifdef INTEGER
#define fillArr fillArrInt
#define showArr showArrInt
#define findMinArr findMinArrInt
#define findMaxArr findMaxArrInt
#define sortArr sortArrInt
#define editArr editArrInt
void fillArrInt(int arr[], int size);
void showArrInt(int arr[], int size);
void findMinArrInt(int arr[], int size);
void findMaxArrInt(int arr[], int size);
void sortArrInt(int arr[], int size);
void editArrInt(int arr[]);
#endif

#ifdef DOUBLE
#define fillArr fillArrDouble
#define showArr showArrDouble
#define findMinArr findMinArrDouble
#define findMaxArr findMaxArrDouble
#define sortArr sortArrDouble
#define editArr editArrDouble
void fillArrDouble(double arr[], int size);
void showArrDouble(double arr[], int size);
void findMinArrDouble(double arr[], int size);
void findMaxArrDouble(double arr[], int size);
void sortArrDouble(double arr[], int size);
void editArrDouble(double arr[]);
#endif

#ifdef CHAR
#define fillArr fillArrChar
#define showArr showArrChar
#define findMinArr findMinArrChar
#define findMaxArr findMaxArrChar
#define sortArr sortArrChar
#define editArr editArrChar
void fillArrChar(char arr[], int size);
void showArrChar(char arr[], int size);
void findMinArrChar(char arr[], int size);
void findMaxArrChar(char arr[], int size);
void sortArrChar(char arr[], int size);
void editArrChar(char arr[]);
#endif
