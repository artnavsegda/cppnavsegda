#include <iostream.h>
#include <vector.h>

int main()
{
	vector<int> v(6,42);
	v.pop_back();
	cout << "Vector v size is " << v.size() << endl;
	return 0;
}
