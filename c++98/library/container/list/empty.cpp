#include <iostream>
#include <list>

using namespace std;

int main()
{
	list<int> v;
	if (v.empty())
		cout << "List v is empty\n";
	else
		cout << "List v is not empty\n";
	return 0;
}
