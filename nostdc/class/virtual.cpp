#include <stdio.h>

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
	printf("%d\n", i);
}

int main()
{
	otherclass myobj;
	myobj.i = 11;
	myobj.printi();
}

