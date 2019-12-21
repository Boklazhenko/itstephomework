#include <iostream>

double exponentation(double num, int extent);

int main()
{
	
}

double exponentation(double digit, int extent) {
	double result = 1;
	if (extent < 0)
	{
		extent = -extent;
		for (int i = 0; i < extent; ++i) {
			result = result * digit;
		}
		result = 1 / result;
	}
	else if (extent == 0)
	{
		result = 1;
	}
	else
	{
		for (int i = 0; i < extent; ++i)
			result = result * digit;
	}

	return result;
}