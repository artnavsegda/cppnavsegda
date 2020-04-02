#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(6,42);
	cout << "Vector v size is " << v.size() << endl;
	cout << "Vector v element 3 is " << v[3] << endl;
	vector<int> r;
	r.push_back(44);
	cout << "Vector r size is " << r.size() << endl;
	cout << "Vector v element 0 is " << v[0] << endl;
	return 0;
}
