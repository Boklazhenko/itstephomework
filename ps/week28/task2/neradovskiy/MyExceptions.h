#pragma once
#include <iostream>

namespace BadPtr {
	class BadPtr : public std::exception
	{
	public:
		const char* what() const {
			return "Bad pointer";
		}
	};
}
namespace InvalidData {
	class InvalidData : public std::exception {
	public:
		virtual ~InvalidData() = default;
		virtual const char* what() const {
			return "Invalid data";
		}
	};

	class BadName : public InvalidData {
	public:
	virtual	const char* what() const {
			return "Invalid name";
		}
	};

	class BadLastName : public InvalidData {
	public:
	virtual	const char* what() const {
			return "Invalid last name";
		}
	};

	class BadPhone : public InvalidData {
	public:
		const char* what() const {
			return "Invalid telephone";
		}
	};
}