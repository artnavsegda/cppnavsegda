#include <iostream>
#include <queue>

using namespace std;

int main()
{
	queue<int> v;
	v.push(44);
	cout << "Queue v size is " << v.size() << endl;
	v.pop();
	cout << "Queue v size is " << v.size() << endl;
	return 0;
}
