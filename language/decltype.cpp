#include <iostream>

using namespace std;

int main()
{
	int x = 10;
	decltype(x) i = 42;
	cout << i << endl;
	return 0;
}
