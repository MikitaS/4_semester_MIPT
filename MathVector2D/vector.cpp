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

///Non-inline methods:
vector & vector::invert()
{
	double swaper = this->x;
	this->x = this->y;
	this->y = swaper; 
}

vector vector::norm() const
{
	double len = this->length();
	return vector(x/len, y/len);
}

///Operators:
vector & vector::operator=(vector const & other)
{
	this->x = other.x;
	this->y = other.y;
	return *this;
}

vector & vector::operator+=(vector const & other)
{
	this->x +=other.x;
	this->y +=other.y;
	return *this;
}

vector & vector::operator-=(vector const & other)
{
	this->x -=other.x;
	this->y -=other.y;
	return *this;
}

vector vector::operator+(vector const & other) const
{
	return vector(x + other.x, y + other.y);
}

vector vector::operator-(vector const & other) const
{
	return vector(x - other.x, y - other.y);
}


///Destructor:
vector::~vector() {}
