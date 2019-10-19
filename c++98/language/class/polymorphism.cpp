#include <iostream>
using namespace std;

struct myclass
{
	int i;
	void printsome();
};

struct otherclass : myclass
{
	int x;
	void printsome();
};

void myclass::printsome()
{
	cout << i << endl;
}

void otherclass::printsome()
{
	cout << i*x << endl;
}

int main()
{
	myclass myobj;
	myobj.i = 10;
	myobj.printsome();
	otherclass myobj3;
	myobj3.i = 11;
	myobj3.x = 2;
	myobj3.printsome();
}

