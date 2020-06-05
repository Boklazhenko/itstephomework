#pragma once
#include <iostream>
#include <ctime>

class ClientReq {
public:
	ClientReq();
	ClientReq(const char* name, int priority);

	int showPriority()const;
	const char* const toString() const;;
private:
	const char* _name;
	time_t _time;
	int _priority;
};