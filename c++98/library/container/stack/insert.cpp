#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(6,42);
	v.insert(v.begin(),5);
	cout << "Vector v size is " << v.size() << endl;
	return 0;
}
