#include <stdio.h>

struct myclass
{
	myclass();
	myclass(myclass &obj);
	myclass(myclass &&obj);
	~myclass();
	int i;
	void printi();
	void operator !();
};

struct otherclass : myclass
{
	int x;
};

myclass::myclass()
{
	printf("Class created\n");
}

myclass::myclass(myclass &obj)
{
	printf("Class copied\n");
}

myclass::myclass(myclass &&obj)
{
	printf("Class moved\n");
}

myclass::~myclass()
{
	printf("Class destroyed\n");
}

void myclass::operator !()
{
	printf("Double cross\n");
}

void myclass::printi()
{
	printf("%d\n", i);
}

int main()
{
	myclass myobj;
	myobj.i = 10;
	myobj.printi();
	!myobj;
	myclass myobj2 = myobj;
	otherclass myobj3;
	myobj3.i = 11;
	myobj3.printi();
}

