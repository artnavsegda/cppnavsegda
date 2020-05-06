#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;

	for (int count=0; count < 5; ++count)
			v.push_back(count);

	vector<int>::iterator ptr;
	for (ptr = v.begin(); ptr < v.end(); ptr++)
		cout << *ptr << endl;
	return 0;
}
