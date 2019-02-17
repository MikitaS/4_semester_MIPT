#include <iostream>
#include "vector.hpp"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	vector vec1;
	vector vec2(1.5, -5);
	cout << "first: " << vec1 << " second: " << vec2 << endl;
	cin >> vec1;
	cout << vec1 << endl;
	return 0;
}
