#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	v.assign(5, 10);
	cout << "Vector v size is " << v.size() << endl;
	return 0;
}
