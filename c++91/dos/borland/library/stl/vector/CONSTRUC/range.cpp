#include <iostream.h>
#include <vector.h>

int main()
{
	vector<int> a(3,42);

	vector<int> v(a.begin(), a.end());
	cout << "Vector v size is " << v.size() << endl;
	return 0;
}
