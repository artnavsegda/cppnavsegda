#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> v(6,42);
	v.pop_front();
	cout << "Deque v size is " << v.size() << endl;
	return 0;
}
