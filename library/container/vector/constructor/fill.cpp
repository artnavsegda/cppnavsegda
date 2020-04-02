#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(3,42);
	cout << "Vector v size is " << v.size() << endl;
	cout << "Vector v element 0 is " << v[0] << endl;
	cout << "Vector v element 1 is " << v[1] << endl;
	cout << "Vector v element 2 is " << v[2] << endl;
	return 0;
}
