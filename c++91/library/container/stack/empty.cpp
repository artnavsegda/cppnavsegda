#include <iostream.h>
#include <stack.h>

int main()
{
	stack<int> v;
	if (v.empty())
		cout << "Stack v is empty\n";
	else
		cout << "Stack v is not empty\n";
	return 0;
}
