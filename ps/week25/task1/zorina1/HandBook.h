#pragma once
#include <iostream>
#include <fstream>
#include "Company.h"
using namespace std;

class HandBook {
	public:
		void addCompany(const Company& company);
		string HandBookToString();
		string searchByCriteria(const string str);

private:
	fstream _fs;
	string _path = "handBook.txt";
};