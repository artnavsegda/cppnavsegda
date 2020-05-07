#include <iostream>
#include <stack>

using namespace std;

int main()
{
	stack<int> v;
	v.pop();
	cout << "Stack v size is " << v.size() << endl;
	return 0;
}
