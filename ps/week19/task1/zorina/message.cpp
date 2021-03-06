//
// Created by boklazhenko on 18.04.2020.
//

#define _CRT_SECURE_NO_WARNINGS
#include "message.h"

char* copyString(const char* string) {
	char* newString = new char[strlen(string) + 1];
	strcpy(newString, string);
	return newString;
}

Context::Context(const char* key, const char* value)
	:_key(copyString(key)), _value(copyString(value)) {}

Context::Context(const Context& other)
	: _key(copyString(other._key)), _value(copyString(other._value)) {}

Context::~Context() {
	delete[] _key;
	delete[] _value;
}

Context& Context::operator=(Context other) {
	swap(*this, other);
	return *this;
}

bool Context::operator==(const Context& other) const {
	return (strcmp(_key, other._key) == 0 && strcmp(_value, other._value) == 0);
}

bool Context::operator!=(const Context& other) const {
	return !(this->operator==(other));
}

const char* Context::key() const {
	return _key;
}

const char* Context::value() const {
	return _value;
}

Contexts::Contexts()
	:_size(0), _contexts(new Context* [0]) {}

Contexts::Contexts(Context** contexts, size_t size)
	: _size(size), _contexts(contexts) {}

Contexts::Contexts(const Contexts& other) {
	_size = other._size;
	_contexts = new Context * [_size];
	for (size_t i = 0; i < _size; ++i)
		_contexts[i] = new Context(*other._contexts[i]);
}

Contexts::~Contexts() {
	for (size_t i = 0; i < _size; ++i)
		delete _contexts[i];
	delete[] _contexts;
}

Contexts& Contexts::operator=(Contexts other) {
	swap(*this, other);
	return *this;
}

bool Contexts::operator==(const Contexts& other) const {
	if (_size == other._size) {
		for (size_t i = 0; i < _size; ++i)
			return *_contexts[i] == *other._contexts[i];
	}
	return false;
}

bool Contexts::operator!=(const Contexts& other) const {
	return !(this->operator==(other));
}

const Context* Contexts::operator[](int index) const {
	return 0 <= index && index < _size ? _contexts[index] : nullptr;
}

size_t Contexts::size() const {
	return _size;
}

Message::Message(const char* msg, const Contexts& contexts)
	:_msg(copyString(msg)), _contexts(contexts) {}

Message::Message(const Message& other)
	: _msg(copyString(other._msg)), _contexts(other._contexts) {}

Message::~Message() {
	delete[]_msg;
}

Message& Message::operator=(Message other) {
	swap(*this, other);
	return *this;
}

bool Message::operator==(const Message& other) const {
	return strcmp(_msg, other._msg) == 0 && _contexts == other._contexts;
}

bool Message::operator!=(const Message& other) const {
	return !(this->operator==(other));
}

const char* const Message::toString() const {
	size_t length = strlen(_msg) + 1;
	for (size_t i = 0; i < _contexts.size(); ++i)
		length += strlen(_contexts[i]->key()) + strlen(_contexts[i]->value());
	char* buff = new char[length];
	sprintf(buff," %s", _msg);
	for (size_t i = 0; i < _contexts.size(); ++i) {
		strcat(buff, _contexts[i]->key());
		strcat(buff, _contexts[i]->value());
	}
	return buff;
}

std::ostream& operator<<(std::ostream& out, const Message& msg) {
	return out << msg.toString();
}

void swap(Context& lhs, Context& rhs) noexcept {
	using namespace std;
	swap(lhs._key, rhs._key);
	swap(lhs._value, rhs._value);
}

void swap(Contexts& lhs, Contexts& rhs) noexcept {
	using namespace std;
	swap(lhs._contexts, rhs._contexts);
	swap(lhs._size, rhs._size);
}

void swap(Message& lhs, Message& rhs) noexcept {
	using namespace std;
	swap(lhs._contexts, rhs._contexts);
	swap(lhs._msg, rhs._msg);
}