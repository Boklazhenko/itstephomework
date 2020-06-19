#define _CRT_SECURE_NO_WARNINGS
#include "clientReq.h"


ClientReq::ClientReq()
	: _name(0), _time(0), _priority(0) {}

ClientReq::ClientReq(const char* name, int printValue)
	: _name(name), _time(time(nullptr)), _priority(printValue) {}

int ClientReq::showPriority()const{
	return _priority;
}

const char* const ClientReq::toString() const {
	char* buff = new char[80];
	sprintf(buff, "%s " "%d", _name, _time);
	return buff;
}