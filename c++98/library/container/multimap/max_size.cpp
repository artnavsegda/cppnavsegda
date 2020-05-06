#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v(6,42);
	cout << "Vector v max size is " << v.max_size() << endl;
	return 0;
}
