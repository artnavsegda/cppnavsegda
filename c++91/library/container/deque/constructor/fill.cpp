#include <iostream.h>
#include <deque.h>

int main()
{
	deque<int> v(3,42);
	cout << "Deque v size is " << v.size() << endl;
	cout << "Deque v element 0 is " << v[0] << endl;
	cout << "Deque v element 1 is " << v[1] << endl;
	cout << "Deque v element 2 is " << v[2] << endl;
	return 0;
}
