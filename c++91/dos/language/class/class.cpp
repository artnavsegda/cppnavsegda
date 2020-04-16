#include <iostream.h>

class myclass
{
	public:
		int i;
		void printi();
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
