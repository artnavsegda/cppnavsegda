#include <iostream.h>
#include <deque.h>

int main()
{
	deque<int> a(3,42);

	deque<int> v(a.begin(), a.end());
	cout << "Deque v size is " << v.size() << endl;
	return 0;
}
