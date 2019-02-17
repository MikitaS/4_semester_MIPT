#pragma once
#include <cmath>

class vector
{
public:
///constructors:
	vector();//done, tested
	vector(double amx, double amy);//done, tested
	vector(const vector & other);//done, tested
	
///methods:
	inline double length() const { return sqrt(x*x + y*y);} //done, tested
	inline double sqlength() const { return x*x + y*y;} //done, tested
	vector & invert();//done, tested
	inline double & X() { return this->x;} //done, tested
	inline double & Y() { return this->y;} //done, tested
	vector norm() const; //done, tested
	inline vector perpendicular() const { return vector(y, -x);} // done, tested
	
///Operators:
	vector & operator=(vector const & other);//done, tested
	vector & operator+=(vector const & other);//done, tested
	vector & operator-=(vector const & other);//done, tested
	
	vector operator+(vector const & other) const;
	vector operator-(vector const & other) const;
	double operator*(vector const & other) const;
	double operator^(vector const & other) const;
	
	vector operator-() const;
	vector operator+() const; 
	
	vector operator*(double num) const;
	friend vector operator*(double num, vector const & vect);
	vector operator/(double num) const;
	
	friend std::istream & operator >> (std::istream & is, vector & vect);//done, tested
	friend std::ostream & operator << (std::ostream & os, vector const & vect);//done, tested
	
///destructor:
	~vector();//done, tested
private:
	double x;
	double y;	
};

std::istream & operator >> (std::istream & is, vector & vect);
std::ostream & operator << (std::ostream & os, vector const & vect);
