#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> v(6,42);
	v.pop_back();
	cout << "List v size is " << v.size() << endl;
	return 0;
}
