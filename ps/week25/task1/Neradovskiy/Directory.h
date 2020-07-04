#pragma once
#include <fstream>
#include "Firm.h"

class Directory
{
public:
	Directory(const char* name);
	bool add(const std::string& name, const std::string& owner, const std::string& phone,
		const std::string& address, const std::string& occupation);
	Firm* searchCriteria(const std::string& criteria);
	bool changeFirm(const Firm& oldFirm, const Firm& newFirm);
	std::string toString();
	bool isExist(const Firm& firm);

private:
	std::ofstream _out;
	std::ifstream _in;
	std::string _fileName;
};