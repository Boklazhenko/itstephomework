#include "Gauge.h"

Gauge::Gauge()
{
	_start = std::chrono::system_clock::now();
}

Gauge::~Gauge()
{
	_end = std::chrono::system_clock::now();
	std::cout << std::chrono::duration_cast<std::chrono::seconds>(_end - _start).count() << std::endl;
}
