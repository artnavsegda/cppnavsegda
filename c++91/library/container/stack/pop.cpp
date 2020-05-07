#include <iostream.h>
#include <stack.h>

int main()
{
	stack<int> v;
	v.push(44);
	cout << "Stack v size is " << v.size() << endl;
	v.pop();
	cout << "Stack v size is " << v.size() << endl;
	return 0;
}
