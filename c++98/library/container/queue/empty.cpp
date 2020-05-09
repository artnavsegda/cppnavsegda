#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> v;
	if (v.empty())
		cout << "Stack v is empty\n";
	else
		cout << "Stack v is not empty\n";
	return 0;
}
