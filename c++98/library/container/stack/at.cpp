#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(3,42);
	cout << "Vector v element 1 is " << v.at(1) << endl;
	return 0;
}
