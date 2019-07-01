#include <iostream>
using namespace std;

struct myclass
{
	int i;
	static int x;
	void printi();
	static void printx();
};

int myclass::x = 0;

void myclass::printi()
{
	cout << i << endl;
}

void myclass::printx()
{
	cout << x << endl;
}

int main()
{
	myclass::x = 20;
	myclass::printx();
	myclass myobj;
	myobj.i = 10;
	myobj.printi();
}

