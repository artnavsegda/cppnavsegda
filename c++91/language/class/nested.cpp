#include <iostream.h>

struct myclass
{
	int i;
	void printi();
	struct nestclass
	{
		int y;
		void printy();
	};
};

void myclass::printi()
{
	cout << i << endl;
}

void myclass::nestclass::printy()
{
	cout << y << endl;
}

int main()
{
	myclass myobj;
	myobj.i = 10;
	myobj.printi();
}

