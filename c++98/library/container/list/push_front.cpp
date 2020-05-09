#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> v;
	v.push_front(44);
	cout << "list v size is " << v.size() << endl;
	return 0;
}
