#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> v;
	if (v.empty())
		cout << "Vector v is empty\n";
	else
		cout << "Vector v is not empty\n";
	return 0;
}
