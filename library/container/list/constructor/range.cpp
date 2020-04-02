#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> v(3,42);
	cout << "List v size is " << v.size() << endl;
	list<int> a(v.begin(), v.end());
	cout << "List a size is " << a.size() << endl;
	return 0;
}
