#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> v(6,42);
	v.erase(v.begin());
	cout << "List v size is " << v.size() << endl;
	return 0;
}
