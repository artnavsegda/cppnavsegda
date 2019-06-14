#include <iostream>
using namespace std;

struct myclass
{
	int i;
	void printi()
	{
		cout << i << endl;
	}
};

int main()
{
	myclass myobj;
	myobj.i = 10;
	myobj.printi();
}

