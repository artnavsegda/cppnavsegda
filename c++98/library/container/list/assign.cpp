#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> v;
	v.assign(5, 10);
	cout << "List v size is " << v.size() << endl;
	return 0;
}
