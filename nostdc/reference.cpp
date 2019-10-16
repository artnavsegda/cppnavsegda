#include <stdio.h>

void testfunc(int &i)
{
	i = 20;
}

int main()
{
	int x = 10;
	printf("%d\n", x);
	int & y = x;
	y = 14;
	printf("%d\n", x);
	printf("%d\n", y);
	testfunc(x);
	printf("%d\n", x);
	int * p;
	int * & r = p;
	r = &x;
	printf("%d\n",* p);
}

