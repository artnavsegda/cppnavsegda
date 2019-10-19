#include <iostream>
using namespace std;

namespace myspace
{
	int i = 100;
	void hello(void);
}

void myspace::hello(void)
{
	cout << "hello\n";
}

int main()
{
	cout << myspace::i;
	cout << '\n';
	myspace::hello();
}
