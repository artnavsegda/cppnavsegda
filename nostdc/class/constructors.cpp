#include <stdio.h>

struct myclass
{
	myclass();
	myclass(int i);
	myclass(myclass &obj);
	myclass(myclass &&obj);
	~myclass();
};

myclass::myclass()
{
	printf("Class created\n");
}

myclass::myclass(int i)
{
	printf("Class created with parameter %d\n", i);
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

int main()
{
	myclass * mylink = new myclass();
	delete mylink;
	myclass myobj;
	myclass myobj2 = myobj;
	myclass myobj3(20);
}

