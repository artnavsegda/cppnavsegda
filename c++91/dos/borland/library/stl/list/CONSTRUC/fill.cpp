#include <iostream.h>
#include <list.h>

int main()
{
	list<int> v(3,42);
	cout << "List v size is " << v.size() << endl;
	return 0;
}
