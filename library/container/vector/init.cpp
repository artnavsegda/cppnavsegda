#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(6,42);
	cout << "Vector v element 3 is " << v[3] << endl;
	cout << "Vector v element 0 is " << v[0] << endl;
	return 0;
}
