#pragma once
#include <iostream>
#include <chrono>
class Gauge {
public:
	Gauge();
	~Gauge();
private:
	std::chrono::time_point<std::chrono::system_clock> _start, _end;
};