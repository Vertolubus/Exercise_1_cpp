#pragma once
#include <exception>

class DifferentLengthsException : public std::exception {
public:
	DifferentLengthsException(const char* theMessage) : exception(theMessage) { }
};