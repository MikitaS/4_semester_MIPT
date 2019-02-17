#pragma once

class vector
{
public:
///constructors:
	vector();//done
	vector(double amx, double amy);//done
	vector(const vector & other);
	
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
	
	friend std::istream & operator >> (std::istream & is, vector & vect);//done
	friend std::ostream & operator << (std::ostream & os, vector const & vect);//done
	
///destructor:
	~vector();//done
private:
	double x;
	double y;	
};

std::istream & operator >> (std::istream & is, vector & vect);
std::ostream & operator << (std::ostream & os, vector const & vect);
