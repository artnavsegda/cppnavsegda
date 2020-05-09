#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> v(6,42);
	cout << "Deque v size is " << v.size() << endl;
	return 0;
}
