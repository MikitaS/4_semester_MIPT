#pragma once

class vector
{
public:
///constructors:
	vector();//done, tested
	vector(double amx, double amy);//done, tested
	vector(const vector & other);//done, tested
	
///methods:
	inline double length() const;
	inline double sqlength() const;
	void invert();
	double & X();
	double & Y();
	vector norm();
	vector perpendicular();
	
///operators:
	vector & operator=(vector const & other);
	vector & operator+=(vector const & other);
	vector & operator-=(vector const & other);
	
	vector operator+(vector const & other) const;
	vector operator-(vector const & other) const;
	vector operator*(vector const & other) const;
	vector operator^(vector const & other) const;
	
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
