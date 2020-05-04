#include <iostream>
#include <deque>

using namespace std;

int main()
{
	int arr[] = { 10, 20, 30 };

	deque<int> v(arr, arr+3);
	cout << "deque v size is " << v.size() << endl;
	cout << "deque v element 0 is " << v[0] << endl;
	cout << "deque v element 1 is " << v[1] << endl;
	cout << "deque v element 2 is " << v[2] << endl;
	return 0;
}
