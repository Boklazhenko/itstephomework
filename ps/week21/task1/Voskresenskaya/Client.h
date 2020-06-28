#pragma once
#include <string>
#include <iostream>
#include <chrono>

enum Name 
{
	noName = 0,
	print1,
	print2,
	print3,
	print4,
	print5
};
enum Prioritet
{
	no = 0, 
	important, 
	middle, 
	unimportant

};
struct History
{
	Name _name;
	time_t _now;
};
class Client
{
public:
	Client();
	Client(Prioritet prioritet, Name name);
	~Client();
	std :: string  cinStr();
	Prioritet prioritet();
	Name name();
	void setPrioritet(Prioritet prioritet);
	void setStr(std::string str);
	std::string getStr();
	friend std::ostream& operator << (std::ostream& out, const Client& client);
	Client& operator=( Client other);
private:
	friend void swap(Client& lhs, Client& rhs) noexcept;
	Prioritet _prioritet;
	std::string _str;
	Name _name;
};
