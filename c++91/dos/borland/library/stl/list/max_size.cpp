#include <iostream.h>
#include <list.h>

int main()
{
	list<int> v(6,42);
	cout << "List v max size is " << v.max_size() << endl;
	return 0;
}
