//
// Created by boklazhenko on 18.04.2020.
//

#include "message.h"

const char* copyStr(const char* str) {
	char* newStr = new char[strlen(str) + 1];
	strcpy(newStr, str);
	return newStr;
}

Context::Context(const char* key, const char* value)
	:_key(copyStr(key)), _value(copyStr(value)) {}


Context::Context(const Context& other)
	: _key(copyStr(other._key)), _value(copyStr(other._value)) {}

Context::~Context() {
	delete[] _key, _value;
}

Context& Context::operator=(Context other) {
	swap(*this, other);
	return *this;
}

bool Context::operator==(const Context& other) const {
	return strcmp(this->_key, other._key) == 0 && strcmp(this->_value, other._value) == 0;
}

bool Context::operator!=(const Context& other) const {
	return !(*this == other);
}

const char* Context::key() const {
	return _key;
}

const char* Context::value() const {
	return _value;
}

const char* Context::toString() const
{
	char buff[1000];
	size_t size = sprintf(buff, "%s", "%s", _key, _value);
	char* pString = new char[size + 1];
	strcpy(pString, buff);
	return pString;
}

Contexts::Contexts()
	: _contexts(new Context* [0]), _size(0) {}

Contexts::Contexts(Context** contexts, size_t size) {
	_size = size;
	_contexts = new Context * [_size];
	for (int i = 0; i < _size; ++i)
		_contexts[i] = new Context(*contexts[i]);
}

Contexts::Contexts(const Contexts& other)
{
	_size = other._size;
	_contexts = new Context * [_size];

	for (int i = 0; i < _size; ++i) {
		_contexts[i] = new Context(*other._contexts[i]);
	}
}

Contexts::~Contexts() {
	for (int i = 0; i < _size; ++i)
		delete _contexts[i];
	delete[] _contexts;
}

Contexts& Contexts::operator=(Contexts other) {
	swap(*this, other);
	return *this;
}

bool Contexts::operator==(const Contexts& other) const {
	if (_size != other._size)
		return false;
	for (int i = 0; i < _size; ++i)
		if (*_contexts[i] != *other._contexts[i])
			return false;
	return true;
}

bool Contexts::operator!=(const Contexts& other) const {
	return !(*this == other);
}

const Context* Contexts::operator[](int index) const {
	return 0 <= index && index < _size ? _contexts[index] : nullptr;
}

size_t Contexts::size() const {
	return _size;
}

Message::Message(const char* msg, const Contexts& contexts)
	:_msg(copyStr(msg)), _contexts(contexts) {}

Message::Message(const Message& other)
	: _msg(copyStr(other._msg)), _contexts(other._contexts) {}
Message::~Message() {
	delete[] _msg;
}

Message& Message::operator=(Message other) {
	swap(*this, other);
	return *this;
}

bool Message::operator==(const Message& other) const {
	return (strcmp(_msg, other._msg) == 0) && (_contexts == other._contexts);
}

bool Message::operator!=(const Message& other) const {
	return !(*this == other);
}

const char* const Message::toString() const {
	char buff[1000];
	size_t size = sprintf(buff, "%s", _msg);
	size_t count = _contexts.size();
	for (int i = 0; i < count; ++i) {
		const char* dump = _contexts[i]->toString();
		size += strlen(_contexts[i]->toString());
		strcat(buff, dump);
		delete[] dump;
	}
	char* pString = new char[size + 1];
	strcpy(pString, buff);
	return pString;								// возможна утечка памяти
}

std::ostream& operator<<(std::ostream& out, const Message& msg) {

	return out << msg.toString();
}

void swap(Context& lhs, Context& rhs) noexcept {
	std::swap(lhs._key, rhs._key);
	std::swap(lhs._value, rhs._value);
}

void swap(Contexts& lhs, Contexts& rhs) noexcept {
	using namespace std;
	swap(lhs._contexts, rhs._contexts);
	swap(lhs._size, rhs._size);
}

void swap(Message& lhs, Message& rhs) noexcept {
	std::swap(lhs._msg, rhs._msg);
	swap(lhs._contexts, rhs._contexts);
}
