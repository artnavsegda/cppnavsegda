#include <iostream>
using namespace std;

struct myclass
{
	myclass();
	~myclass();
	int i;
	void printi();
};

myclass::myclass()
{
	cout << "Class created\n";
}

myclass::~myclass()
{
	cout << "Class destroyed\n";
}

void myclass::printi()
{
	cout << i << endl;
}

int main()
{
	myclass myobj;
	myobj.i = 10;
	myobj.printi();
}

