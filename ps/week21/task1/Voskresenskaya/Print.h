#pragma once
#include "Client.h"
#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip> 
class Print
{
public:
	Print();
	~Print();
	void Add(Client* client);
	void show();
	Client& Extract();
	void addHistory(Client& client);
	void showHistory();
	bool IsEmpty();
	void sortClients(Client* client);
	size_t count();
private:
	size_t _size;
	Client* _client;
	History* _history;
	size_t _sizeHistory;
};

Print::Print()
{
	_size = 0;
	_client = new  Client[_size];
	_sizeHistory = 0;
	_history = new History[_sizeHistory];
}

Print::~Print()
{
	delete[] _client;
	delete[]  _history;
}

inline void Print::Add(Client* client)
{
	Client* tmp = new  Client[_size + 1];
	for (size_t i = 0; i < _size; ++i)
	{
		tmp[i] = _client[i];
	}
	tmp[_size] = *client;
	delete[] _client;
	_client = tmp;
	sortClients(_client);
	++_size;
}
inline void Print::sortClients(Client* client)
{
	size_t index = 0;
	for (size_t i = 0; i < _size; ++i)
	{
		if (client[i].prioritet() <= client[_size - 1].prioritet())
			continue;
		else
		{
			index = i;
			break;
		}
	}
	if (index == 0)
		return;
	Client last = client[_size - 1];
	for (size_t i = _size - 1; i >= index; --i)
	{
		client[i] = client[i - 1];
	}
	client[index] = last;
}

inline size_t Print::count()
{
	return _size;
}

inline void Print::show()
{
	for (size_t i = 0; i < _size; ++i)
	{
		std::cout << _client[i];
	}
}

inline void Print::addHistory(Client& client)
{
	History* tmpHistory = new History[_sizeHistory + 1];
	for (size_t i = 0; i < _sizeHistory; ++i)
	{
		tmpHistory[i]._name = _history[i]._name;
		tmpHistory[i]._now = _history[i]._now;
	}
	tmpHistory[_sizeHistory]._name = client.name();
	tmpHistory[_sizeHistory]._now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	++_sizeHistory;
	delete[] _history;
	_history = tmpHistory;
}

inline Client& Print::Extract()
{
	Client* tmp = new  Client[_size - 1];
	Client first = _client[0];
	for (size_t i = 0; i < _size - 1; ++i)
	{
		tmp[i] = _client[i + 1];
	}
	delete[] _client;
	_client = tmp;
	--_size;
	addHistory(first);
	return first;
}

inline void Print::showHistory()
{
	for (size_t i = 0; i < _sizeHistory; ++i)
	{
		char str[26];
		ctime_s(str, sizeof str, &_history[i]._now);
		std::cout << _history[i]._name << " " << str << std::endl;
	}
}

inline bool Print::IsEmpty()
{
	return _size == 0;
}











