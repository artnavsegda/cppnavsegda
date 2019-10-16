#include <stdio.h>

struct myclass
{
	void operator !();
};

void myclass::operator !()
{
	printf("Double cross\n");
}

int main()
{
	myclass myobj;
	!myobj;
}

