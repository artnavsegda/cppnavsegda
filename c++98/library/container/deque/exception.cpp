#include <iostream>
#include <deque>

using namespace std;

int main()
{
	deque<int> v(6,42);
	try {
		cout << "Deque v element 7 is " << v[7] << endl;
	} catch (out_of_range) {
		cerr << "Out of range" << endl;
	}
	return 0;
}
