#include <iostream>

using namespace std;

void testfunc(int &i)
{
	i = 20;
}

int main()
{
	int x = 10;
	cout << x << endl;
	int & y = x;
	y = 14;
	cout << x << endl;
	cout << y << endl;
	testfunc(x);
	cout << x << endl;
}

