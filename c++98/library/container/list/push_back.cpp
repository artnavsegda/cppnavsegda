#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> v;
	v.push_back(44);
	cout << "List v size is " << v.size() << endl;
	return 0;
}
