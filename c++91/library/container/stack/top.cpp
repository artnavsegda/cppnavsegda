#include <iostream>
#include <stack>

int main()
{
	stack<int> v;
	v.push(44);
	cout << "Stack top element is " << v.top() << endl;
	return 0;
}
