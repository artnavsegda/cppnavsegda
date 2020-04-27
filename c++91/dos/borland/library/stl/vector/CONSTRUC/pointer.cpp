#include <iostream.h>
#include <vector.h>

int main()
{
	int arr[] = { 10, 20, 30 };

	vector<int> v(arr, arr+3);
	cout << "Vector v size is " << v.size() << endl;
	cout << "Vector v element 0 is " << v[0] << endl;
	cout << "Vector v element 1 is " << v[1] << endl;
	cout << "Vector v element 2 is " << v[2] << endl;
	return 0;
}
