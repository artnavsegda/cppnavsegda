#include <iostream>
#include <vector>

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	std::vector<int>::iterator ptr;
	for (ptr = v.begin(); ptr < v.end(); ptr++)
		cout << *ptr << endl;
	return 0;
}
