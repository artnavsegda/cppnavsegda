#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> v;
	v.push_back(44);
	cout << "Deque v element 0 is " << v[0] << endl;
	cout << "Deque v size is " << v.size() << endl;
	return 0;
}
