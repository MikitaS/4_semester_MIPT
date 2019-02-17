#include <iostream>
#include <cmath>
#include "vector.hpp"

///Friends input, output:
std::ostream & operator << (std::ostream & os, vector const & vect)
{
	os << vect.x << " " << vect.y;
	return os;
}

std::istream & operator >> (std::istream & is, vector & vect)
{
	is >> vect.x >> vect.y;
	return is;
}

///Constructors:
vector::vector() : x(0), y(0) {}

vector::vector(double amx, double amy) : x(amx), y(amy)	{}

vector::vector(vector const & other)
{
	this->x = other.x;
	this->y = other.y;
}

///Methods:

///Destructor:
vector::~vector() {}
