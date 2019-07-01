#include <iostream>

using namespace std;

void testfunc(int &i)
{
	i = 20;
}

int main()
{
	int x = 10;
	int & y = x;
	testfunc(x);
	cout << x;
	cout << '\n';
}

