#include "Directory.h"

Directory::Directory(const char* name)
{
	_fileName = name;
}

bool Directory::add(const std::string& name, const std::string& owner, const std::string& phone, const std::string& address, const std::string& occupation)
{
	Firm firm(name, owner, phone, address, occupation);
	_out.open(_fileName, std::ofstream::out | std::ofstream::app);

	if (searchCriteria(name) != nullptr)
		return false; // !!!

	if (!_out.is_open())
		return false;

	_out << firm;
	_out.close();
	return true;
}

Firm* Directory::searchCriteria(const std::string& criteria)
{
	Firm* firm = new Firm;
	_in.open(_fileName);
	if (!_in.is_open())
		return nullptr;
	while (!_in.eof())
	{
		_in >> (*firm);
		if (firm->getName() == criteria) {
			_in.close();
			return firm;
		}
	}
	_in.close();
	return nullptr;
}

bool Directory::changeFirm(const Firm& oldFirm, const Firm& newFirm)
{
	if (!isExist(oldFirm))
		return false;
	if (isExist(newFirm))
		return false;
	std::string tempFileName = "temp.txt";
	_in.open(_fileName);
	std::ofstream tempFile(tempFileName);
	if (!_in.is_open() && !tempFile.is_open())
		return false;
	Firm firm;
	while (!_in.eof())
	{
		_in >> firm;
		if (firm == oldFirm)
			firm = newFirm;
		tempFile << firm;
	}
	tempFile.close();
	_in.close();
	if (remove(_fileName.c_str()))
		return false;
	rename(tempFileName.c_str(), _fileName.c_str());
	return true;
}

std::string Directory::toString()
{
	Firm firm;
	_in.open(_fileName);
	if (!_in.is_open())
		return nullptr;
	std::ostringstream sout;
	while (!_in.eof())
	{
		_in >> firm;
		sout << firm.toString();
	}
	_in.close();
	return sout.str();
}

bool Directory::isExist(const Firm& firm)
{
	Firm temp;
	_in.open(_fileName);
	if (!_in.is_open())
		return false;
	while (!_in.eof())
	{
		_in >> temp;
		if (temp == firm) {
			_in.close();
			return true;
		}
	}
	_in.close();
	return false;
}
