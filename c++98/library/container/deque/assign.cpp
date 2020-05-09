#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> v;
	v.assign(5, 10);
	cout << "Deque v size is " << v.size() << endl;
	return 0;
}
