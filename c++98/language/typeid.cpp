#include <iostream>
#include <typeinfo>
using namespace std;

struct myclass
{
	int i;
	void printi();
};

struct otherclass : myclass
{
	int x;
};

void myclass::printi()
{
	cout << i << endl;
}

int main()
{
	myclass myobj;
	myobj.i = 10;
	myobj.printi();
	otherclass myobj3;
	myobj3.i = 11;
	myobj3.x = 12;
	myobj3.printi();

  cout << typeid(myobj).name() << endl;
  cout << typeid(myobj3).name() << endl;
}

