#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> v;
	v.push(44);
	cout << "Stack top element is " << v.top() << endl;
	return 0;
}
