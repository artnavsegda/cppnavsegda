#include "std_lib_facilities.h"

int main()
{
	vector<int> v = { 1,2,3,4,5 };
	vector<int>::iterator ptr;
	for (ptr = v.begin(); ptr < v.end(); ptr++)
		cout << *ptr << endl;
	return 0;
}
