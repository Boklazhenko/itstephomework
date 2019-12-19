#include <iostream>
double countAverage(double size,double arr[])
{
	double sum = 0,average=0;   
	for (int i = 0; i < size; ++i)
		sum += arr[i];
	average = sum / size;
	return average;
}

int main() //проверка работы функции
{
	/*const int size = 5;    
	double arr[5] = { 7,4,5,3,2 };
	std::cout<<countAverage(5, arr);*/ 
}
