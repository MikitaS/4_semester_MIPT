#include <iostream>
#include "vector.hpp"

using std::cout;
using std::cin;
using std::endl;

/*!
*Test Driving Development
*All functions and operators were tested in main after its realization
*If function have been already tested some tests might be deleted
*/

int main()
{
	vector vec1;
	vector vec2(1.5, -5);
	
	cout << "first: " << vec1 << " second: " << vec2 << endl;
	
	vector vec3 = vec2;
	cout << vec3 << endl;
	
	vector vec4(3,4);
	cout << vec4.length() << endl;
	cout << vec4.sqlength() << endl;
	
	cout << vec4.invert() << endl;
	
	vec1.X() = 2;
	vec1.Y() = 10;
	cout << vec1 << endl;
	
	cout << vec1.perpendicular() << endl;
	cout << vec1.norm() << endl;
	
	vec1 = vec2;
	cout << vec1 << endl;
	
	vec1 += vec3;
	vec2 -= vec3;
	cout << vec1 << " " << vec2 << endl;
	
	vector vec5(1, 2), vec6(3, 4);
	cout << vec5 + vec6 << endl;
	cout << vec5 - vec6 << endl;
	
	return 0;
}
