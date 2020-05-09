#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> v(3,42);
	cout << "Deque v element 1 is " << v.at(1) << endl;
	return 0;
}
