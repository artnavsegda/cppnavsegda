#include <iostream>
using namespace std;

struct myclass
{
	int i;
	void printi();
};

void myclass::printi()
{
	cout << this->i << endl;
}

int main()
{
	myclass myobj;
	myobj.i = 10;
	myobj.printi();
}

