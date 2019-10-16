#include <stdio.h>

struct myclass
{
	int i;
	static int x;
	void printi();
	static void printx();
};

int myclass::x = 0;

void myclass::printi()
{
  printf("%d\n", i);
}

void myclass::printx()
{
  printf("%d\n", x);
}

int main()
{
	myclass::x = 20;
	myclass::printx();
	myclass myobj;
	myobj.i = 10;
	myobj.printi();
}

