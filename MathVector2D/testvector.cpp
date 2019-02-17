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
	
	return 0;
}
