#include <iostream.h>

class myclass
{
	int i;
	public:
		void printi();
		void seti(int itoset);
};

void myclass::printi()
{
	cout << i << endl;
}

void myclass::seti(int itoset)
{
	i = itoset;
}

int main()
{
	myclass myobj;
	myobj.seti(20);
	myobj.printi();
}
