#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> v(6,42);
	cout << "Deque v max size is " << v.max_size() << endl;
	return 0;
}
