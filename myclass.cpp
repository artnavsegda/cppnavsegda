#include <iostream>
using namespace std;

struct myclass
{
	myclass();
	int i;
	void printi();
};

myclass::myclass()
{
	cout << "Class created\n";
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

