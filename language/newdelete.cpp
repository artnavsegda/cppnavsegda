#include <iostream>

using namespace std;

int main()
{
	int * i = new int;
	*i = 34;
	cout << *i;
	cout << '\n';
	delete i;
}

