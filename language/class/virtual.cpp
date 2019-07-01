#include <iostream>
using namespace std;

struct myclass
{
	virtual void printi() = 0;
};

struct otherclass : myclass
{
	int i;
	void printi();
};

void otherclass::printi()
{
	cout << i << endl;
}

int main()
{
	otherclass myobj;
	myobj.i = 11;
	myobj.printi();
}

