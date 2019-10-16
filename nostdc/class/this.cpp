#include <stdio.h>

struct myclass
{
	int i;
	void printi();
};

void myclass::printi()
{
	printf("%d\n", this->i);
}

int main()
{
	myclass myobj;
	myobj.i = 10;
	myobj.printi();
}

