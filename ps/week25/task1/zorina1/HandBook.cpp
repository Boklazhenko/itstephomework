#include "HandBook.h"
#include "Company.h"
#include <fstream>
#include <sstream>
using namespace std;

void HandBook::addCompany(const Company& company) {
	_fs.open(_path, ostream::out | ostream::in | ostream::app);
	if (!_fs.is_open())
		exit(-1);
	_fs << company << endl;
	_fs.close();
}

string HandBook::HandBookToString() {
	Company company;
	_fs.open(_path);
	if (!_fs.is_open())
		exit(-1);
	ostringstream sout;
	while (!_fs.eof()){
		_fs >> company;
		sout << company.companyToString();
	}
	_fs.close();
	return sout.str();
}

string HandBook::searchByCriteria(const string str)  {
	Company tempComp;
	_fs.open(_path);
	if (!_fs.is_open())
		exit(-1);
	ostringstream sout;
	while (!_fs.eof()) {
		_fs >> tempComp;
		if (tempComp.getName() == str || tempComp.getOwner() == str || tempComp.getPhoneNumber() == str ||
			tempComp.getAddress() == str || tempComp.getSphere() == str)
			sout << tempComp.companyToString();
	}
	_fs.close();
	return sout.str();
}