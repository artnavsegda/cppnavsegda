#include <iostream>
using namespace std;

class myclass
{
	public:
		int i;
		void printi();
		class 
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
}

