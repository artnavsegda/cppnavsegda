#include "std_lib_facilities.h"

int main()
{
	vector<int> v(6,42);
	try {
		cout << "Vector v element 7 is " << v[7] << endl;
	} catch (out_of_range) {
		cerr << "Out of range" << endl;
	}
	return 0;
}