#include <iostream.h>
#include <list.h>

int main()
{
	list<int> v(3,42);
	cout << "List v size is " << v.size() << endl;
	list<int> a(v);
	cout << "List a size is " << a.size() << endl;
	return 0;
}
