#include <iostream>
#include "File.h"
#include "Gauge.h"

int main()
{
	size_t count = 1000000000;
	File file("Test.txt");
	{
		Gauge a;
		for (int i = 0; i < count; ++i)
			file.write("New hello");
	}
	{
		Gauge b;
		for (int i = 0; i < count; ++i)
			file.write(48);
	}
	{
		Gauge c;
		for (int i = 0; i < count; ++i)
			file.write(25.25);
	}
	{
		Gauge d;
		for (int i = 0; i < count; ++i)
			file.write(true);
	}
}